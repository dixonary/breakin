// Generated by Haxe 3.4.4
#ifndef INCLUDED_Ball
#define INCLUDED_Ball

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Ball)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,effects,FlxTrail)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Ball_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Ball_obj OBJ_;
		Ball_obj();

	public:
		enum { _hx_ClassId = 0x2bea0e1f };

		void __construct(int P);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Ball")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"Ball"); }
		static hx::ObjectPtr< Ball_obj > __new(int P);
		static hx::ObjectPtr< Ball_obj > __alloc(hx::Ctx *_hx_ctx,int P);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ball_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Ball","\x1f","\x0e","\xea","\x2b"); }

		static void __boot();
		static int ballSize;
		static Float Speed;
		int player;
		 ::flixel::_hx_system::FlxSound ping;
		 ::flixel::addons::effects::FlxTrail trail;
		void resetPosition(hx::Null< bool >  andGo);
		::Dynamic resetPosition_dyn();

		void start();
		::Dynamic start_dyn();

		void update(Float d);

};


#endif /* INCLUDED_Ball */ 
