// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util__FlxBitmapDataPool_FlxBitmapDataPoolNode
#include <flixel/util/_FlxBitmapDataPool/FlxBitmapDataPoolNode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0a3a17009128d090_159_new,"flixel.util._FlxBitmapDataPool.FlxBitmapDataPoolNode","new",0x6f761b8f,"flixel.util._FlxBitmapDataPool.FlxBitmapDataPoolNode.new","flixel/util/FlxBitmapDataPool.hx",159,0x992b0db1)
namespace flixel{
namespace util{
namespace _FlxBitmapDataPool{

void FlxBitmapDataPoolNode_obj::__construct( ::openfl::_legacy::display::BitmapData bmd, ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode prev, ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode next){
            	HX_STACKFRAME(&_hx_pos_0a3a17009128d090_159_new)
HXLINE( 160)		this->bmd = bmd;
HXLINE( 161)		this->prev = prev;
HXLINE( 162)		this->next = next;
            	}

Dynamic FlxBitmapDataPoolNode_obj::__CreateEmpty() { return new FlxBitmapDataPoolNode_obj; }

void *FlxBitmapDataPoolNode_obj::_hx_vtable = 0;

Dynamic FlxBitmapDataPoolNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxBitmapDataPoolNode_obj > _hx_result = new FlxBitmapDataPoolNode_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxBitmapDataPoolNode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x76e4773b;
}


hx::ObjectPtr< FlxBitmapDataPoolNode_obj > FlxBitmapDataPoolNode_obj::__new( ::openfl::_legacy::display::BitmapData bmd, ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode prev, ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode next) {
	hx::ObjectPtr< FlxBitmapDataPoolNode_obj > __this = new FlxBitmapDataPoolNode_obj();
	__this->__construct(bmd,prev,next);
	return __this;
}

hx::ObjectPtr< FlxBitmapDataPoolNode_obj > FlxBitmapDataPoolNode_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::_legacy::display::BitmapData bmd, ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode prev, ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode next) {
	FlxBitmapDataPoolNode_obj *__this = (FlxBitmapDataPoolNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxBitmapDataPoolNode_obj), true, "flixel.util._FlxBitmapDataPool.FlxBitmapDataPoolNode"));
	*(void **)__this = FlxBitmapDataPoolNode_obj::_hx_vtable;
	__this->__construct(bmd,prev,next);
	return __this;
}

FlxBitmapDataPoolNode_obj::FlxBitmapDataPoolNode_obj()
{
}

void FlxBitmapDataPoolNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBitmapDataPoolNode);
	HX_MARK_MEMBER_NAME(bmd,"bmd");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void FlxBitmapDataPoolNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bmd,"bmd");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(next,"next");
}

hx::Val FlxBitmapDataPoolNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmd") ) { return hx::Val( bmd ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"prev") ) { return hx::Val( prev ); }
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxBitmapDataPoolNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmd") ) { bmd=inValue.Cast<  ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast<  ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBitmapDataPoolNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"));
	outFields->push(HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxBitmapDataPoolNode_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxBitmapDataPoolNode_obj,bmd),HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00")},
	{hx::fsObject /*::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode*/ ,(int)offsetof(FlxBitmapDataPoolNode_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsObject /*::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode*/ ,(int)offsetof(FlxBitmapDataPoolNode_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxBitmapDataPoolNode_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxBitmapDataPoolNode_obj_sMemberFields[] = {
	HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"),
	HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void FlxBitmapDataPoolNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBitmapDataPoolNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxBitmapDataPoolNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBitmapDataPoolNode_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBitmapDataPoolNode_obj::__mClass;

void FlxBitmapDataPoolNode_obj::__register()
{
	hx::Object *dummy = new FlxBitmapDataPoolNode_obj;
	FlxBitmapDataPoolNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util._FlxBitmapDataPool.FlxBitmapDataPoolNode","\x1d","\xa8","\x27","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxBitmapDataPoolNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxBitmapDataPoolNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBitmapDataPoolNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxBitmapDataPoolNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBitmapDataPoolNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBitmapDataPoolNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxBitmapDataPool
