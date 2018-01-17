// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_display_shapes_FlxShape
#include <flixel/addons/display/shapes/FlxShape.h>
#endif
#ifndef INCLUDED_flixel_addons_display_shapes_FlxShapeType
#include <flixel/addons/display/shapes/FlxShapeType.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3f95af7519c5c220_15_new,"flixel.addons.display.shapes.FlxShape","new",0x99784848,"flixel.addons.display.shapes.FlxShape.new","flixel/addons/display/shapes/FlxShape.hx",15,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_83_destroy,"flixel.addons.display.shapes.FlxShape","destroy",0x63a8b8e2,"flixel.addons.display.shapes.FlxShape.destroy","flixel/addons/display/shapes/FlxShape.hx",83,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_89_drawSpecificShape,"flixel.addons.display.shapes.FlxShape","drawSpecificShape",0x2fc8bc53,"flixel.addons.display.shapes.FlxShape.drawSpecificShape","flixel/addons/display/shapes/FlxShape.hx",89,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_95_redrawShape,"flixel.addons.display.shapes.FlxShape","redrawShape",0x444fc652,"flixel.addons.display.shapes.FlxShape.redrawShape","flixel/addons/display/shapes/FlxShape.hx",95,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_122_draw,"flixel.addons.display.shapes.FlxShape","draw",0xa9349f1c,"flixel.addons.display.shapes.FlxShape.draw","flixel/addons/display/shapes/FlxShape.hx",122,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_143_fixBoundaries,"flixel.addons.display.shapes.FlxShape","fixBoundaries",0x7367f7e5,"flixel.addons.display.shapes.FlxShape.fixBoundaries","flixel/addons/display/shapes/FlxShape.hx",143,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_155_getStrokeOffsetX,"flixel.addons.display.shapes.FlxShape","getStrokeOffsetX",0x2d61452f,"flixel.addons.display.shapes.FlxShape.getStrokeOffsetX","flixel/addons/display/shapes/FlxShape.hx",155,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_160_getStrokeOffsetY,"flixel.addons.display.shapes.FlxShape","getStrokeOffsetY",0x2d614530,"flixel.addons.display.shapes.FlxShape.getStrokeOffsetY","flixel/addons/display/shapes/FlxShape.hx",160,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_165_get_strokeBuffer,"flixel.addons.display.shapes.FlxShape","get_strokeBuffer",0xdea32279,"flixel.addons.display.shapes.FlxShape.get_strokeBuffer","flixel/addons/display/shapes/FlxShape.hx",165,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_169_getStrokeOffsetMatrix,"flixel.addons.display.shapes.FlxShape","getStrokeOffsetMatrix",0xde9f7a2a,"flixel.addons.display.shapes.FlxShape.getStrokeOffsetMatrix","flixel/addons/display/shapes/FlxShape.hx",169,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_177_set_fillColor,"flixel.addons.display.shapes.FlxShape","set_fillColor",0x3afdb7ab,"flixel.addons.display.shapes.FlxShape.set_fillColor","flixel/addons/display/shapes/FlxShape.hx",177,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_184_set_lineStyle,"flixel.addons.display.shapes.FlxShape","set_lineStyle",0xed12c868,"flixel.addons.display.shapes.FlxShape.set_lineStyle","flixel/addons/display/shapes/FlxShape.hx",184,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_191_set_shapeWidth,"flixel.addons.display.shapes.FlxShape","set_shapeWidth",0x4984fcfa,"flixel.addons.display.shapes.FlxShape.set_shapeWidth","flixel/addons/display/shapes/FlxShape.hx",191,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_198_set_shapeHeight,"flixel.addons.display.shapes.FlxShape","set_shapeHeight",0xc127d673,"flixel.addons.display.shapes.FlxShape.set_shapeHeight","flixel/addons/display/shapes/FlxShape.hx",198,0x1d167428)
namespace flixel{
namespace addons{
namespace display{
namespace shapes{

void FlxShape_obj::__construct(Float X,Float Y,Float CanvasWidth,Float CanvasHeight, ::Dynamic LineStyle_,int FillColor,hx::Null< Float >  __o_TrueWidth,hx::Null< Float >  __o_TrueHeight){
Float TrueWidth = __o_TrueWidth.Default(0);
Float TrueHeight = __o_TrueHeight.Default(0);
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_15_new)
HXLINE(  25)		this->shapeDirty = false;
HXLINE(  24)		this->shape_id = ::flixel::addons::display::shapes::FlxShapeType_obj::UNKNOWN_dyn();
HXLINE(  42)		super::__construct(X,Y,null());
HXLINE(  44)		{
HXLINE(  44)			this->lineStyle = LineStyle_;
HXDLIN(  44)			this->shapeDirty = true;
            		}
HXLINE(  45)		{
HXLINE(  45)			this->fillColor = FillColor;
HXDLIN(  45)			this->shapeDirty = true;
            		}
HXLINE(  47)		bool _hx_tmp;
HXDLIN(  47)		if ((CanvasWidth == (int)0)) {
HXLINE(  47)			_hx_tmp = (TrueWidth != (int)0);
            		}
            		else {
HXLINE(  47)			_hx_tmp = false;
            		}
HXDLIN(  47)		if (_hx_tmp) {
HXLINE(  49)			CanvasWidth = (TrueWidth + this->get_strokeBuffer());
            		}
HXLINE(  51)		bool _hx_tmp1;
HXDLIN(  51)		if ((CanvasHeight == (int)0)) {
HXLINE(  51)			_hx_tmp1 = (TrueHeight != (int)0);
            		}
            		else {
HXLINE(  51)			_hx_tmp1 = false;
            		}
HXDLIN(  51)		if (_hx_tmp1) {
HXLINE(  53)			CanvasHeight = (TrueHeight + this->get_strokeBuffer());
            		}
HXLINE(  56)		if ((CanvasWidth < (int)1)) {
HXLINE(  56)			CanvasWidth = (int)1;
            		}
HXLINE(  57)		if ((CanvasHeight < (int)1)) {
HXLINE(  57)			CanvasHeight = (int)1;
            		}
HXLINE(  59)		{
HXLINE(  59)			this->shapeWidth = TrueWidth;
HXDLIN(  59)			this->shapeDirty = true;
            		}
HXLINE(  60)		{
HXLINE(  60)			this->shapeHeight = TrueHeight;
HXDLIN(  60)			this->shapeDirty = true;
            		}
HXLINE(  62)		this->set_width(CanvasWidth);
HXLINE(  63)		this->set_height(CanvasHeight);
HXLINE(  65)		int _hx_tmp2 = ::Std_obj::_hx_int(this->get_width());
HXDLIN(  65)		this->makeGraphic(_hx_tmp2,::Std_obj::_hx_int(this->get_height()),(int)0,true,null());
HXLINE(  69)		this->_drawStyle =  ::Dynamic(hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("smoothing",74,d5,e1,95),true)
            			->setFixed(1,HX_("colorTransform",89,d7,3f,ad),null())
            			->setFixed(2,HX_("matrix",41,36,c8,bb),null())
            			->setFixed(3,HX_("blendMode",54,e4,37,0c),::openfl::_legacy::display::BlendMode_obj::NORMAL_dyn())
            			->setFixed(4,HX_("clipRect",14,90,6a,58),null()));
HXLINE(  71)		bool _hx_tmp3;
HXDLIN(  71)		if ((this->shapeWidth != (int)0)) {
HXLINE(  71)			_hx_tmp3 = (this->shapeHeight != (int)0);
            		}
            		else {
HXLINE(  71)			_hx_tmp3 = false;
            		}
HXDLIN(  71)		if (_hx_tmp3) {
HXLINE(  73)			bool _hx_tmp4;
HXDLIN(  73)			if ((this->shapeWidth < CanvasWidth)) {
HXLINE(  73)				_hx_tmp4 = (this->shapeHeight < CanvasHeight);
            			}
            			else {
HXLINE(  73)				_hx_tmp4 = false;
            			}
HXDLIN(  73)			if (_hx_tmp4) {
HXLINE(  75)				this->fixBoundaries(this->shapeWidth,this->shapeHeight);
            			}
            		}
HXLINE(  79)		this->shapeDirty = true;
            	}

Dynamic FlxShape_obj::__CreateEmpty() { return new FlxShape_obj; }

void *FlxShape_obj::_hx_vtable = 0;

Dynamic FlxShape_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxShape_obj > _hx_result = new FlxShape_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool FlxShape_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25a685e0) {
		if (inClassId<=(int)0x0b6ffd77) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
		} else {
			return inClassId==(int)0x25a685e0;
		}
	} else {
		return inClassId==(int)0x2e105115 || inClassId==(int)0x63842510;
	}
}

