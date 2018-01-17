package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.group.FlxGroup;
import flixel.FlxObject;
import flixel.tweens.*;
import flixel.system.FlxSound;
import flixel.util.FlxTimer;
import PlayState;

class Level extends FlxGroup {

    public static var unit:Int = 20;
    public static var Balls:Array<Ball>;
    public static var Paddles:Array<Paddle>;
    public static var Blocks:FlxTypedGroup<Obstacle>;
    public static var MoveyBlocks:Array<Obstacle>;

    public var midWall:Obstacle;

    var offsetY:Float = 0;
    var cOffsetY(default,set):Float = 0;
    var speed:Float = 0.5;
    var rumble:FlxSound;

    var blockArr:Array<Array<Array<Obstacle>>>;
    var trophy:FlxSprite;

    var numH:Int;
    var numW:Int;
    public static var TopRow:Float=1000;
    public static var BottomRow:Float;

    public function new() {
        super();

        Blocks = new FlxTypedGroup<Obstacle>();
        add(Blocks);
        var leftWall:Obstacle = cast add(new Obstacle(
                    -unit, 0, unit, FlxG.height, 0x11ffffff));
        leftWall.onHit = null;
        Blocks.add(leftWall);
        var rightWall:Obstacle = cast add(new Obstacle(
                    FlxG.width, 0, unit, FlxG.height, 0x11ffffff));
        rightWall.onHit = null;
        Blocks.add(rightWall);

        midWall = cast add(new Obstacle(
                    0, (FlxG.height-unit)/2,FlxG.width, unit, 0xff000000));
        midWall.onHit = null;
        Blocks.add(midWall);

        midWall.onHit = function(dir) {
            if(dir == FlxObject.DOWN) {
                move(-20);
            }
            else if(dir == FlxObject.UP) {
                move(20);
            }
        }


        numW = 14;
        numH = 8;

        Block.Width=FlxG.width/numW;
        Block.Height=cast unit*1.5;

        createBlocks();

        Balls = cast [add(new Ball(0)), add(new Ball(1))];
        Paddles = cast [add(new Paddle(0)), add(new Paddle(1))];

        rumble = new FlxSound();
        rumble.loadEmbedded("assets/sounds/rumble.ogg",true);
        rumble.volume=0;
        rumble.play();

        add(new EdgeGlow(0));
        add(new EdgeGlow(1));
    }

    function createBlocks() {
        MoveyBlocks = [];
        blockArr = [];
        for(i in 0...numW) {
            blockArr[i] = [];
            for(j in 0 ... numH) {
                blockArr[i][j] = [];
                for(p in 0...2) {
                    summonBlock(i,j,p,j/10+i/10);
                }
            }
        }

    }

    override public function update(d):Void {
        super.update(d);


        var diff = offsetY - cOffsetY;
        if(diff > 0) {
            cOffsetY += Math.min(speed, Math.abs(diff));
        }
        else if(diff < 0) {
            cOffsetY -= Math.min(speed, Math.abs(diff));
        }
        else {
            rumble.fadeOut(0.3,0);
            FlxG.camera.stopFX();
        }

        TopRow = FlxG.height/2-unit*0.5+cOffsetY-Block.Height*numH;
        BottomRow = FlxG.height/2+unit*0.5+cOffsetY+Block.Height*numH;

        if(PlayState.Mode==Mode.PLAYING) {
            if(FlxG.mouse.justReleased) {
                move(FlxG.mouse.y-offsetY-FlxG.height/2);
            }

            if(TopRow<0) {
                explode(0);
            }
            if(BottomRow > FlxG.height) {
                explode(1);
            }

            Block.GlobalTimer++;
        }
        else if(PlayState.Mode==Mode.GAMEOVER) {
            if(Input.Start(0) || Input.Start(1)) {
                restart();
            }
        }

    }

    function restart() {
        FlxTween.globalManager.clear();
        FlxTween.globalManager.update(0);
        createBlocks();
        trophy.destroy();
        trophy = null;
        PlayState.Mode = Mode.PLAYING;
        for(b in Balls) b.resetPosition(true);
    }

    public function remBlock(i,j,p) {
        blockArr[i][j][p] = null;
        summonBlock(i,j,1-p);
    }

