// Generated by Haxe 3.4.4
#ifndef INCLUDED_InputMode
#define INCLUDED_InputMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(InputMode)


class InputMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef InputMode_obj OBJ_;

	public:
		InputMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("InputMode","\x6d","\x70","\x5e","\xb1"); }
		::String __ToString() const { return HX_HCSTRING("InputMode.","\x21","\xef","\x43","\x81") + _hx_tag; }

		static ::InputMode GAMEPADS;
		static inline ::InputMode GAMEPADS_dyn() { return GAMEPADS; }
		static ::InputMode KEYBOARD;
		static inline ::InputMode KEYBOARD_dyn() { return KEYBOARD; }
};


#endif /* INCLUDED_InputMode */ 