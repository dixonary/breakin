// Generated by Haxe 3.4.4
#ifndef INCLUDED_flixel_addons_display_shapes_FlxShapeLightning
#define INCLUDED_flixel_addons_display_shapes_FlxShapeLightning

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_display_shapes_FlxShapeLine
#include <flixel/addons/display/shapes/FlxShapeLine.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS4(flixel,addons,display,shapes,FlxShape)
HX_DECLARE_CLASS4(flixel,addons,display,shapes,FlxShapeLightning)
HX_DECLARE_CLASS4(flixel,addons,display,shapes,FlxShapeLine)
HX_DECLARE_CLASS4(flixel,addons,display,shapes,LineSegment)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)

namespace flixel{
namespace addons{
namespace display{
namespace shapes{


class HXCPP_CLASS_ATTRIBUTES FlxShapeLightning_obj : public  ::flixel::addons::display::shapes::FlxShapeLine_obj
{
	public:
		typedef  ::flixel::addons::display::shapes::FlxShapeLine_obj super;
		typedef FlxShapeLightning_obj OBJ_;
		FlxShapeLightning_obj();

	public:
		enum { _hx_ClassId = 0x4d13d1da };

		void __construct(Float X,Float Y, ::flixel::math::FlxPoint A, ::flixel::math::FlxPoint B, ::Dynamic Style,hx::Null< bool >  __o_UseDefaults);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.display.shapes.FlxShapeLightning")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.addons.display.shapes.FlxShapeLightning"); }
		static hx::ObjectPtr< FlxShapeLightning_obj > __new(Float X,Float Y, ::flixel::math::FlxPoint A, ::flixel::math::FlxPoint B, ::Dynamic Style,hx::Null< bool >  __o_UseDefaults);
		static hx::ObjectPtr< FlxShapeLightning_obj > __alloc(hx::Ctx *_hx_ctx,Float X,Float Y, ::flixel::math::FlxPoint A, ::flixel::math::FlxPoint B, ::Dynamic Style,hx::Null< bool >  __o_UseDefaults);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxShapeLightning_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FlxShapeLightning","\x9b","\x85","\xaa","\xc2"); }

		 ::Dynamic lightningStyle;
		Float detail;
		Float magnitude;
		::Array< ::Dynamic> list_segs;
		::Array< ::Dynamic> list_branch;
		void addSegment(Float Ax,Float Ay,Float Bx,Float By);
		::Dynamic addSegment_dyn();

		void calculate( ::flixel::math::FlxPoint A, ::flixel::math::FlxPoint B,Float Displacement,int Iteration);
		::Dynamic calculate_dyn();

		 ::Dynamic set_lightningStyle( ::Dynamic Style);
		::Dynamic set_lightningStyle_dyn();

		 ::Dynamic copyLineStyle( ::Dynamic ls);
		::Dynamic copyLineStyle_dyn();

		void drawSpecificShape( ::openfl::_legacy::geom::Matrix matrix);

		void redrawFilter();
		::Dynamic redrawFilter_dyn();

		void update(Float elapsed);

		void fixBoundaries(Float trueWidth,Float trueHeight);

		Float get_strokeBuffer();

		Float expandLeft;
		Float expandRight;
		Float expandUp;
		Float expandDown;
		Float getStrokeOffsetX();

		Float getStrokeOffsetY();

};

} // end namespace flixel
} // end namespace addons
} // end namespace display
} // end namespace shapes

#endif /* INCLUDED_flixel_addons_display_shapes_FlxShapeLightning */ 
