package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/sounds/ping.ogg", "assets/sounds/ping.ogg");
			type.set ("assets/sounds/ping.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/hum.mp3", "assets/sounds/hum.mp3");
			type.set ("assets/sounds/hum.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/sounds/ping2.ogg", "assets/sounds/ping2.ogg");
			type.set ("assets/sounds/ping2.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/hit2.ogg", "assets/sounds/hit2.ogg");
			type.set ("assets/sounds/hit2.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/rumble.ogg", "assets/sounds/rumble.ogg");
			type.set ("assets/sounds/rumble.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/hum.ogg", "assets/sounds/hum.ogg");
			type.set ("assets/sounds/hum.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/explode.mp3", "assets/sounds/explode.mp3");
			type.set ("assets/sounds/explode.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/sounds/hum2.ogg", "assets/sounds/hum2.ogg");
			type.set ("assets/sounds/hum2.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/hum2.mp3", "assets/sounds/hum2.mp3");
			type.set ("assets/sounds/hum2.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/sounds/hit.ogg", "assets/sounds/hit.ogg");
			type.set ("assets/sounds/hit.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/warning.ogg", "assets/sounds/warning.ogg");
			type.set ("assets/sounds/warning.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/rumble.wav", "assets/sounds/rumble.wav");
			type.set ("assets/sounds/rumble.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/hum.wav", "assets/sounds/hum.wav");
			type.set ("assets/sounds/hum.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/explode.ogg", "assets/sounds/explode.ogg");
			type.set ("assets/sounds/explode.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/warning.wav", "assets/sounds/warning.wav");
			type.set ("assets/sounds/warning.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/images/trophy.png", "assets/images/trophy.png");
			type.set ("assets/images/trophy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/pattern2.png", "assets/images/pattern2.png");
			type.set ("assets/images/pattern2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/pattern.png", "assets/images/pattern.png");
			type.set ("assets/images/pattern.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/redGradient.png", "assets/images/redGradient.png");
			type.set ("assets/images/redGradient.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/starfield.jpg", "assets/images/starfield.jpg");
			type.set ("assets/images/starfield.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/music/space1.wav", "assets/music/space1.wav");
			type.set ("assets/music/space1.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/music/space1.ogg", "assets/music/space1.ogg");
			type.set ("assets/music/space1.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/sounds/flixel.ogg", "flixel/sounds/flixel.ogg");
			type.set ("flixel/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/beep.ogg", "flixel/sounds/beep.ogg");
			type.set ("flixel/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/fonts/nokiafc22.ttf", "flixel/fonts/nokiafc22.ttf");
			type.set ("flixel/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/fonts/monsterrat.ttf", "flixel/fonts/monsterrat.ttf");
			type.set ("flixel/fonts/monsterrat.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/images/ui/button.png", "flixel/images/ui/button.png");
			type.set ("flixel/images/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/images/logo/default.png", "flixel/images/logo/default.png");
			type.set ("flixel/images/logo/default.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
