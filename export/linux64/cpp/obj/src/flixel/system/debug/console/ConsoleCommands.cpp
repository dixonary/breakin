// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebuggerLayout
#include <flixel/system/debug/FlxDebuggerLayout.h>
#endif
#ifndef INCLUDED_flixel_system_debug_VCR
#include <flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_Console
#include <flixel/system/debug/console/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleCommands
#include <flixel/system/debug/console/ConsoleCommands.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleHistory
#include <flixel/system/debug/console/ConsoleHistory.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleUtil
#include <flixel/system/debug/console/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd
#include <flixel/system/frontEnds/BitmapLogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d0e94f52257718c0_15_new,"flixel.system.debug.console.ConsoleCommands","new",0xbec7c572,"flixel.system.debug.console.ConsoleCommands.new","flixel/system/debug/console/ConsoleCommands.hx",15,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_76_help,"flixel.system.debug.console.ConsoleCommands","help",0x2c0dad6f,"flixel.system.debug.console.ConsoleCommands.help","flixel/system/debug/console/ConsoleCommands.hx",76,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_106_close,"flixel.system.debug.console.ConsoleCommands","close",0x838bf54a,"flixel.system.debug.console.ConsoleCommands.close","flixel/system/debug/console/ConsoleCommands.hx",106,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_110_create,"flixel.system.debug.console.ConsoleCommands","create",0x04a8692a,"flixel.system.debug.console.ConsoleCommands.create","flixel/system/debug/console/ConsoleCommands.hx",110,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_141_fields,"flixel.system.debug.console.ConsoleCommands","fields",0x092790a7,"flixel.system.debug.console.ConsoleCommands.fields","flixel/system/debug/console/ConsoleCommands.hx",141,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_147_listObjects,"flixel.system.debug.console.ConsoleCommands","listObjects",0x01393328,"flixel.system.debug.console.ConsoleCommands.listObjects","flixel/system/debug/console/ConsoleCommands.hx",147,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_152_listFunctions,"flixel.system.debug.console.ConsoleCommands","listFunctions",0x18b311af,"flixel.system.debug.console.ConsoleCommands.listFunctions","flixel/system/debug/console/ConsoleCommands.hx",152,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_156_watchMouse,"flixel.system.debug.console.ConsoleCommands","watchMouse",0x171fe284,"flixel.system.debug.console.ConsoleCommands.watchMouse","flixel/system/debug/console/ConsoleCommands.hx",156,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_173_pause,"flixel.system.debug.console.ConsoleCommands","pause",0xf880b488,"flixel.system.debug.console.ConsoleCommands.pause","flixel/system/debug/console/ConsoleCommands.hx",173,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_187_step,"flixel.system.debug.console.ConsoleCommands","step",0x335e61fa,"flixel.system.debug.console.ConsoleCommands.step","flixel/system/debug/console/ConsoleCommands.hx",187,0x8e0df1e0)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace console{

void ConsoleCommands_obj::__construct( ::flixel::_hx_system::debug::console::Console console){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_15_new)
HXLINE(  21)		this->_watchingMouse = false;
HXLINE(  25)		this->_console = console;
HXLINE(  27)		{
HXLINE(  27)			::haxe::IMap_obj::set(console->registeredFunctions,HX_("help",c1,32,0b,45),this->help_dyn());
HXDLIN(  27)			::haxe::IMap_obj::set(console->registeredHelp,HX_("help",c1,32,0b,45),HX_("Displays the help text of a registered object or function. See \"help\".",74,09,e6,6d));
            		}
HXLINE(  28)		{
HXLINE(  28)			::haxe::IMap_obj::set(console->registeredFunctions,HX_("close",b8,17,63,48),this->close_dyn());
HXDLIN(  28)			::haxe::IMap_obj::set(console->registeredHelp,HX_("close",b8,17,63,48),HX_("Closes the debugger overlay.",09,dd,14,da));
            		}
HXLINE(  30)		{
HXLINE(  30)			::haxe::IMap_obj::set(console->registeredFunctions,HX_("clearHistory",47,e7,c5,3f),this->_console->history->clear_dyn());
HXDLIN(  30)			::haxe::IMap_obj::set(console->registeredHelp,HX_("clearHistory",47,e7,c5,3f),HX_("Closes the debugger overlay.",09,dd,14,da));
            		}
