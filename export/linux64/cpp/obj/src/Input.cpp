// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Input
#include <Input.h>
#endif
#ifndef INCLUDED_InputMode
#include <InputMode.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogValueList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogValueList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7fe52dd502b04ee0_15_XAxis,"Input","XAxis",0xdfd1ed95,"Input.XAxis","Input.hx",15,0xa045dd14)
HX_LOCAL_STACK_FRAME(_hx_pos_7fe52dd502b04ee0_35_Start,"Input","Start",0x20757cbe,"Input.Start","Input.hx",35,0xa045dd14)
HX_LOCAL_STACK_FRAME(_hx_pos_7fe52dd502b04ee0_47_get_Ready,"Input","get_Ready",0x62a9f316,"Input.get_Ready","Input.hx",47,0xa045dd14)
HX_LOCAL_STACK_FRAME(_hx_pos_7fe52dd502b04ee0_10_boot,"Input","boot",0x9f488f36,"Input.boot","Input.hx",10,0xa045dd14)

void Input_obj::__construct() { }

Dynamic Input_obj::__CreateEmpty() { return new Input_obj; }

void *Input_obj::_hx_vtable = 0;

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Input_obj > _hx_result = new Input_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Input_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x514b33ea;
}

 ::InputMode Input_obj::Mode;

Float Input_obj::XAxis(int player){
            	HX_STACKFRAME(&_hx_pos_7fe52dd502b04ee0_15_XAxis)
HXLINE(  16)		if (hx::IsEq( ::Input_obj::Mode,::InputMode_obj::KEYBOARD_dyn() )) {
HXLINE(  17)			switch((int)(player)){
            				case (int)0: {
HXLINE(  19)					int _hx_tmp;
HXDLIN(  19)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  19)					if (_this->keyManager->checkStatus((int)37,_this->status)) {
HXLINE(  19)						_hx_tmp = (int)-1;
            					}
            					else {
HXLINE(  19)						_hx_tmp = (int)0;
            					}
HXLINE(  20)					int _hx_tmp1;
HXDLIN(  20)					 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  20)					if (_this1->keyManager->checkStatus((int)39,_this1->status)) {
HXLINE(  20)						_hx_tmp1 = (int)1;
            					}
            					else {
HXLINE(  20)						_hx_tmp1 = (int)0;
            					}
HXLINE(  19)					return (_hx_tmp + _hx_tmp1);
            				}
            				break;
            				case (int)1: {
HXLINE(  22)					int _hx_tmp2;
HXDLIN(  22)					 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  22)					if (_this2->keyManager->checkStatus((int)65,_this2->status)) {
HXLINE(  22)						_hx_tmp2 = (int)-1;
            					}
            					else {
HXLINE(  22)						_hx_tmp2 = (int)0;
            					}
HXLINE(  23)					int _hx_tmp3;
HXDLIN(  23)					 ::flixel::input::keyboard::FlxKeyList _this3 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  23)					if (_this3->keyManager->checkStatus((int)68,_this3->status)) {
HXLINE(  23)						_hx_tmp3 = (int)1;
            					}
            					else {
HXLINE(  23)						_hx_tmp3 = (int)0;
            					}
HXLINE(  22)					return (_hx_tmp2 + _hx_tmp3);
            				}
            				break;
            			}
            		}
            		else {
HXLINE(  27)			::Array< ::Dynamic> gpads = ::flixel::FlxG_obj::gamepads->getActiveGamepads(null());
HXLINE(  28)			if ((gpads->length <= player)) {
HXLINE(  28)				return (int)0;
            			}
HXLINE(  29)			 ::flixel::input::gamepad::FlxGamepad _this4 = gpads->__get(player).StaticCast<  ::flixel::input::gamepad::FlxGamepad >()->analog->value->gamepad;
HXDLIN(  29)			return _this4->getAnalogXAxisValue(_this4->mapping->getAnalogStick((int)19));
            		}
HXLINE(  31)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,XAxis,return )

bool Input_obj::Start(int player){
            	HX_STACKFRAME(&_hx_pos_7fe52dd502b04ee0_35_Start)
HXDLIN(  35)		if (hx::IsEq( ::Input_obj::Mode,::InputMode_obj::KEYBOARD_dyn() )) {
HXLINE(  36)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  36)			return _this->keyManager->checkStatus((int)13,_this->status);
            		}
            		else {
HXLINE(  39)			::Array< ::Dynamic> gpads = ::flixel::FlxG_obj::gamepads->getActiveGamepads(null());
HXLINE(  40)			if ((gpads->length <= player)) {
HXLINE(  40)				return false;
            			}
HXLINE(  41)			 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this1 = gpads->__get(player).StaticCast<  ::flixel::input::gamepad::FlxGamepad >()->justPressed;
HXDLIN(  41)			 ::flixel::input::gamepad::FlxGamepad _this2 = _this1->gamepad;
HXDLIN(  41)			int Status = _this1->status;
HXDLIN(  41)			return _this2->checkStatusRaw(_this2->mapping->getRawID((int)7),Status);
            		}
HXLINE(  35)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,Start,return )

bool Input_obj::get_Ready(){
            	HX_STACKFRAME(&_hx_pos_7fe52dd502b04ee0_47_get_Ready)
HXDLIN(  47)		if (hx::IsEq( ::Input_obj::Mode,::InputMode_obj::KEYBOARD_dyn() )) {
HXDLIN(  47)			return true;
            		}
            		else {
HXLINE(  48)			return (::flixel::FlxG_obj::gamepads->getActiveGamepads(null())->length >= (int)2);
            		}
HXLINE(  47)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_Ready,return )


Input_obj::Input_obj()
{
}

bool Input_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Mode") ) { outValue = ( Mode ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Ready") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_Ready() ); return true; } }
		if (HX_FIELD_EQ(inName,"XAxis") ) { outValue = XAxis_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"Start") ) { outValue = Start_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_Ready") ) { outValue = get_Ready_dyn(); return true; }
	}
	return false;
}

bool Input_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Mode") ) { Mode=ioValue.Cast<  ::InputMode >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Input_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Input_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::InputMode*/ ,(void *) &Input_obj::Mode,HX_HCSTRING("Mode","\x83","\xff","\x39","\x33")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Input_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Input_obj::Mode,"Mode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Input_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Input_obj::Mode,"Mode");
};

#endif

hx::Class Input_obj::__mClass;

static ::String Input_obj_sStaticFields[] = {
	HX_HCSTRING("Mode","\x83","\xff","\x39","\x33"),
	HX_HCSTRING("XAxis","\x19","\x55","\x95","\xd6"),
	HX_HCSTRING("Start","\x42","\xe4","\x38","\x17"),
	HX_HCSTRING("get_Ready","\x9a","\x6c","\x91","\xbd"),
	::String(null())
};

void Input_obj::__register()
{
	hx::Object *dummy = new Input_obj;
	Input_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Input","\xea","\x33","\x4b","\x51");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Input_obj::__GetStatic;
	__mClass->mSetStaticField = &Input_obj::__SetStatic;
	__mClass->mMarkFunc = Input_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Input_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Input_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Input_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Input_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Input_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7fe52dd502b04ee0_10_boot)
HXDLIN(  10)		Mode = ::InputMode_obj::KEYBOARD_dyn();
            	}
}