    function summonBlock(i,j,p,d:Float=0) {
        if(blockArr[i][j][p] != null) return;
        var colors = [0xff333333, 0xffff0000, 0xffff7700, 0xffffff00,
            0xff00ff00, 0xff0077ff, 0xff330077,0xff333333];
        var ob:Block = new Block(
                Block.Width*i,
                Block.Height*j+unit/2,
                colors[j],
                i,j,p,d
                );
        Blocks.add(ob);
        MoveyBlocks.push(ob);
        blockArr[i][j][p] = ob;
        Glow.onlyGlow(ob);
        if(p == 0) {
            ob.y = FlxG.height/2-ob.y-ob.height;
        }
        else {
            ob.y = FlxG.height/2+ob.y;
        }
        ob.offsetY = cOffsetY;
    }

    function explode(P:Int) {
        FlxG.sound.play("assets/sounds/explode.ogg");
        PlayState.Mode=Mode.GAMEOVER;
        offsetY = cOffsetY;

        FlxTween.globalManager.completeAll();
        FlxTween.globalManager.update(0);
        FlxTimer.globalManager.completeAll();
        FlxTimer.globalManager.update(0);

        for(i in 0...2) {
            Balls[i].resetPosition();
        }

        var t:Float=0;
        var k;

        // Destroy all loser blocks
        for(j in 0...numH) {
            t+=0.05;
            k=numH-j-1;
            for(i in 0...numW) {
                if(blockArr[i][k][P] != null)
                    blockArr[i][k][P].color=0xffffffff;
            }
            new FlxTimer().start(t,function(t) {
                for(i in 0...numW) {
                    if(blockArr[i][k][P] != null)
                        blockArr[i][k][P].die();
                }
            });
        }
        // Destroy all winner blocks
        for(j in 0...numH) {
            t+=0.1;
            for(i in 0...numW) {
                if(blockArr[i][j][1-P] != null)
                    blockArr[i][j][1-P].color=0xffffffff;
            }
            new FlxTimer().start(t,function(t) {
                for(i in 0...numW) {
                    if(blockArr[i][j][1-P] != null) {
                        blockArr[i][j][1-P].die();
                    }
                }
            });
        }

        new FlxTimer().start(t,function(t) {
            // REALLY destroy anything that's somehow left over
            for(i in 0...numW) {
                for(j in 0...numH) {
                    for(p in 0...2) {
                        FlxTween.globalManager.clear();
                        if(blockArr[i][j][p] != null) {
                            blockArr[i][j][p].kill();
                            blockArr[i][j][p].destroy();
                        }
                    }
                }
            }
        });
        t += 0.8;
        new FlxTimer().start(t,function(t){
            // Move the center bar back
            FlxTween.tween(this,{cOffsetY:0, offsetY:0}, 1, {ease:FlxEase.expoInOut});
        });

        t+=1.2;
        trophy= new FlxSprite(0,0,"assets/images/trophy.png");
        trophy.alpha=0;
        trophy.x = FlxG.width/2-trophy.width/2;
        trophy.y = FlxG.height/2-trophy.height/2;
        add(trophy);
        Glow.onlyGlow(trophy);
        new FlxTimer().start(t,function(t){
            FlxTween.tween(trophy,{alpha:1},0.5, {onComplete:function(t){
                FlxTween.color(trophy,0.5,0xffffffff,0xff000000+Paddles[1-P].color, {onComplete:function(t) {
                    var io;
                    io = function(t) {
                        if(t == null || t.ease == FlxEase.sineOut)
                            FlxTween.tween(trophy.scale,{x:0},0.5,{ease:FlxEase.sineIn,onComplete:io});
                        else
                            FlxTween.tween(trophy.scale,{x:1},0.5,{ease:FlxEase.sineOut,onComplete:io});
                    };
                    io(null);
                }});
                FlxTween.tween(trophy,{y:P==0?trophy.y+trophy.height:trophy.y-trophy.height},0.5, {ease:FlxEase.sineInOut});
            }});
        });

    }

    public function move(amt:Float) {
        offsetY += amt;
        rumble.fadeIn(0.3,0,0.5);
        FlxG.camera.shake(0.002,100);
    }

    function set_cOffsetY(Y:Float) {
        midWall.offsetY = Y;

        for(b in MoveyBlocks) {
            b.offsetY = Y;
        }
        cOffsetY = Y;
        return Y;
    }

}
