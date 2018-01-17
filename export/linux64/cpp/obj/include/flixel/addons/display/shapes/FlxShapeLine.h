// Generated by Haxe 3.4.4
#ifndef INCLUDED_flixel_addons_display_shapes_FlxShapeLine
#define INCLUDED_flixel_addons_display_shapes_FlxShapeLine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_display_shapes_FlxShape
#include <flixel/addons/display/shapes/FlxShape.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS4(flixel,addons,display,shapes,FlxShape)
HX_DECLARE_CLASS4(flixel,addons,display,shapes,FlxShapeLine)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)

namespace flixel{
namespace addons{
namespace display{
namespace shapes{


class HXCPP_CLASS_ATTRIBUTES FlxShapeLine_obj : public  ::flixel::addons::display::shapes::FlxShape_obj
{
	public:
		typedef  ::flixel::addons::display::shapes::FlxShape_obj super;
		typedef FlxShapeLine_obj OBJ_;
		FlxShapeLine_obj();

	public:
		enum { _hx_ClassId = 0x5191b008 };

		void __construct(Float X,Float Y, ::flixel::math::FlxPoint a, ::flixel::math::FlxPoint b, ::Dynamic LineStyle_);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.display.shapes.FlxShapeLine")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.addons.display.shapes.FlxShapeLine"); }
		static hx::ObjectPtr< FlxShapeLine_obj > __new(Float X,Float Y, ::flixel::math::FlxPoint a, ::flixel::math::FlxPoint b, ::Dynamic LineStyle_);
		static hx::ObjectPtr< FlxShapeLine_obj > __alloc(hx::Ctx *_hx_ctx,Float X,Float Y, ::flixel::math::FlxPoint a, ::flixel::math::FlxPoint b, ::Dynamic LineStyle_);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxShapeLine_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FlxShapeLine","\x03","\x15","\x78","\xff"); }

		 ::flixel::math::FlxPoint point;
		 ::flixel::math::FlxPoint point2;
		void destroy();

		virtual void drawSpecificShape( ::openfl::_legacy::geom::Matrix matrix);

		void onSetPoint( ::flixel::math::FlxPoint p);
		::Dynamic onSetPoint_dyn();

		void updatePoint();
		::Dynamic updatePoint_dyn();

		virtual Float get_strokeBuffer();

		virtual Float getStrokeOffsetX();

		virtual Float getStrokeOffsetY();

};

} // end namespace flixel
} // end namespace addons
} // end namespace display
} // end namespace shapes

#endif /* INCLUDED_flixel_addons_display_shapes_FlxShapeLine */ 
