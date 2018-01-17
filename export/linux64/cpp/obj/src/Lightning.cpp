// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Glow
#include <Glow.h>
#endif
#ifndef INCLUDED_Lightning
#include <Lightning.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0b088b97dbd96993_7_new,"Lightning","new",0x440876dc,"Lightning.new","Lightning.hx",7,0xcef11814)
HX_LOCAL_STACK_FRAME(_hx_pos_0b088b97dbd96993_25_update,"Lightning","update",0x9733150d,"Lightning.update","Lightning.hx",25,0xcef11814)
HX_LOCAL_STACK_FRAME(_hx_pos_0b088b97dbd96993_40_generate,"Lightning","generate",0x7b94b739,"Lightning.generate","Lightning.hx",40,0xcef11814)
HX_LOCAL_STACK_FRAME(_hx_pos_0b088b97dbd96993_34_generate,"Lightning","generate",0x7b94b739,"Lightning.generate","Lightning.hx",34,0xcef11814)

void Lightning_obj::__construct(Float w,Float h,int c){
            	HX_STACKFRAME(&_hx_pos_0b088b97dbd96993_7_new)
HXLINE(  11)		this->maxTick = (int)2;
HXLINE(  14)		super::__construct(null(),null(),null());
HXLINE(  16)		this->set_width(w);
HXLINE(  17)		this->set_height(h);
HXLINE(  18)		this->generate();
HXLINE(  20)		this->set_color(c);
HXLINE(  21)		this->lColor = c;
            	}

Dynamic Lightning_obj::__CreateEmpty() { return new Lightning_obj; }

void *Lightning_obj::_hx_vtable = 0;

Dynamic Lightning_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Lightning_obj > _hx_result = new Lightning_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Lightning_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25a685e0) {
		if (inClassId<=(int)0x0b6ffd77) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
		} else {
			return inClassId==(int)0x25a685e0;
		}
	} else {
		return inClassId==(int)0x2e105115 || inClassId==(int)0x791d18ea;
	}
}

void Lightning_obj::update(Float d){
            	HX_STACKFRAME(&_hx_pos_0b088b97dbd96993_25_update)
HXLINE(  26)		this->super::update(d);
HXLINE(  28)		this->ticker++;
HXLINE(  29)		 ::Lightning _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  29)		_hx_tmp->ticker = hx::Mod(_hx_tmp->ticker,this->maxTick);
HXLINE(  30)		if ((this->ticker == (int)0)) {
HXLINE(  31)			this->generate();
            		}
            	}


void Lightning_obj::generate(){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run( ::flixel::math::FlxPoint p1, ::flixel::math::FlxPoint p2){
            			HX_GC_STACKFRAME(&_hx_pos_0b088b97dbd96993_40_generate)
HXLINE(  40)			if ((p1->x > p2->x)) {
HXLINE(  40)				return (int)1;
            			}
            			else {
HXLINE(  40)				return (int)-1;
            			}
HXDLIN(  40)			return (int)0;
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_0b088b97dbd96993_34_generate)
HXLINE(  36)		int _hx_tmp = this->get_width();
HXDLIN(  36)		this->makeGraphic(_hx_tmp,this->get_height(),(int)16777215,true,null());
HXLINE(  38)		int numPoints = (int)100;
HXLINE(  39)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  39)		{
HXLINE(  39)			int _g2 = (int)0;
HXDLIN(  39)			int _g1 = numPoints;
HXDLIN(  39)			while((_g2 < _g1)){
HXLINE(  39)				_g2 = (_g2 + (int)1);
HXDLIN(  39)				int i = (_g2 - (int)1);
HXDLIN(  39)				Float _hx_tmp1 = ::Math_obj::random();
HXDLIN(  39)				Float _hx_tmp2 = (_hx_tmp1 * this->get_width());
HXDLIN(  39)				Float _hx_tmp3 = ::Math_obj::random();
HXDLIN(  39)				_g->push( ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,_hx_tmp2,(_hx_tmp3 * this->get_height())));
            			}
            		}
