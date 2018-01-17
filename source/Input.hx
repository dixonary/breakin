package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.input.gamepad.FlxGamepad;
import flixel.FlxObject;

class Input {

    static public var Mode:InputMode = KEYBOARD;

    static public var Ready(get,never):Bool;


    static public function XAxis(player:Int):Float {
        if(Mode == KEYBOARD) {
            switch(player) {
            case 0:
                return (FlxG.keys.pressed.LEFT ?-1:0)
                    +  (FlxG.keys.pressed.RIGHT? 1:0);
            case 1:
                return (FlxG.keys.pressed.A    ?-1:0)
                    +  (FlxG.keys.pressed.D    ? 1:0);
            }
        }
        else {
            var gpads = FlxG.gamepads.getActiveGamepads();
            if(gpads.length <= player) return 0;
            return gpads[player].analog.value.LEFT_STICK_X;
        }
        return 0;
    }

    static public function Start(player:Int):Bool {
        if(Mode == KEYBOARD) {
            return FlxG.keys.justPressed.ENTER;
        }
        else {
            var gpads = FlxG.gamepads.getActiveGamepads();
            if(gpads.length <= player) return false;
            return gpads[player].justPressed.START;
        }

    }

    static public function get_Ready():Bool {
        if(Mode == KEYBOARD) return true;
        else return FlxG.gamepads.getActiveGamepads().length >= 2;
    }


}

enum InputMode {
    KEYBOARD;
    GAMEPADS;
}
