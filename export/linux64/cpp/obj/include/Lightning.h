// Generated by Haxe 3.4.4
#ifndef INCLUDED_Lightning
#define INCLUDED_Lightning

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Lightning)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Lightning_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Lightning_obj OBJ_;
		Lightning_obj();

	public:
		enum { _hx_ClassId = 0x791d18ea };

		void __construct(Float w,Float h,int c);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Lightning")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"Lightning"); }
		static hx::ObjectPtr< Lightning_obj > __new(Float w,Float h,int c);
		static hx::ObjectPtr< Lightning_obj > __alloc(hx::Ctx *_hx_ctx,Float w,Float h,int c);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Lightning_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Lightning","\xea","\x18","\x1d","\x79"); }

		int lColor;
		int ticker;
		int maxTick;
		void update(Float d);

		void generate();
		::Dynamic generate_dyn();

};


#endif /* INCLUDED_Lightning */ 
