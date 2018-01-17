package;

import flixel.util.FlxTimer;
import flixel.FlxBasic;

class AI extends FlxBasic {

    var paddle:Paddle;

    var tracking:Bool = true;
    var amt:Int;
    public var cMove:Float;

    public function new(P:Paddle) {
        super();
        paddle=P;
    }

    public function nextMove() {
        tracking = false;
        new FlxTimer().start(Math.random()*0.5, function(t) {
            tracking=true;
        });
    }

    override public function update(d) {
        super.update(d);
        if(tracking) {
            paddle.maxVelocity.x = Math.abs(Level.Balls[paddle.player].velocity.x)+5;
            if(Level.Balls[paddle.player].x < paddle.x) {
                cMove = -1;
            }
            else if(Level.Balls[paddle.player].x - Level.Balls[paddle.player].width > paddle.x+paddle.width) {
                cMove = 1;
            }
            else {
                cMove = 0;
            }
        }
    }

}