void FlxShape_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_83_destroy)
HXLINE(  84)		{
HXLINE(  84)			this->lineStyle = null();
HXDLIN(  84)			this->shapeDirty = true;
            		}
HXLINE(  85)		this->super::destroy();
            	}


void FlxShape_obj::drawSpecificShape( ::openfl::_legacy::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_89_drawSpecificShape)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxShape_obj,drawSpecificShape,(void))

void FlxShape_obj::redrawShape(){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_95_redrawShape)
HXLINE(  96)		int diffX = ::Std_obj::_hx_int(this->shapeWidth);
HXDLIN(  96)		int diffX1 = (diffX - this->get_pixels()->get_width());
HXLINE(  97)		int diffY = ::Std_obj::_hx_int(this->shapeHeight);
HXDLIN(  97)		int diffY1 = (diffY - this->get_pixels()->get_height());
HXLINE(  99)		bool _hx_tmp;
HXDLIN(  99)		if ((diffX1 == (int)0)) {
HXLINE(  99)			_hx_tmp = (diffY1 != (int)0);
            		}
            		else {
HXLINE(  99)			_hx_tmp = true;
            		}
HXDLIN(  99)		if (_hx_tmp) {
HXLINE( 101)			Float trueWidth = this->shapeWidth;
HXLINE( 102)			Float trueHeight = this->shapeHeight;
HXLINE( 103)			Float _hx_tmp1 = this->get_width();
HXDLIN( 103)			int _hx_tmp2 = ::Std_obj::_hx_int((_hx_tmp1 + this->get_strokeBuffer()));
HXDLIN( 103)			Float _hx_tmp3 = this->get_height();
HXDLIN( 103)			this->makeGraphic(_hx_tmp2,::Std_obj::_hx_int((_hx_tmp3 + this->get_strokeBuffer())),(int)0,true,null());
HXLINE( 104)			this->fixBoundaries(trueWidth,trueHeight);
            		}
            		else {
HXLINE( 108)			 ::openfl::_legacy::display::BitmapData _hx_tmp4 = this->get_pixels();
HXDLIN( 108)			_hx_tmp4->fillRect(this->get_pixels()->get_rect(),(int)0);
            		}
