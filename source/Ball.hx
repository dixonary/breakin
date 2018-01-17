package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.input.gamepad.FlxGamepad;
import flixel.util.FlxTimer;
import flixel.tweens.FlxTween;
import flixel.system.FlxSound;
import flixel.addons.effects.FlxTrail;

using Glow;

class Ball extends FlxSprite {

    static var ballSize:Int = 20;
    public static var Speed:Float = 300;

    public var player:Int;

    var ping:FlxSound;
    var trail:FlxTrail;

    public function new(P:Int) {
        super();
        player=P;
        makeGraphic(ballSize,ballSize,0xffffffff);
        immovable=true;
        color = player==0?0xffffff77:0xffff77ff;

        var p = new FlxSprite(0,0,"assets/images/pattern2.png");
        stamp(p, cast -Math.random()*(p.width-width), cast -Math.random()*(p.height-height));

        resetPosition(true);

        ping= new FlxSound();
        if(player==0)
        ping.loadEmbedded("assets/sounds/ping2.ogg");
        else
        ping.loadEmbedded("assets/sounds/ping.ogg");
        ping.volume=0.2;

        onlyGlow();

        FlxG.state.add(trail=new FlxTrail(this));

    }

    public function resetPosition(andGo:Bool = false) {
        y = player==0?100:FlxG.height-120;
        x = (FlxG.width-ballSize)/2;

        velocity.x = velocity.y = 0;
        solid=false;

        if(Level.Paddles != null
                && Level.Paddles.length > player)
            Level.Paddles[player].resetPosition();

        if(andGo) {
            alpha=0;
            FlxTween.tween(this,{alpha:1},2);
            new FlxTimer().start(2,function(t) start());
        }
    }

    public function start() {
        velocity.y = Ball.Speed*2 * (player-0.5);
        solid=true;
    }

    override public function update(d) {
        super.update(d);

        for(t in 0...trail.members.length) {
            trail.members[t].scale.set(1-t/10, 1-t/10);
        }
        if(y < -height) {
            if(player == 0) {
                resetPosition(true);
            }
            else {

            }
        }

        if(y > FlxG.height) {
            if(player == 1) {
                resetPosition(true);
            }
            else {

            }
        }

        if(x < -width || x > FlxG.width) {
            resetPosition(true);
        }

        if(FlxG.overlap(this, Level.Blocks)) {
            var dir;

            for(b in Level.Blocks.members) {
                if(FlxG.overlap(this,b)) {
                    var left = Math.max( b.x - x, x-b.x-b.width);
                    var top = Math.max(b.y - y, y-b.y-b.height);
                    if(left < top) {
                        if(y < b.y)  {
                            velocity.y = -1* Math.abs(velocity.y);
                            dir = FlxObject.UP;
                        }
                        else         {
                            velocity.y =  1* Math.abs(velocity.y);
                            dir = FlxObject.DOWN;
                        }
                    }
                    else {
                        if(x < b.x)  {
                            velocity.x = -1* Math.abs(velocity.x);
                            dir=FlxObject.LEFT;
                        }
                        else         {
                            velocity.x =  1* Math.abs(velocity.x);
                            dir=FlxObject.RIGHT;
                        }

                    }
                    if(b.onHit != null) {
                        b.onHit(dir);
                    }
                    FlxG.collide(this,b);
                    ping.play(true);
                }
            }
        }

    }

}
