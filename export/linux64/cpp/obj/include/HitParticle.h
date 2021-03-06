// Generated by Haxe 3.4.4
#ifndef INCLUDED_HitParticle
#define INCLUDED_HitParticle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
HX_DECLARE_CLASS0(HitParticle)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxParticle)
HX_DECLARE_CLASS3(flixel,effects,particles,IFlxParticle)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES HitParticle_obj : public  ::flixel::effects::particles::FlxParticle_obj
{
	public:
		typedef  ::flixel::effects::particles::FlxParticle_obj super;
		typedef HitParticle_obj OBJ_;
		HitParticle_obj();

	public:
		enum { _hx_ClassId = 0x564d87d1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="HitParticle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"HitParticle"); }
		static hx::ObjectPtr< HitParticle_obj > __new();
		static hx::ObjectPtr< HitParticle_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HitParticle_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("HitParticle","\x99","\xe3","\xbf","\xf8"); }

		void update(Float d);

};


#endif /* INCLUDED_HitParticle */ 