HXLINE(  31)		{
HXLINE(  31)			::haxe::IMap_obj::set(console->registeredFunctions,HX_("clearLog",f7,50,0e,31),::flixel::FlxG_obj::log->clear_dyn());
HXDLIN(  31)			::haxe::IMap_obj::set(console->registeredHelp,HX_("clearLog",f7,50,0e,31),HX_("Clears the command history.",58,c6,e5,46));
            		}
HXLINE(  33)		{
HXLINE(  33)			::haxe::IMap_obj::set(console->registeredFunctions,HX_("fields",79,8e,8e,80),this->fields_dyn());
HXDLIN(  33)			::haxe::IMap_obj::set(console->registeredHelp,HX_("fields",79,8e,8e,80),HX_("Lists the fields of a class or instance",6f,dd,83,14));
            		}
HXLINE(  35)		{
HXLINE(  35)			::haxe::IMap_obj::set(console->registeredFunctions,HX_("listObjects",16,dc,4e,39),this->listObjects_dyn());
HXDLIN(  35)			::haxe::IMap_obj::set(console->registeredHelp,HX_("listObjects",16,dc,4e,39),HX_("Lists the aliases of all registered objects.",6c,4a,89,e2));
            		}
HXLINE(  36)		{
HXLINE(  36)			::haxe::IMap_obj::set(console->registeredFunctions,HX_("listFunctions",1d,52,37,c0),this->listFunctions_dyn());
HXDLIN(  36)			::haxe::IMap_obj::set(console->registeredHelp,HX_("listFunctions",1d,52,37,c0),HX_("Lists the aliases of all registered functions.",85,07,62,7a));
            		}
HXLINE(  38)		{
HXLINE(  38)			::haxe::IMap_obj::set(console->registeredFunctions,HX_("step",4c,e7,5b,4c),this->step_dyn());
HXDLIN(  38)			::haxe::IMap_obj::set(console->registeredHelp,HX_("step",4c,e7,5b,4c),HX_("Steps the game forward one frame if currently paused. No effect if unpaused.",e3,b2,6b,29));
            		}
HXLINE(  39)		{
HXLINE(  39)			::haxe::IMap_obj::set(console->registeredFunctions,HX_("pause",f6,d6,57,bd),this->pause_dyn());
HXDLIN(  39)			::haxe::IMap_obj::set(console->registeredHelp,HX_("pause",f6,d6,57,bd),HX_("Toggles the game between paused and unpaused.",42,15,b4,fb));
            		}
HXLINE(  41)		{
HXLINE(  41)			::haxe::IMap_obj::set(console->registeredFunctions,HX_("clearBitmapLog",88,b0,e0,84),::flixel::FlxG_obj::bitmapLog->clear_dyn());
HXDLIN(  41)			::haxe::IMap_obj::set(console->registeredHelp,HX_("clearBitmapLog",88,b0,e0,84),HX_("Clears the bitmapLog window.",4a,2e,fa,ed));
            		}
HXLINE(  42)		{
HXLINE(  42)			::haxe::IMap_obj::set(console->registeredFunctions,HX_("viewCache",9d,09,a9,81),::flixel::FlxG_obj::bitmapLog->viewCache_dyn());
HXDLIN(  42)			::haxe::IMap_obj::set(console->registeredHelp,HX_("viewCache",9d,09,a9,81),HX_("Adds the cache to the bitmapLog window.",9a,4b,f4,ec));
            		}
HXLINE(  44)		{
HXLINE(  44)			::haxe::IMap_obj::set(console->registeredFunctions,HX_("create",fc,66,0f,7c),this->create_dyn());
HXDLIN(  44)			::haxe::IMap_obj::set(console->registeredHelp,HX_("create",fc,66,0f,7c),HX_("Creates a new FlxObject and registers it - by default at the mouse position. \"create(ObjClass:Class<T>, PlaceAtMouse:Bool, ExtraParams:Array<Dynamic>)\" Ex: \"create(FlxSprite, false, [100, 100])\"",e1,71,2c,4a));
            		}