HXLINE( 110)		if (hx::IsGreater( this->lineStyle->__Field(HX_("thickness",74,f1,66,5a),hx::paccDynamic),(int)1 )) {
HXLINE( 112)			 ::openfl::_legacy::geom::Matrix matrix = this->getStrokeOffsetMatrix(this->_matrix);
HXLINE( 113)			this->drawSpecificShape(matrix);
            		}
            		else {
HXLINE( 117)			this->drawSpecificShape(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxShape_obj,redrawShape,(void))

void FlxShape_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_122_draw)
HXLINE( 123)		if (this->shapeDirty) {
HXLINE( 125)			this->redrawShape();
HXLINE( 126)			this->shapeDirty = false;
            		}
HXLINE( 128)		this->super::draw();
            	}


void FlxShape_obj::fixBoundaries(Float trueWidth,Float trueHeight){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_143_fixBoundaries)
HXLINE( 144)		this->set_width(trueWidth);
HXLINE( 145)		this->set_height(trueHeight);
HXLINE( 147)		 ::flixel::math::FlxPoint _hx_tmp = this->offset;
HXDLIN( 147)		_hx_tmp->set_x(this->getStrokeOffsetX());
HXLINE( 148)		 ::flixel::math::FlxPoint _hx_tmp1 = this->offset;
HXDLIN( 148)		_hx_tmp1->set_y(this->getStrokeOffsetY());
HXLINE( 150)		this->shapeDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxShape_obj,fixBoundaries,(void))

