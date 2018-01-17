package;

import flash.filters.*;
import flixel.graphics.frames.FlxFilterFrames;
import flixel.FlxSprite;

class Glow {

    static public function makeGlow(sprite:FlxSprite) {

        var blurFilter = new BlurFilter();
        blurFilter.blurX = 5;
        blurFilter.blurY = 5;
        var glowFilter = new GlowFilter(0x33ffffff, 1, 10, 10, 2, 1);

        var frame = FlxFilterFrames.fromFrames(
           sprite.frames, 40, 40, [blurFilter,glowFilter]);
        frame.applyToSprite(sprite, false, true);
    }
    static public function onlyGlow(sprite:FlxSprite) {

        var glowFilter = new GlowFilter(0x33ffffff, 1, 10, 10, 2, 1);

        var frame = FlxFilterFrames.fromFrames(
           sprite.frames, 40, 40, [glowFilter]);
        frame.applyToSprite(sprite, false, true);
    }
}