HXLINE(  46)		{
HXLINE(  46)			::haxe::IMap_obj::set(console->registeredFunctions,HX_("watch",4f,16,25,c5),::flixel::FlxG_obj::watch->add_dyn());
HXDLIN(  46)			::haxe::IMap_obj::set(console->registeredHelp,HX_("watch",4f,16,25,c5),HX_("Adds the specified field of an object to the watch window.",3d,3d,b8,00));
            		}
HXLINE(  47)		{
HXLINE(  47)			::haxe::IMap_obj::set(console->registeredFunctions,HX_("watchExpression",c7,c4,8f,8c),::flixel::FlxG_obj::watch->addExpression_dyn());
HXDLIN(  47)			::haxe::IMap_obj::set(console->registeredHelp,HX_("watchExpression",c7,c4,8f,8c),HX_("Adds the specified expression to the watch window. Be sure any objects, functions, and classes used are registered!",28,72,30,fe));
            		}
HXLINE(  48)		{
HXLINE(  48)			::haxe::IMap_obj::set(console->registeredFunctions,HX_("watchMouse",56,31,6f,84),this->watchMouse_dyn());
HXDLIN(  48)			::haxe::IMap_obj::set(console->registeredHelp,HX_("watchMouse",56,31,6f,84),HX_("Adds the mouse coordinates to the watch window.",16,85,0c,85));
            		}
HXLINE(  49)		{
HXLINE(  49)			::haxe::IMap_obj::set(console->registeredFunctions,HX_("track",8b,8e,1f,16),::flixel::FlxG_obj::debugger->track_dyn());
HXDLIN(  49)			::haxe::IMap_obj::set(console->registeredHelp,HX_("track",8b,8e,1f,16),HX_("Adds a tracker window for the specified object or class.",a3,a1,e4,47));
            		}
HXLINE(  52)		{
HXLINE(  52)			hx::Class cl = hx::ClassOf< ::Math >();
HXDLIN(  52)			{
HXLINE(  52)				::String objectAlias = ::flixel::util::FlxStringUtil_obj::getClassName(cl,true);
HXDLIN(  52)				::haxe::IMap_obj::set(console->registeredObjects,objectAlias,( ( ::Dynamic)(cl) ));
            			}
            		}
HXLINE(  53)		{
HXLINE(  53)			hx::Class cl1 = hx::ClassOf< ::Reflect >();
HXDLIN(  53)			{
HXLINE(  53)				::String objectAlias1 = ::flixel::util::FlxStringUtil_obj::getClassName(cl1,true);
HXDLIN(  53)				::haxe::IMap_obj::set(console->registeredObjects,objectAlias1,( ( ::Dynamic)(cl1) ));
            			}
            		}
HXLINE(  54)		{
HXLINE(  54)			hx::Class cl2 = hx::ClassOf< ::Std >();
HXDLIN(  54)			{
HXLINE(  54)				::String objectAlias2 = ::flixel::util::FlxStringUtil_obj::getClassName(cl2,true);
HXDLIN(  54)				::haxe::IMap_obj::set(console->registeredObjects,objectAlias2,( ( ::Dynamic)(cl2) ));
            			}
            		}
HXLINE(  55)		{
HXLINE(  55)			hx::Class cl3 = hx::ClassOf< ::StringTools >();
HXDLIN(  55)			{
HXLINE(  55)				::String objectAlias3 = ::flixel::util::FlxStringUtil_obj::getClassName(cl3,true);
HXDLIN(  55)				::haxe::IMap_obj::set(console->registeredObjects,objectAlias3,( ( ::Dynamic)(cl3) ));
            			}
            		}
HXLINE(  57)		{
HXLINE(  57)			hx::Class cl4 = hx::ClassOf< ::Sys >();
HXDLIN(  57)			{
HXLINE(  57)				::String objectAlias4 = ::flixel::util::FlxStringUtil_obj::getClassName(cl4,true);
HXDLIN(  57)				::haxe::IMap_obj::set(console->registeredObjects,objectAlias4,( ( ::Dynamic)(cl4) ));
            			}
            		}
HXLINE(  59)		{
HXLINE(  59)			hx::Class cl5 = hx::ClassOf< ::Type >();
HXDLIN(  59)			{
HXLINE(  59)				::String objectAlias5 = ::flixel::util::FlxStringUtil_obj::getClassName(cl5,true);
HXDLIN(  59)				::haxe::IMap_obj::set(console->registeredObjects,objectAlias5,( ( ::Dynamic)(cl5) ));
            			}
            		}
