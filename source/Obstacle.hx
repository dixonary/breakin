package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.tweens.*;
import flixel.util.FlxTimer;
import flixel.FlxObject;

using flixel.tweens.FlxTween;

class Obstacle extends FlxSprite {

    public var onHit:(Int->Void);
    static public var balls:Array<Ball>;
    public var offsetY(default,set):Float;

    public function new(X,Y,W,H,C,P:Bool = false,D:Float=0) {
        super();
        makeGraphic(W,H,0x00000000,true);

        var s = new FlxSprite();
        s.makeGraphic(W-6,H-6,0xffffffff,true);

        color = 0xffffffff;

        if(P) {
            var p = new FlxSprite(0,0,"assets/images/pattern.png");
            s.stamp(p, cast -Math.random()*(p.width-s.width), cast -Math.random()*(p.height-s.height));
        }
        stamp(s,3,3);

        scale.set(0.1,0.1);

        alpha=0;
        new FlxTimer().start(D,function(t){
            alpha=1;
        scale.tween({x:1}, 0.2, {onComplete:function(t){
            scale.tween({y:1}, 0.2, {onComplete:function(t) {
                solid=true;
            },
            ease:FlxEase.sineIn});
            FlxTween.color(this,0.2,0xffffffff,C);
        },
        ease:FlxEase.sineIn});});


        x = X;
        y = Y;

        immovable = true;
        solid = false;
        elasticity = 1;

        onHit = function(dir) {
            die();
        }

    }

    override public function destroy() {
        super.destroy();
    }

    public function die() {
        solid = false;

        FlxTween.color(this,0.2,color,0xffffffff);
        if(scale==null) {
            destroy();
            return;
        }
        scale.tween({y:0.1}, 0.2, {onComplete:function(t){
            scale.tween({x:0}, 0.1, {onComplete:function(t) {
                destroy();
            },
            ease:FlxEase.sineOut});
        },
        ease:FlxEase.sineOut});
    }

    override public function update(d) {
        super.update(d);
    }

    public function set_offsetY(Y:Float) {
        y -= offsetY;
        offsetY = Y;
        y += offsetY;
        return Y;
    }

}
