// Generated by Haxe 3.4.4
#ifndef INCLUDED_HitEmitter
#define INCLUDED_HitEmitter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
HX_DECLARE_CLASS0(HitEmitter)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitter)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES HitEmitter_obj : public  ::flixel::effects::particles::FlxTypedEmitter_obj
{
	public:
		typedef  ::flixel::effects::particles::FlxTypedEmitter_obj super;
		typedef HitEmitter_obj OBJ_;
		HitEmitter_obj();

	public:
		enum { _hx_ClassId = 0x1118db7b };

		void __construct( ::flixel::FlxObject T,Float yDir);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="HitEmitter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"HitEmitter"); }
		static hx::ObjectPtr< HitEmitter_obj > __new( ::flixel::FlxObject T,Float yDir);
		static hx::ObjectPtr< HitEmitter_obj > __alloc(hx::Ctx *_hx_ctx, ::flixel::FlxObject T,Float yDir);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HitEmitter_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("HitEmitter","\x7b","\xdb","\x18","\x11"); }

		 ::flixel::FlxObject target;
};


#endif /* INCLUDED_HitEmitter */ 