HXLINE(  61)		{
HXLINE(  61)			hx::Class cl6 = hx::ClassOf< ::flixel::FlxG >();
HXDLIN(  61)			{
HXLINE(  61)				::String objectAlias6 = ::flixel::util::FlxStringUtil_obj::getClassName(cl6,true);
HXDLIN(  61)				::haxe::IMap_obj::set(console->registeredObjects,objectAlias6,( ( ::Dynamic)(cl6) ));
            			}
            		}
HXLINE(  62)		{
HXLINE(  62)			hx::Class cl7 = hx::ClassOf< ::flixel::FlxObject >();
HXDLIN(  62)			{
HXLINE(  62)				::String objectAlias7 = ::flixel::util::FlxStringUtil_obj::getClassName(cl7,true);
HXDLIN(  62)				::haxe::IMap_obj::set(console->registeredObjects,objectAlias7,( ( ::Dynamic)(cl7) ));
            			}
            		}
HXLINE(  63)		{
HXLINE(  63)			hx::Class cl8 = hx::ClassOf< ::flixel::FlxSprite >();
HXDLIN(  63)			{
HXLINE(  63)				::String objectAlias8 = ::flixel::util::FlxStringUtil_obj::getClassName(cl8,true);
HXDLIN(  63)				::haxe::IMap_obj::set(console->registeredObjects,objectAlias8,( ( ::Dynamic)(cl8) ));
            			}
            		}
HXLINE(  64)		{
HXLINE(  64)			hx::Class cl9 = hx::ClassOf< ::flixel::math::FlxMath >();
HXDLIN(  64)			{
HXLINE(  64)				::String objectAlias9 = ::flixel::util::FlxStringUtil_obj::getClassName(cl9,true);
HXDLIN(  64)				::haxe::IMap_obj::set(console->registeredObjects,objectAlias9,( ( ::Dynamic)(cl9) ));
            			}
            		}
HXLINE(  65)		{
HXLINE(  65)			hx::Class cl10 = hx::ClassOf< ::flixel::tweens::FlxTween >();
HXDLIN(  65)			{
HXLINE(  65)				::String objectAlias10 = ::flixel::util::FlxStringUtil_obj::getClassName(cl10,true);
HXDLIN(  65)				::haxe::IMap_obj::set(console->registeredObjects,objectAlias10,( ( ::Dynamic)(cl10) ));
            			}
            		}
HXLINE(  66)		{
HXLINE(  66)			hx::Class cl11 = hx::ClassOf< ::flixel::FlxCamera >();
HXDLIN(  66)			{
HXLINE(  66)				::String objectAlias11 = ::flixel::util::FlxStringUtil_obj::getClassName(cl11,true);
HXDLIN(  66)				::haxe::IMap_obj::set(console->registeredObjects,objectAlias11,( ( ::Dynamic)(cl11) ));
            			}
            		}
HXLINE(  67)		{
HXLINE(  67)			hx::Class cl12 = hx::ClassOf< ::flixel::math::FlxPoint >();
HXDLIN(  67)			{
HXLINE(  67)				::String objectAlias12 = ::flixel::util::FlxStringUtil_obj::getClassName(cl12,true);
HXDLIN(  67)				::haxe::IMap_obj::set(console->registeredObjects,objectAlias12,( ( ::Dynamic)(cl12) ));
            			}
            		}
HXLINE(  68)		{
HXLINE(  68)			hx::Class cl13 = hx::ClassOf< ::flixel::math::FlxRect >();
HXDLIN(  68)			{
HXLINE(  68)				::String objectAlias13 = ::flixel::util::FlxStringUtil_obj::getClassName(cl13,true);
HXDLIN(  68)				::haxe::IMap_obj::set(console->registeredObjects,objectAlias13,( ( ::Dynamic)(cl13) ));
            			}
            		}
HXLINE(  70)		::haxe::IMap_obj::set(console->registeredObjects,HX_("FlxDebuggerLayout",9d,d1,b4,d8),( ( ::Dynamic)(hx::ClassOf< ::flixel::_hx_system::debug::FlxDebuggerLayout >()) ));
HXLINE(  71)		::haxe::IMap_obj::set(console->registeredObjects,HX_("selection",4c,f8,1a,8e),null());
            	}

