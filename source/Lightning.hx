package;

import flixel.FlxSprite;
using flixel.util.FlxSpriteUtil;
import flixel.math.FlxPoint;

class Lightning extends FlxSprite {

    var lColor:Int;
    var ticker:Int;
    var maxTick:Int = 2;

    public function new(w,h,c) {
        super();

        width=w;
        height=h;
        generate();

        color = c;
        lColor = c;

    }

    public override function update(d) {
        super.update(d);

        ticker++;
        ticker %= maxTick;
        if(ticker==0)
            generate();
    }

    function generate() {

        makeGraphic(cast width,cast height,0x00ffffff,true);

        var numPoints:Int = 100;
        var points:Array<FlxPoint> = [for(i in 0...numPoints) new FlxPoint(Math.random()*width,Math.random()*height)];
        points.sort(function(p1,p2) return p1.x > p2.x?1:-1 );
        points[0].set(0,height/2);
        points[points.length-1].set(width,height/2);
        for(i in 1...points.length-2) {
            if(Math.random()<0.1) {
                var tmp = points[i];
                points[i] = points[i+1];
                points[i+1] = tmp;
            }
        }

        drawPolygon(points,0x00ffffff, {color:0xffffffff});

        Glow.onlyGlow(this);
    }

}