Float FlxShape_obj::getStrokeOffsetX(){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_155_getStrokeOffsetX)
HXDLIN( 155)		return ((Float)this->get_strokeBuffer() / (Float)(int)4);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxShape_obj,getStrokeOffsetX,return )

Float FlxShape_obj::getStrokeOffsetY(){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_160_getStrokeOffsetY)
HXDLIN( 160)		return ((Float)this->get_strokeBuffer() / (Float)(int)4);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxShape_obj,getStrokeOffsetY,return )

Float FlxShape_obj::get_strokeBuffer(){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_165_get_strokeBuffer)
HXDLIN( 165)		return (this->lineStyle->__Field(HX_("thickness",74,f1,66,5a),hx::paccDynamic) * ((Float)2.0));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxShape_obj,get_strokeBuffer,return )

 ::openfl::_legacy::geom::Matrix FlxShape_obj::getStrokeOffsetMatrix( ::openfl::_legacy::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_169_getStrokeOffsetMatrix)
HXLINE( 170)		Float buffer = ((Float)this->get_strokeBuffer() / (Float)(int)2);
HXLINE( 171)		matrix->identity();
HXLINE( 172)		matrix->translate(buffer,buffer);
HXLINE( 173)		return matrix;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxShape_obj,getStrokeOffsetMatrix,return )

int FlxShape_obj::set_fillColor(int fc){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_177_set_fillColor)
HXLINE( 178)		this->fillColor = fc;
HXLINE( 179)		this->shapeDirty = true;
HXLINE( 180)		return this->fillColor;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxShape_obj,set_fillColor,return )

 ::Dynamic FlxShape_obj::set_lineStyle( ::Dynamic ls){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_184_set_lineStyle)
HXLINE( 185)		this->lineStyle = ls;
HXLINE( 186)		this->shapeDirty = true;
HXLINE( 187)		return this->lineStyle;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxShape_obj,set_lineStyle,return )

Float FlxShape_obj::set_shapeWidth(Float f){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_191_set_shapeWidth)
HXLINE( 192)		this->shapeWidth = f;
HXLINE( 193)		this->shapeDirty = true;
HXLINE( 194)		return this->shapeWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxShape_obj,set_shapeWidth,return )

Float FlxShape_obj::set_shapeHeight(Float f){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_198_set_shapeHeight)
HXLINE( 199)		this->shapeHeight = f;
HXLINE( 200)		this->shapeDirty = true;
HXLINE( 201)		return this->shapeHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxShape_obj,set_shapeHeight,return )


hx::ObjectPtr< FlxShape_obj > FlxShape_obj::__new(Float X,Float Y,Float CanvasWidth,Float CanvasHeight, ::Dynamic LineStyle_,int FillColor,hx::Null< Float >  __o_TrueWidth,hx::Null< Float >  __o_TrueHeight) {
	hx::ObjectPtr< FlxShape_obj > __this = new FlxShape_obj();
	__this->__construct(X,Y,CanvasWidth,CanvasHeight,LineStyle_,FillColor,__o_TrueWidth,__o_TrueHeight);
	return __this;
}

hx::ObjectPtr< FlxShape_obj > FlxShape_obj::__alloc(hx::Ctx *_hx_ctx,Float X,Float Y,Float CanvasWidth,Float CanvasHeight, ::Dynamic LineStyle_,int FillColor,hx::Null< Float >  __o_TrueWidth,hx::Null< Float >  __o_TrueHeight) {
	FlxShape_obj *__this = (FlxShape_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxShape_obj), true, "flixel.addons.display.shapes.FlxShape"));
	*(void **)__this = FlxShape_obj::_hx_vtable;
	__this->__construct(X,Y,CanvasWidth,CanvasHeight,LineStyle_,FillColor,__o_TrueWidth,__o_TrueHeight);
	return __this;
}

FlxShape_obj::FlxShape_obj()
{
}