Dynamic ConsoleCommands_obj::__CreateEmpty() { return new ConsoleCommands_obj; }

void *ConsoleCommands_obj::_hx_vtable = 0;

Dynamic ConsoleCommands_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ConsoleCommands_obj > _hx_result = new ConsoleCommands_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ConsoleCommands_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0ad50324;
}

::String ConsoleCommands_obj::help(::String Alias){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_76_help)
HXDLIN(  76)		bool _hx_tmp;
HXDLIN(  76)		if (hx::IsNotNull( Alias )) {
HXDLIN(  76)			_hx_tmp = (Alias.length == (int)0);
            		}
            		else {
HXDLIN(  76)			_hx_tmp = true;
            		}
HXDLIN(  76)		if (_hx_tmp) {
HXLINE(  78)			::String output = HX_("System classes and commands: ",42,07,6a,e4);
HXLINE(  79)			{
HXLINE(  79)				 ::Dynamic obj = this->_console->registeredObjects->keys();
HXDLIN(  79)				while(( (bool)(obj->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  79)					::String obj1 = ( (::String)(obj->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  81)					output = (output + (obj1 + HX_(", ",74,26,00,00)));
            				}
            			}
HXLINE(  83)			{
HXLINE(  83)				 ::Dynamic func = this->_console->registeredFunctions->keys();
HXDLIN(  83)				while(( (bool)(func->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  83)					::String func1 = ( (::String)(func->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  85)					output = (output + (func1 + HX_("(), ",b5,cb,8f,1a)));
            				}
            			}
HXLINE(  87)			return (output + HX_("\nTry 'help(\"command\")' for more information about a specific command.",cf,42,2c,8a));
            		}
            		else {
HXLINE(  91)			if (this->_console->registeredHelp->exists(Alias)) {
HXLINE(  93)				::String _hx_tmp1;
HXDLIN(  93)				if (this->_console->registeredFunctions->exists(Alias)) {
HXLINE(  93)					_hx_tmp1 = HX_("()",01,23,00,00);
            				}
            				else {
HXLINE(  93)					_hx_tmp1 = HX_("",00,00,00,00);
            				}
HXDLIN(  93)				::String _hx_tmp2 = ((Alias + _hx_tmp1) + HX_(": ",a6,32,00,00));
HXDLIN(  93)				return (_hx_tmp2 + ( (::String)(this->_console->registeredHelp->get(Alias)) ));
            			}
            			else {
HXLINE(  98)				::flixel::FlxG_obj::log->advanced(((HX_("Help: The command '",5c,dd,57,6e) + Alias) + HX_("' does not have help text.",1f,16,65,26)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXLINE(  99)				return null();
            			}
            		}
HXLINE(  76)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleCommands_obj,help,return )

void ConsoleCommands_obj::close(){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_106_close)
HXDLIN( 106)		::flixel::FlxG_obj::debugger->set_visible(false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,close,(void))

void ConsoleCommands_obj::create(hx::Class ObjClass,hx::Null< bool >  __o_MousePos,::cpp::VirtualArray Params){
bool MousePos = __o_MousePos.Default(true);
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_110_create)
HXLINE( 111)		if (hx::IsNull( Params )) {
HXLINE( 112)			Params = ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 114)		 ::flixel::FlxObject obj = ( ( ::flixel::FlxObject)(::Type_obj::createInstance(ObjClass,Params)) );
HXLINE( 116)		if (hx::IsNull( obj )) {
HXLINE( 116)			return;
            		}
HXLINE( 118)		if (MousePos) {
HXLINE( 120)			obj->set_x(::flixel::FlxG_obj::game->get_mouseX());
HXLINE( 121)			obj->set_y(::flixel::FlxG_obj::game->get_mouseY());
            		}
HXLINE( 124)		::flixel::FlxG_obj::game->_state->add(obj).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 126)		if ((Params->get_length() == (int)0)) {
HXLINE( 127)			::String Text = ((HX_("create: New ",82,f9,21,bf) + ::Std_obj::string(ObjClass)) + HX_(" created at X = ",00,f4,df,3b));
HXDLIN( 127)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,(((Text + obj->x) + HX_(" Y = ",ca,0a,bf,a7)) + obj->y)),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
            		else {
HXLINE( 129)			::String Text1 = ((HX_("create: New ",82,f9,21,bf) + ::Std_obj::string(ObjClass)) + HX_(" created at X = ",00,f4,df,3b));
HXDLIN( 129)			::String Text2 = ((((Text1 + obj->x) + HX_(" Y = ",ca,0a,bf,a7)) + obj->y) + HX_(" with params ",20,c2,85,fb));
HXDLIN( 129)			 ::Dynamic Text3 = (Text2 + ::Std_obj::string(Params));
HXDLIN( 129)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,Text3),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
HXLINE( 131)		this->_console->objectStack->push(obj);
HXLINE( 133)		::String name = (HX_("Object_",a0,90,a0,4f) + this->_console->objectStack->length);
HXLINE( 134)		::haxe::IMap_obj::set(this->_console->registeredObjects,name,obj);
HXLINE( 136)		{
HXLINE( 136)			 ::Dynamic Text4 = ((((HX_("create: ",a2,50,f4,2b) + ::Std_obj::string(ObjClass)) + HX_(" registered as '",b7,f0,b7,dc)) + name) + HX_("'",27,00,00,00));
HXDLIN( 136)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,Text4),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(ConsoleCommands_obj,create,(void))

::String ConsoleCommands_obj::fields( ::Dynamic Object){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_141_fields)
HXDLIN( 141)		::String _hx_tmp = ((HX_("Fields of ",22,2a,96,7d) + ::Type_obj::getClassName(Object)) + HX_(":\n",90,32,00,00));
HXDLIN( 141)		return (_hx_tmp + ::StringTools_obj::trim(::flixel::_hx_system::debug::console::ConsoleUtil_obj::getFields(Object)->join(HX_("\n",0a,00,00,00))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleCommands_obj,fields,return )

void ConsoleCommands_obj::listObjects(){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_147_listObjects)
HXDLIN( 147)		 ::Dynamic Text = (HX_("Objects registered: \n",f6,ad,0c,d4) + ::flixel::util::FlxStringUtil_obj::formatStringMap(this->_console->registeredObjects));
HXDLIN( 147)		::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,Text),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,listObjects,(void))

void ConsoleCommands_obj::listFunctions(){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_152_listFunctions)
HXDLIN( 152)		 ::Dynamic Text = (HX_("Functions registered: \n",bd,05,3d,78) + ::flixel::util::FlxStringUtil_obj::formatStringMap(this->_console->registeredFunctions));
HXDLIN( 152)		::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,Text),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,listFunctions,(void))

void ConsoleCommands_obj::watchMouse(){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_156_watchMouse)
HXLINE( 157)		if (!(this->_watchingMouse)) {
HXLINE( 159)			{
HXLINE( 159)				 ::flixel::_hx_system::frontEnds::WatchFrontEnd _this = ::flixel::FlxG_obj::watch;
HXDLIN( 159)				 ::flixel::_hx_system::debug::watch::Watch _hx_tmp = ::flixel::FlxG_obj::game->debugger->watch;
HXDLIN( 159)				_hx_tmp->add(HX_("Mouse Position",44,8e,3a,9d),::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(hx::ClassOf< ::flixel::FlxG >(),HX_("mouse",25,16,65,0c)));
            			}
HXLINE( 160)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,HX_("watchMouse: Mouse position added to watch window",86,9c,f8,24)),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
            		else {
HXLINE( 164)			{
HXLINE( 164)				 ::flixel::_hx_system::frontEnds::WatchFrontEnd _this1 = ::flixel::FlxG_obj::watch;
HXDLIN( 164)				 ::flixel::_hx_system::debug::watch::Watch _hx_tmp1 = ::flixel::FlxG_obj::game->debugger->watch;
HXDLIN( 164)				_hx_tmp1->remove(null(),::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(hx::ClassOf< ::flixel::FlxG >(),HX_("mouse",25,16,65,0c)));
            			}
HXLINE( 165)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,HX_("watchMouse: Mouse position removed from watch window",17,fe,23,1d)),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
HXLINE( 168)		this->_watchingMouse = !(this->_watchingMouse);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,watchMouse,(void))

