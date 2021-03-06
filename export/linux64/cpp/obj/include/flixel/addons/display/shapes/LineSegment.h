// Generated by Haxe 3.4.4
#ifndef INCLUDED_flixel_addons_display_shapes_LineSegment
#define INCLUDED_flixel_addons_display_shapes_LineSegment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_ce9f836ce7f1eccb_299_new)
HX_DECLARE_CLASS4(flixel,addons,display,shapes,LineSegment)

namespace flixel{
namespace addons{
namespace display{
namespace shapes{


class HXCPP_CLASS_ATTRIBUTES LineSegment_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef LineSegment_obj OBJ_;
		LineSegment_obj();

	public:
		enum { _hx_ClassId = 0x47fa8a9a };

		void __construct(Float Ax,Float Ay,Float Bx,Float By);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.addons.display.shapes.LineSegment")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"flixel.addons.display.shapes.LineSegment"); }

		hx::ObjectPtr< LineSegment_obj > __new(Float Ax,Float Ay,Float Bx,Float By) {
			hx::ObjectPtr< LineSegment_obj > __this = new LineSegment_obj();
			__this->__construct(Ax,Ay,Bx,By);
			return __this;
		}

		static hx::ObjectPtr< LineSegment_obj > __alloc(hx::Ctx *_hx_ctx,Float Ax,Float Ay,Float Bx,Float By) {
			LineSegment_obj *__this = (LineSegment_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(LineSegment_obj), false, "flixel.addons.display.shapes.LineSegment"));
			*(void **)__this = LineSegment_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_ce9f836ce7f1eccb_299_new)
HXLINE( 300)		( ( ::flixel::addons::display::shapes::LineSegment)(__this) )->ax = Ax;
HXLINE( 301)		( ( ::flixel::addons::display::shapes::LineSegment)(__this) )->ay = Ay;
HXLINE( 302)		( ( ::flixel::addons::display::shapes::LineSegment)(__this) )->bx = Bx;
HXLINE( 303)		( ( ::flixel::addons::display::shapes::LineSegment)(__this) )->by = By;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LineSegment_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("LineSegment","\xff","\x1d","\x55","\xc9"); }

		Float ax;
		Float ay;
		Float bx;
		Float by;
		 ::flixel::addons::display::shapes::LineSegment copy();
		::Dynamic copy_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace display
} // end namespace shapes

#endif /* INCLUDED_flixel_addons_display_shapes_LineSegment */ 
