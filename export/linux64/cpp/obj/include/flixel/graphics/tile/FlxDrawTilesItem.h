// Generated by Haxe 3.4.4
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTilesItem
#define INCLUDED_flixel_graphics_tile_FlxDrawTilesItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxDrawBaseItem)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxDrawTilesItem)
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,ColorTransform)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)

namespace flixel{
namespace graphics{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES FlxDrawTilesItem_obj : public  ::flixel::graphics::tile::FlxDrawBaseItem_obj
{
	public:
		typedef  ::flixel::graphics::tile::FlxDrawBaseItem_obj super;
		typedef FlxDrawTilesItem_obj OBJ_;
		FlxDrawTilesItem_obj();

	public:
		enum { _hx_ClassId = 0x2b5673bf };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.tile.FlxDrawTilesItem")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.graphics.tile.FlxDrawTilesItem"); }
		static hx::ObjectPtr< FlxDrawTilesItem_obj > __new();
		static hx::ObjectPtr< FlxDrawTilesItem_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxDrawTilesItem_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FlxDrawTilesItem","\xe2","\xb0","\x84","\x99"); }

		::Array< Float > drawData;
		int position;
		 ::Dynamic shader;
		void reset();

		void dispose();

		void addQuad( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxMatrix matrix, ::openfl::_legacy::geom::ColorTransform transform);

		void setNext(Float f);
		::Dynamic setNext_dyn();

		void render( ::flixel::FlxCamera camera);

		int get_numTiles();
		::Dynamic get_numTiles_dyn();

		int get_numVertices();

		int get_numTriangles();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace tile

#endif /* INCLUDED_flixel_graphics_tile_FlxDrawTilesItem */ 