void FlxShape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxShape);
	HX_MARK_MEMBER_NAME(lineStyle,"lineStyle");
	HX_MARK_MEMBER_NAME(fillColor,"fillColor");
	HX_MARK_MEMBER_NAME(shapeWidth,"shapeWidth");
	HX_MARK_MEMBER_NAME(shapeHeight,"shapeHeight");
	HX_MARK_MEMBER_NAME(shape_id,"shape_id");
	HX_MARK_MEMBER_NAME(shapeDirty,"shapeDirty");
	HX_MARK_MEMBER_NAME(strokeBuffer,"strokeBuffer");
	HX_MARK_MEMBER_NAME(_drawStyle,"_drawStyle");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxShape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lineStyle,"lineStyle");
	HX_VISIT_MEMBER_NAME(fillColor,"fillColor");
	HX_VISIT_MEMBER_NAME(shapeWidth,"shapeWidth");
	HX_VISIT_MEMBER_NAME(shapeHeight,"shapeHeight");
	HX_VISIT_MEMBER_NAME(shape_id,"shape_id");
	HX_VISIT_MEMBER_NAME(shapeDirty,"shapeDirty");
	HX_VISIT_MEMBER_NAME(strokeBuffer,"strokeBuffer");
	HX_VISIT_MEMBER_NAME(_drawStyle,"_drawStyle");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxShape_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return hx::Val( draw_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shape_id") ) { return hx::Val( shape_id ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return hx::Val( lineStyle ); }
		if (HX_FIELD_EQ(inName,"fillColor") ) { return hx::Val( fillColor ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shapeWidth") ) { return hx::Val( shapeWidth ); }
		if (HX_FIELD_EQ(inName,"shapeDirty") ) { return hx::Val( shapeDirty ); }
		if (HX_FIELD_EQ(inName,"_drawStyle") ) { return hx::Val( _drawStyle ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shapeHeight") ) { return hx::Val( shapeHeight ); }
		if (HX_FIELD_EQ(inName,"redrawShape") ) { return hx::Val( redrawShape_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"strokeBuffer") ) { return hx::Val( inCallProp == hx::paccAlways ? get_strokeBuffer() : strokeBuffer ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixBoundaries") ) { return hx::Val( fixBoundaries_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fillColor") ) { return hx::Val( set_fillColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_lineStyle") ) { return hx::Val( set_lineStyle_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_shapeWidth") ) { return hx::Val( set_shapeWidth_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_shapeHeight") ) { return hx::Val( set_shapeHeight_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getStrokeOffsetX") ) { return hx::Val( getStrokeOffsetX_dyn() ); }
		if (HX_FIELD_EQ(inName,"getStrokeOffsetY") ) { return hx::Val( getStrokeOffsetY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_strokeBuffer") ) { return hx::Val( get_strokeBuffer_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"drawSpecificShape") ) { return hx::Val( drawSpecificShape_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getStrokeOffsetMatrix") ) { return hx::Val( getStrokeOffsetMatrix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxShape_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"shape_id") ) { shape_id=inValue.Cast<  ::flixel::addons::display::shapes::FlxShapeType >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineStyle") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_lineStyle(inValue.Cast<  ::Dynamic >()) );lineStyle=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fillColor") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_fillColor(inValue.Cast< int >()) );fillColor=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shapeWidth") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_shapeWidth(inValue.Cast< Float >()) );shapeWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shapeDirty") ) { shapeDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drawStyle") ) { _drawStyle=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shapeHeight") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_shapeHeight(inValue.Cast< Float >()) );shapeHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"strokeBuffer") ) { strokeBuffer=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxShape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("lineStyle","\x9d","\xa8","\x18","\xcb"));
	outFields->push(HX_HCSTRING("fillColor","\xe0","\x97","\x03","\x19"));
	outFields->push(HX_HCSTRING("shapeWidth","\x25","\x4b","\xa3","\xb0"));
	outFields->push(HX_HCSTRING("shapeHeight","\xe8","\xed","\x8d","\x94"));
	outFields->push(HX_HCSTRING("shape_id","\x79","\x79","\xeb","\x1e"));
	outFields->push(HX_HCSTRING("shapeDirty","\x31","\xe5","\x10","\xc0"));
	outFields->push(HX_HCSTRING("strokeBuffer","\xd8","\x7e","\xd3","\x5a"));
	outFields->push(HX_HCSTRING("_drawStyle","\x4e","\x56","\xcb","\xa7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxShape_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxShape_obj,lineStyle),HX_HCSTRING("lineStyle","\x9d","\xa8","\x18","\xcb")},
	{hx::fsInt,(int)offsetof(FlxShape_obj,fillColor),HX_HCSTRING("fillColor","\xe0","\x97","\x03","\x19")},
	{hx::fsFloat,(int)offsetof(FlxShape_obj,shapeWidth),HX_HCSTRING("shapeWidth","\x25","\x4b","\xa3","\xb0")},
	{hx::fsFloat,(int)offsetof(FlxShape_obj,shapeHeight),HX_HCSTRING("shapeHeight","\xe8","\xed","\x8d","\x94")},
	{hx::fsObject /*::flixel::addons::display::shapes::FlxShapeType*/ ,(int)offsetof(FlxShape_obj,shape_id),HX_HCSTRING("shape_id","\x79","\x79","\xeb","\x1e")},
	{hx::fsBool,(int)offsetof(FlxShape_obj,shapeDirty),HX_HCSTRING("shapeDirty","\x31","\xe5","\x10","\xc0")},
	{hx::fsFloat,(int)offsetof(FlxShape_obj,strokeBuffer),HX_HCSTRING("strokeBuffer","\xd8","\x7e","\xd3","\x5a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxShape_obj,_drawStyle),HX_HCSTRING("_drawStyle","\x4e","\x56","\xcb","\xa7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxShape_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxShape_obj_sMemberFields[] = {
	HX_HCSTRING("lineStyle","\x9d","\xa8","\x18","\xcb"),
	HX_HCSTRING("fillColor","\xe0","\x97","\x03","\x19"),
	HX_HCSTRING("shapeWidth","\x25","\x4b","\xa3","\xb0"),
	HX_HCSTRING("shapeHeight","\xe8","\xed","\x8d","\x94"),
	HX_HCSTRING("shape_id","\x79","\x79","\xeb","\x1e"),
	HX_HCSTRING("shapeDirty","\x31","\xe5","\x10","\xc0"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("drawSpecificShape","\x6b","\x3e","\x59","\x64"),
	HX_HCSTRING("redrawShape","\x6a","\x26","\x95","\x84"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("strokeBuffer","\xd8","\x7e","\xd3","\x5a"),
	HX_HCSTRING("_drawStyle","\x4e","\x56","\xcb","\xa7"),
	HX_HCSTRING("fixBoundaries","\xfd","\x8d","\xd7","\x57"),
	HX_HCSTRING("getStrokeOffsetX","\x17","\x8e","\x30","\xae"),
	HX_HCSTRING("getStrokeOffsetY","\x18","\x8e","\x30","\xae"),
	HX_HCSTRING("get_strokeBuffer","\x61","\x6b","\x72","\x5f"),
	HX_HCSTRING("getStrokeOffsetMatrix","\x42","\xe8","\x36","\x84"),
	HX_HCSTRING("set_fillColor","\xc3","\x4d","\x6d","\x1f"),
	HX_HCSTRING("set_lineStyle","\x80","\x5e","\x82","\xd1"),
	HX_HCSTRING("set_shapeWidth","\xe2","\xbb","\xb8","\x46"),
	HX_HCSTRING("set_shapeHeight","\x8b","\x22","\x3b","\x51"),
	::String(null()) };

static void FlxShape_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxShape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxShape_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxShape_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxShape_obj::__mClass;

void FlxShape_obj::__register()
{
	hx::Object *dummy = new FlxShape_obj;
	FlxShape_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.display.shapes.FlxShape","\x56","\xc4","\x94","\x92");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxShape_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxShape_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxShape_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxShape_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxShape_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxShape_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace display
} // end namespace shapes
