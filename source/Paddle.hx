package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.input.gamepad.FlxGamepad;
import flixel.FlxObject;
import flixel.system.FlxSound;
import flixel.effects.particles.*;
import PlayState;

class Paddle extends FlxSprite {

    static var ballSize:Int = 20;

    var hum:FlxSound;
    var hit:FlxSound;
    var emitter:FlxEmitter;

    var speed = 5000;
    var max = 400;

    var ai:AI;
    var hits:Int = 0;

    public var player:Int;

    public function new(P:Int) {
        super();
        player=P;
        makeGraphic(ballSize*5,Std.int(ballSize/2),0xffffffff,false);
        color =player==0?0xffff00:0xff00ff;

        resetPosition();

        var p = new FlxSprite(0,0,"assets/images/pattern2.png");
        stamp(p, cast -Math.random()*(p.width-width), cast -Math.random()*(p.height-height));

        drag.x = speed;
        maxVelocity.x = max;
        immovable = true;

        Glow.onlyGlow(this);

        hum= new FlxSound();
        if(player==0)
        hum.loadEmbedded("assets/sounds/hum.ogg",true);
        else
        hum.loadEmbedded("assets/sounds/hum2.ogg",true);
        hum.volume=0;
        hum.play();

        hit= new FlxSound();
        if(player==0)
        hit.loadEmbedded("assets/sounds/hit.ogg");
        else
        hit.loadEmbedded("assets/sounds/hit2.ogg");

        emitter = new HitEmitter(this, (0.5-player)*2);
        FlxG.state.add(emitter);

        if(player<0) {
            ai=new AI(this);
            FlxG.state.add(ai);
        }
    }

    public function resetPosition() {
        x = (FlxG.width-ballSize*5)/2;
        y = player==0?20:FlxG.height-20-height;
        velocity.set(0,0);
    }

    override public function update(d) {
        super.update(d);

        if(PlayState.Mode==PLAYING) {
            if(ai != null) {
                acceleration.x = ai.cMove*speed;
            }
            else {
                acceleration.x = Input.XAxis(player)*speed;
            }
        }
        else {
            acceleration.x = velocity.x = 0;
        }

        if(x < Level.unit) {
            x = Level.unit;
            velocity.x = Math.max(0, velocity.x);
        }
        if(x > FlxG.width-Level.unit-width) {
            x = FlxG.width-Level.unit-width;
            velocity.x = Math.min(0, velocity.x);
        }

        for(b in Level.Balls) {
            if(FlxG.overlap(b,this)) {
                var left = Math.max( x - b.x, b.x-x-width);
                var top = Math.max(y - b.y, b.y-y-height);

                if(left < top) {
                    var hitR = width;
                    var hitL = -b.width;

                    var hitW = hitR - hitL;
                    var newAngle = ((b.x-x-hitL)/hitW-0.5)*Math.PI*0.8;
                    if(Math.abs(newAngle) < Math.PI/60) newAngle =
                        (Math.random()+1)*Math.PI*0.4*(Math.random()<0.5?1:-1);

                    b.velocity.x = Ball.Speed * Math.sin(newAngle);
                    b.velocity.y = Ball.Speed*2 * Math.cos(newAngle) * (0.5-player);

                    hits++;
                    hit.volume = Math.min(hits / 10,0.8);
                    hit.play(true);
                    emitter.start(true);
                    if(ai != null) ai.nextMove();
                }
                else {
                    if(b.x < x)  b.velocity.x = -1* Math.abs(b.velocity.x);
                    else         b.velocity.x =  1* Math.abs(b.velocity.x);
                }

            }
        }

        hum.volume = Math.abs(velocity.x/maxVelocity.x)*0;
        emitter.x = x;
        emitter.y = y+(1-player)*height;
    }

}

class HitEmitter extends FlxEmitter {

    var target:FlxObject;

    public function new(T:FlxObject, yDir:Float) {
        super(T.x,T.y,50);
        target = T;
        width=target.width;
        particleClass = HitParticle;
        makeParticles(2,2,0xffffffff,50);
        lifespan.set(0.2,0.5);
        launchMode = SQUARE;
        velocity.set(-40,0*yDir,40,80*yDir);
        scale.set(1,3);
    }

}

class HitParticle extends FlxParticle {
    public function new() {
        super();
        makeGraphic(2,2,0xffffffff);
    }
    override public function update(d) {
        super.update(d);
        alpha = 1-Math.sqrt(age/lifespan);
    }

}
