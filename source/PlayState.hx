package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.addons.display.shapes.FlxShapeLightning;
import flixel.math.FlxPoint;
import flixel.util.FlxColor;

class PlayState extends FlxState
{
    public var level:Level;
    var lightning:Lightning;
    public static var Mode:Mode=SETUP;

    override public function create():Void
    {
        super.create();
        FlxG.autoPause = false;

        var sf = new FlxSprite(0,0,"assets/images/starfield.jpg");
        sf.x = (FlxG.width-sf.width)/2;
        sf.y = (FlxG.height-sf.height)/2;
        sf.scale.set(0.7,0.7);
        sf.alpha = 0.5;
        sf.angularVelocity = 1;
        add(sf);

        add(level=new Level());

        add(lightning=new Lightning(FlxG.width,10,0xff00ffff));

        FlxG.sound.playMusic("assets/music/space1.ogg",0.1);

    }

    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);

        if(Mode==SETUP && Input.Ready) {
            Mode = PLAYING;
        }

        lightning.y = level.midWall.y+
            (level.midWall.height-lightning.height)/2;
    }
}

enum Mode {
    SETUP;
    PLAYING;
    GAMEOVER;
}

