package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.tweens.*;

class Block extends Obstacle {

    var i:Int;
    var j:Int;
    var p:Int;

    static public var Width:Float;
    static public var Height:Float;
    static public var GlobalTimer:Int=0;

    var timeOffset:Int = 0;
    var maxt:Int = 400;
    var c:Int;

    public function new(X,Y,C,I,J,P,D) {
        super(X,Y,cast Block.Width,cast Block.Height,C,true,D);
        i=I;j=J;p=P;
        c=C;

        onHit = function(dir) {
            die();
            cast(FlxG.state,PlayState).level.remBlock(i,j,p);
        }

        timeOffset=(i*10+j*5);

    }

    override public function update(d) {
        super.update(d);

        var n = (Block.GlobalTimer - timeOffset) % maxt;
        if(n == 0) {
                var newcol = ((((c & 0x7f7f7f) << 1) & 0x7f7f7f) << 1)  + 0xff000000;
                    FlxTween.color(this,1,c,newcol,{onComplete:function(t){
                    FlxTween.color(this,1,newcol,c,null);
                }
            });
        }
    }

}