HXDLIN(  39)		::Array< ::Dynamic> points = _g;
HXLINE(  40)		points->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE(  41)		Float _hx_tmp4 = ((Float)this->get_height() / (Float)(int)2);
HXDLIN(  41)		points->__get((int)0).StaticCast<  ::flixel::math::FlxPoint >()->set((int)0,_hx_tmp4);
HXLINE(  42)		 ::flixel::math::FlxPoint points1 = points->__get((points->length - (int)1)).StaticCast<  ::flixel::math::FlxPoint >();
HXDLIN(  42)		Float _hx_tmp5 = this->get_width();
HXDLIN(  42)		points1->set(_hx_tmp5,((Float)this->get_height() / (Float)(int)2));
HXLINE(  43)		{
HXLINE(  43)			int _g21 = (int)1;
HXDLIN(  43)			int _g11 = (points->length - (int)2);
HXDLIN(  43)			while((_g21 < _g11)){
HXLINE(  43)				_g21 = (_g21 + (int)1);
HXDLIN(  43)				int i1 = (_g21 - (int)1);
HXLINE(  44)				if ((::Math_obj::random() < ((Float)0.1))) {
HXLINE(  45)					 ::flixel::math::FlxPoint tmp = points->__get(i1).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE(  46)					points[i1] = points->__get((i1 + (int)1)).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE(  47)					points[(i1 + (int)1)] = tmp;
            				}
            			}
            		}
HXLINE(  51)		::flixel::util::FlxSpriteUtil_obj::drawPolygon(hx::ObjectPtr<OBJ_>(this),points,(int)16777215, ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("color",63,71,5c,4a),(int)-1)),null());
HXLINE(  53)		::Glow_obj::onlyGlow(hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Lightning_obj,generate,(void))


hx::ObjectPtr< Lightning_obj > Lightning_obj::__new(Float w,Float h,int c) {
	hx::ObjectPtr< Lightning_obj > __this = new Lightning_obj();
	__this->__construct(w,h,c);
	return __this;
}

hx::ObjectPtr< Lightning_obj > Lightning_obj::__alloc(hx::Ctx *_hx_ctx,Float w,Float h,int c) {
	Lightning_obj *__this = (Lightning_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Lightning_obj), true, "Lightning"));
	*(void **)__this = Lightning_obj::_hx_vtable;
	__this->__construct(w,h,c);
	return __this;
}

Lightning_obj::Lightning_obj()
{
}

hx::Val Lightning_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"lColor") ) { return hx::Val( lColor ); }
		if (HX_FIELD_EQ(inName,"ticker") ) { return hx::Val( ticker ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"maxTick") ) { return hx::Val( maxTick ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"generate") ) { return hx::Val( generate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Lightning_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"lColor") ) { lColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ticker") ) { ticker=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"maxTick") ) { maxTick=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Lightning_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("lColor","\x57","\xd9","\x14","\x0c"));
	outFields->push(HX_HCSTRING("ticker","\x0a","\x6d","\x3a","\x18"));
	outFields->push(HX_HCSTRING("maxTick","\x21","\x1c","\x2d","\xcd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Lightning_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Lightning_obj,lColor),HX_HCSTRING("lColor","\x57","\xd9","\x14","\x0c")},
	{hx::fsInt,(int)offsetof(Lightning_obj,ticker),HX_HCSTRING("ticker","\x0a","\x6d","\x3a","\x18")},
	{hx::fsInt,(int)offsetof(Lightning_obj,maxTick),HX_HCSTRING("maxTick","\x21","\x1c","\x2d","\xcd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Lightning_obj_sStaticStorageInfo = 0;
#endif

static ::String Lightning_obj_sMemberFields[] = {
	HX_HCSTRING("lColor","\x57","\xd9","\x14","\x0c"),
	HX_HCSTRING("ticker","\x0a","\x6d","\x3a","\x18"),
	HX_HCSTRING("maxTick","\x21","\x1c","\x2d","\xcd"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("generate","\x35","\x5f","\xa2","\xd9"),
	::String(null()) };

static void Lightning_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lightning_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Lightning_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lightning_obj::__mClass,"__mClass");
};

#endif

hx::Class Lightning_obj::__mClass;

void Lightning_obj::__register()
{
	hx::Object *dummy = new Lightning_obj;
	Lightning_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Lightning","\xea","\x18","\x1d","\x79");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Lightning_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Lightning_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Lightning_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Lightning_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Lightning_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Lightning_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
