// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl__legacy_filters_GlowFilter
#include <openfl/_legacy/filters/GlowFilter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3461a72abc8a3bab_21_new,"openfl._legacy.filters.GlowFilter","new",0xd44b25ee,"openfl._legacy.filters.GlowFilter.new","openfl/_legacy/filters/GlowFilter.hx",21,0x8dd6505f)
HX_LOCAL_STACK_FRAME(_hx_pos_3461a72abc8a3bab_42_clone,"openfl._legacy.filters.GlowFilter","clone",0x8905686b,"openfl._legacy.filters.GlowFilter.clone","openfl/_legacy/filters/GlowFilter.hx",42,0x8dd6505f)
namespace openfl{
namespace _legacy{
namespace filters{

void GlowFilter_obj::__construct(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(((Float)1.0));
Float blurX = __o_blurX.Default(((Float)4.0));
Float blurY = __o_blurY.Default(((Float)4.0));
Float strength = __o_strength.Default(((Float)1.0));
int quality = __o_quality.Default(1);
bool inner = __o_inner.Default(false);
bool knockout = __o_knockout.Default(false);
            	HX_STACKFRAME(&_hx_pos_3461a72abc8a3bab_21_new)
HXLINE(  23)		super::__construct(HX_("DropShadowFilter",a7,ee,49,f7));
HXLINE(  25)		this->distance = (int)0;
HXLINE(  26)		this->angle = (int)0;
HXLINE(  27)		this->color = color;
HXLINE(  28)		this->alpha = alpha;
HXLINE(  29)		this->blurX = blurX;
HXLINE(  30)		this->blurY = blurY;
HXLINE(  31)		this->strength = strength;
HXLINE(  32)		this->quality = quality;
HXLINE(  33)		this->inner = inner;
HXLINE(  34)		this->knockout = knockout;
HXLINE(  35)		this->hideObject = false;
            	}

Dynamic GlowFilter_obj::__CreateEmpty() { return new GlowFilter_obj; }

void *GlowFilter_obj::_hx_vtable = 0;

Dynamic GlowFilter_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GlowFilter_obj > _hx_result = new GlowFilter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool GlowFilter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x16bcd6b0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x16bcd6b0;
	} else {
		return inClassId==(int)0x42644652;
	}
}

 ::openfl::_legacy::filters::BitmapFilter GlowFilter_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_3461a72abc8a3bab_42_clone)
HXDLIN(  42)		return  ::openfl::_legacy::filters::GlowFilter_obj::__alloc( HX_CTX ,this->color,this->alpha,this->blurX,this->blurY,this->strength,this->quality,this->inner,this->knockout);
            	}



GlowFilter_obj::GlowFilter_obj()
{
}

hx::Val GlowFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return hx::Val( alpha ); }
		if (HX_FIELD_EQ(inName,"blurX") ) { return hx::Val( blurX ); }
		if (HX_FIELD_EQ(inName,"blurY") ) { return hx::Val( blurY ); }
		if (HX_FIELD_EQ(inName,"color") ) { return hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"inner") ) { return hx::Val( inner ); }
		if (HX_FIELD_EQ(inName,"angle") ) { return hx::Val( angle ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return hx::Val( quality ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"knockout") ) { return hx::Val( knockout ); }
		if (HX_FIELD_EQ(inName,"strength") ) { return hx::Val( strength ); }
		if (HX_FIELD_EQ(inName,"distance") ) { return hx::Val( distance ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hideObject") ) { return hx::Val( hideObject ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GlowFilter_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blurX") ) { blurX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blurY") ) { blurY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { quality=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"knockout") ) { knockout=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"distance") ) { distance=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hideObject") ) { hideObject=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GlowFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("blurX","\xd1","\x0f","\x01","\xb5"));
	outFields->push(HX_HCSTRING("blurY","\xd2","\x0f","\x01","\xb5"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe"));
	outFields->push(HX_HCSTRING("knockout","\xfa","\xa9","\xa5","\x6f"));
	outFields->push(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"));
	outFields->push(HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"));
	outFields->push(HX_HCSTRING("hideObject","\x21","\x25","\xc5","\xac"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GlowFilter_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,blurX),HX_HCSTRING("blurX","\xd1","\x0f","\x01","\xb5")},
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,blurY),HX_HCSTRING("blurY","\xd2","\x0f","\x01","\xb5")},
	{hx::fsInt,(int)offsetof(GlowFilter_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsBool,(int)offsetof(GlowFilter_obj,inner),HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe")},
	{hx::fsBool,(int)offsetof(GlowFilter_obj,knockout),HX_HCSTRING("knockout","\xfa","\xa9","\xa5","\x6f")},
	{hx::fsInt,(int)offsetof(GlowFilter_obj,quality),HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44")},
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,strength),HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e")},
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,distance),HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b")},
	{hx::fsBool,(int)offsetof(GlowFilter_obj,hideObject),HX_HCSTRING("hideObject","\x21","\x25","\xc5","\xac")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GlowFilter_obj_sStaticStorageInfo = 0;
#endif

static ::String GlowFilter_obj_sMemberFields[] = {
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("blurX","\xd1","\x0f","\x01","\xb5"),
	HX_HCSTRING("blurY","\xd2","\x0f","\x01","\xb5"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe"),
	HX_HCSTRING("knockout","\xfa","\xa9","\xa5","\x6f"),
	HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"),
	HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("hideObject","\x21","\x25","\xc5","\xac"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void GlowFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlowFilter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GlowFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::__mClass,"__mClass");
};

#endif

hx::Class GlowFilter_obj::__mClass;

void GlowFilter_obj::__register()
{
	hx::Object *dummy = new GlowFilter_obj;
	GlowFilter_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.filters.GlowFilter","\xfc","\x56","\xb2","\x65");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GlowFilter_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GlowFilter_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GlowFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GlowFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlowFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlowFilter_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace filters