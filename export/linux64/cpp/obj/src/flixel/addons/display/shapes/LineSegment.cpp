// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_display_shapes_LineSegment
#include <flixel/addons/display/shapes/LineSegment.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ce9f836ce7f1eccb_299_new,"flixel.addons.display.shapes.LineSegment","new",0xb47f0e6a,"flixel.addons.display.shapes.LineSegment.new","flixel/addons/display/shapes/FlxShapeLightning.hx",299,0xdb65696a)
HX_LOCAL_STACK_FRAME(_hx_pos_ce9f836ce7f1eccb_308_copy,"flixel.addons.display.shapes.LineSegment","copy",0x336fc66b,"flixel.addons.display.shapes.LineSegment.copy","flixel/addons/display/shapes/FlxShapeLightning.hx",308,0xdb65696a)
namespace flixel{
namespace addons{
namespace display{
namespace shapes{

void LineSegment_obj::__construct(Float Ax,Float Ay,Float Bx,Float By){
            	HX_STACKFRAME(&_hx_pos_ce9f836ce7f1eccb_299_new)
HXLINE( 300)		this->ax = Ax;
HXLINE( 301)		this->ay = Ay;
HXLINE( 302)		this->bx = Bx;
HXLINE( 303)		this->by = By;
            	}

Dynamic LineSegment_obj::__CreateEmpty() { return new LineSegment_obj; }

void *LineSegment_obj::_hx_vtable = 0;

Dynamic LineSegment_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LineSegment_obj > _hx_result = new LineSegment_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool LineSegment_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x47fa8a9a;
}

 ::flixel::addons::display::shapes::LineSegment LineSegment_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_ce9f836ce7f1eccb_308_copy)
HXDLIN( 308)		return  ::flixel::addons::display::shapes::LineSegment_obj::__alloc( HX_CTX ,this->ax,this->ay,this->bx,this->by);
            	}


HX_DEFINE_DYNAMIC_FUNC0(LineSegment_obj,copy,return )


LineSegment_obj::LineSegment_obj()
{
}

hx::Val LineSegment_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ax") ) { return hx::Val( ax ); }
		if (HX_FIELD_EQ(inName,"ay") ) { return hx::Val( ay ); }
		if (HX_FIELD_EQ(inName,"bx") ) { return hx::Val( bx ); }
		if (HX_FIELD_EQ(inName,"by") ) { return hx::Val( by ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return hx::Val( copy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val LineSegment_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ax") ) { ax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ay") ) { ay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bx") ) { bx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"by") ) { by=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LineSegment_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ax","\xf7","\x54","\x00","\x00"));
	outFields->push(HX_HCSTRING("ay","\xf8","\x54","\x00","\x00"));
	outFields->push(HX_HCSTRING("bx","\xd6","\x55","\x00","\x00"));
	outFields->push(HX_HCSTRING("by","\xd7","\x55","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo LineSegment_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(LineSegment_obj,ax),HX_HCSTRING("ax","\xf7","\x54","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(LineSegment_obj,ay),HX_HCSTRING("ay","\xf8","\x54","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(LineSegment_obj,bx),HX_HCSTRING("bx","\xd6","\x55","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(LineSegment_obj,by),HX_HCSTRING("by","\xd7","\x55","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *LineSegment_obj_sStaticStorageInfo = 0;
#endif

static ::String LineSegment_obj_sMemberFields[] = {
	HX_HCSTRING("ax","\xf7","\x54","\x00","\x00"),
	HX_HCSTRING("ay","\xf8","\x54","\x00","\x00"),
	HX_HCSTRING("bx","\xd6","\x55","\x00","\x00"),
	HX_HCSTRING("by","\xd7","\x55","\x00","\x00"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	::String(null()) };

static void LineSegment_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineSegment_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LineSegment_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineSegment_obj::__mClass,"__mClass");
};

#endif

hx::Class LineSegment_obj::__mClass;

void LineSegment_obj::__register()
{
	hx::Object *dummy = new LineSegment_obj;
	LineSegment_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.display.shapes.LineSegment","\x78","\x51","\x31","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LineSegment_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(LineSegment_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LineSegment_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LineSegment_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LineSegment_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LineSegment_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace display
} // end namespace shapes