void ConsoleCommands_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_173_pause)
HXDLIN( 173)		if (::flixel::FlxG_obj::vcr->paused) {
HXLINE( 175)			::flixel::FlxG_obj::vcr->resume();
HXLINE( 176)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,HX_("pause: Game unpaused",f9,e8,d5,eb)),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
            		else {
HXLINE( 180)			::flixel::FlxG_obj::vcr->pause();
HXLINE( 181)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,HX_("pause: Game paused",60,a9,dd,91)),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,pause,(void))

void ConsoleCommands_obj::step(){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_187_step)
HXDLIN( 187)		if (::flixel::FlxG_obj::vcr->paused) {
HXLINE( 188)			::flixel::FlxG_obj::game->debugger->vcr->onStep();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,step,(void))


hx::ObjectPtr< ConsoleCommands_obj > ConsoleCommands_obj::__new( ::flixel::_hx_system::debug::console::Console console) {
	hx::ObjectPtr< ConsoleCommands_obj > __this = new ConsoleCommands_obj();
	__this->__construct(console);
	return __this;
}

hx::ObjectPtr< ConsoleCommands_obj > ConsoleCommands_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::_hx_system::debug::console::Console console) {
	ConsoleCommands_obj *__this = (ConsoleCommands_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ConsoleCommands_obj), true, "flixel.system.debug.console.ConsoleCommands"));
	*(void **)__this = ConsoleCommands_obj::_hx_vtable;
	__this->__construct(console);
	return __this;
}

