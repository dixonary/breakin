package;

import flixel.FlxSprite;
import flixel.tweens.*;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.system.FlxSound;

class EdgeGlow extends FlxSprite {

    var player:Int;
    var maxAlpha:Float = 0;
    var up:Bool = true;
    var warning:FlxSound;

    public function new(P:Int) {
        super();
        player = P;

        loadGraphic("assets/images/redGradient.png");
        if(player == 1) {
            scale.set(FlxG.width, 0.4);
            updateHitbox();
        }
        else {
            scale.set(FlxG.width, 0.4);
            angle = 180;
            updateHitbox();
            y = FlxG.height - height;
        }

        alpha = 0;

        warning = new FlxSound();
        warning.loadEmbedded("assets/sounds/warning.ogg",true);
        warning.volume=0;
        warning.play();

    }

    override public function update(d) {
        super.update(d);

        maxAlpha = Math.min(1,Math.max(0,player==0
            ? (1-Math.abs(Level.BottomRow-FlxG.height)/120)
            : (1-Math.abs(Level.TopRow)/120)));

        warning.volume = maxAlpha/2;

        if(up) {
            alpha += 0.02;
            if(alpha >= maxAlpha) {
                up = false;
            }
        }
        else {
            alpha -= 0.02;
            if(alpha <= 0) {
                up = true;
            }
        }
    }


}