ConsoleCommands_obj::ConsoleCommands_obj()
{
}

void ConsoleCommands_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConsoleCommands);
	HX_MARK_MEMBER_NAME(_console,"_console");
	HX_MARK_MEMBER_NAME(_watchingMouse,"_watchingMouse");
	HX_MARK_END_CLASS();
}

void ConsoleCommands_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_console,"_console");
	HX_VISIT_MEMBER_NAME(_watchingMouse,"_watchingMouse");
}

hx::Val ConsoleCommands_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"help") ) { return hx::Val( help_dyn() ); }
		if (HX_FIELD_EQ(inName,"step") ) { return hx::Val( step_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"fields") ) { return hx::Val( fields_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { return hx::Val( _console ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"watchMouse") ) { return hx::Val( watchMouse_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"listObjects") ) { return hx::Val( listObjects_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"listFunctions") ) { return hx::Val( listFunctions_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_watchingMouse") ) { return hx::Val( _watchingMouse ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ConsoleCommands_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { _console=inValue.Cast<  ::flixel::_hx_system::debug::console::Console >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_watchingMouse") ) { _watchingMouse=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConsoleCommands_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_console","\xd8","\x44","\x8e","\x52"));
	outFields->push(HX_HCSTRING("_watchingMouse","\x73","\xf3","\x3a","\x2a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ConsoleCommands_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_hx_system::debug::console::Console*/ ,(int)offsetof(ConsoleCommands_obj,_console),HX_HCSTRING("_console","\xd8","\x44","\x8e","\x52")},
	{hx::fsBool,(int)offsetof(ConsoleCommands_obj,_watchingMouse),HX_HCSTRING("_watchingMouse","\x73","\xf3","\x3a","\x2a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ConsoleCommands_obj_sStaticStorageInfo = 0;
#endif

static ::String ConsoleCommands_obj_sMemberFields[] = {
	HX_HCSTRING("_console","\xd8","\x44","\x8e","\x52"),
	HX_HCSTRING("_watchingMouse","\x73","\xf3","\x3a","\x2a"),
	HX_HCSTRING("help","\xc1","\x32","\x0b","\x45"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"),
	HX_HCSTRING("listObjects","\x16","\xdc","\x4e","\x39"),
	HX_HCSTRING("listFunctions","\x1d","\x52","\x37","\xc0"),
	HX_HCSTRING("watchMouse","\x56","\x31","\x6f","\x84"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"),
	::String(null()) };

static void ConsoleCommands_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleCommands_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConsoleCommands_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleCommands_obj::__mClass,"__mClass");
};

#endif

hx::Class ConsoleCommands_obj::__mClass;

void ConsoleCommands_obj::__register()
{
	hx::Object *dummy = new ConsoleCommands_obj;
	ConsoleCommands_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.console.ConsoleCommands","\x80","\xe4","\xff","\xa4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ConsoleCommands_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ConsoleCommands_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConsoleCommands_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConsoleCommands_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConsoleCommands_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConsoleCommands_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console
