// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Block
#include <Block.h>
#endif
#ifndef INCLUDED_Level
#include <Level.h>
#endif
#ifndef INCLUDED_Obstacle
#include <Obstacle.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_646686c1763ceffa_27_new,"Block","new",0xdb44209f,"Block.new","Block.hx",27,0xf33517b1)
HX_DEFINE_STACK_FRAME(_hx_pos_646686c1763ceffa_8_new,"Block","new",0xdb44209f,"Block.new","Block.hx",8,0xf33517b1)
HX_LOCAL_STACK_FRAME(_hx_pos_646686c1763ceffa_36_update,"Block","update",0x2ccba72a,"Block.update","Block.hx",36,0xf33517b1)
HX_LOCAL_STACK_FRAME(_hx_pos_646686c1763ceffa_43_update,"Block","update",0x2ccba72a,"Block.update","Block.hx",43,0xf33517b1)
HX_LOCAL_STACK_FRAME(_hx_pos_646686c1763ceffa_16_boot,"Block","boot",0xf8716b13,"Block.boot","Block.hx",16,0xf33517b1)

void Block_obj::__construct(Float X,Float Y,int C,int I,int J,int P,Float D){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Block,_gthis) HXARGC(1)
            		void _hx_run(int dir){
            			HX_STACKFRAME(&_hx_pos_646686c1763ceffa_27_new)
HXLINE(  28)			_gthis->die();
HXLINE(  29)			hx::TCast<  ::PlayState >::cast(::flixel::FlxG_obj::game->_state)->level->remBlock(_gthis->i,_gthis->j,_gthis->p);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_646686c1763ceffa_8_new)
HXLINE(  19)		this->maxt = (int)400;
HXLINE(  18)		this->timeOffset = (int)0;
HXLINE(  22)		 ::Block _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  23)		super::__construct(X,Y,::Block_obj::Width,::Block_obj::Height,C,true,D);
HXLINE(  24)		this->i = I;
HXDLIN(  24)		this->j = J;
HXDLIN(  24)		this->p = P;
HXLINE(  25)		this->c = C;
HXLINE(  27)		this->onHit =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE(  32)		int _hx_tmp = (this->i * (int)10);
HXDLIN(  32)		this->timeOffset = (_hx_tmp + (this->j * (int)5));
            	}

Dynamic Block_obj::__CreateEmpty() { return new Block_obj; }

void *Block_obj::_hx_vtable = 0;

Dynamic Block_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Block_obj > _hx_result = new Block_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool Block_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e105115) {
		if (inClassId<=(int)0x25a685e0) {
			if (inClassId<=(int)0x0b6ffd77) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
			} else {
				return inClassId==(int)0x25a685e0;
			}
		} else {
			return inClassId==(int)0x2e105115;
		}
	} else {
		return inClassId==(int)0x4829e52d || inClassId==(int)0x6451af37;
	}
}

void Block_obj::update(Float d){
            	HX_STACKFRAME(&_hx_pos_646686c1763ceffa_36_update)
HXDLIN(  36)		 ::Block _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  37)		this->super::update(d);
HXLINE(  39)		int n = hx::Mod((::Block_obj::GlobalTimer - this->timeOffset),this->maxt);
HXLINE(  40)		if ((n == (int)0)) {
            			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::Block,_gthis,int,newcol) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween t){
            				HX_STACKFRAME(&_hx_pos_646686c1763ceffa_43_update)
HXLINE(  43)				::flixel::tweens::FlxTween_obj::color(_gthis,(int)1,newcol,_gthis->c,null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  41)			int newcol = (((int)((int)((int)((int)this->c & (int)(int)8355711) << (int)(int)1) & (int)(int)8355711) << (int)(int)1) + (int)-16777216);
HXLINE(  42)			::flixel::tweens::FlxTween_obj::color(hx::ObjectPtr<OBJ_>(this),(int)1,this->c,newcol, ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis,newcol)))));
            		}
            	}


Float Block_obj::Width;

Float Block_obj::Height;

int Block_obj::GlobalTimer;


hx::ObjectPtr< Block_obj > Block_obj::__new(Float X,Float Y,int C,int I,int J,int P,Float D) {
	hx::ObjectPtr< Block_obj > __this = new Block_obj();
	__this->__construct(X,Y,C,I,J,P,D);
	return __this;
}

hx::ObjectPtr< Block_obj > Block_obj::__alloc(hx::Ctx *_hx_ctx,Float X,Float Y,int C,int I,int J,int P,Float D) {
	Block_obj *__this = (Block_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Block_obj), true, "Block"));
	*(void **)__this = Block_obj::_hx_vtable;
	__this->__construct(X,Y,C,I,J,P,D);
	return __this;
}

Block_obj::Block_obj()
{
}

hx::Val Block_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return hx::Val( i ); }
		if (HX_FIELD_EQ(inName,"j") ) { return hx::Val( j ); }
		if (HX_FIELD_EQ(inName,"p") ) { return hx::Val( p ); }
		if (HX_FIELD_EQ(inName,"c") ) { return hx::Val( c ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"maxt") ) { return hx::Val( maxt ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"timeOffset") ) { return hx::Val( timeOffset ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Block_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Width") ) { outValue = ( Width ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Height") ) { outValue = ( Height ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"GlobalTimer") ) { outValue = ( GlobalTimer ); return true; }
	}
	return false;
}

hx::Val Block_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"j") ) { j=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"maxt") ) { maxt=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"timeOffset") ) { timeOffset=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Block_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Width") ) { Width=ioValue.Cast< Float >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Height") ) { Height=ioValue.Cast< Float >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"GlobalTimer") ) { GlobalTimer=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Block_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("j","\x6a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("p","\x70","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("timeOffset","\x80","\xdf","\x08","\xfe"));
	outFields->push(HX_HCSTRING("maxt","\x50","\x45","\x56","\x48"));
	outFields->push(HX_HCSTRING("c","\x63","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Block_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Block_obj,i),HX_HCSTRING("i","\x69","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Block_obj,j),HX_HCSTRING("j","\x6a","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Block_obj,p),HX_HCSTRING("p","\x70","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Block_obj,timeOffset),HX_HCSTRING("timeOffset","\x80","\xdf","\x08","\xfe")},
	{hx::fsInt,(int)offsetof(Block_obj,maxt),HX_HCSTRING("maxt","\x50","\x45","\x56","\x48")},
	{hx::fsInt,(int)offsetof(Block_obj,c),HX_HCSTRING("c","\x63","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Block_obj_sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Block_obj::Width,HX_HCSTRING("Width","\xe6","\x25","\x90","\x5d")},
	{hx::fsFloat,(void *) &Block_obj::Height,HX_HCSTRING("Height","\x07","\x7c","\xe0","\x36")},
	{hx::fsInt,(void *) &Block_obj::GlobalTimer,HX_HCSTRING("GlobalTimer","\x42","\xaf","\xa6","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Block_obj_sMemberFields[] = {
	HX_HCSTRING("i","\x69","\x00","\x00","\x00"),
	HX_HCSTRING("j","\x6a","\x00","\x00","\x00"),
	HX_HCSTRING("p","\x70","\x00","\x00","\x00"),
	HX_HCSTRING("timeOffset","\x80","\xdf","\x08","\xfe"),
	HX_HCSTRING("maxt","\x50","\x45","\x56","\x48"),
	HX_HCSTRING("c","\x63","\x00","\x00","\x00"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void Block_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Block_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Block_obj::Width,"Width");
	HX_MARK_MEMBER_NAME(Block_obj::Height,"Height");
	HX_MARK_MEMBER_NAME(Block_obj::GlobalTimer,"GlobalTimer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Block_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Block_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Block_obj::Width,"Width");
	HX_VISIT_MEMBER_NAME(Block_obj::Height,"Height");
	HX_VISIT_MEMBER_NAME(Block_obj::GlobalTimer,"GlobalTimer");
};

#endif

hx::Class Block_obj::__mClass;

static ::String Block_obj_sStaticFields[] = {
	HX_HCSTRING("Width","\xe6","\x25","\x90","\x5d"),
	HX_HCSTRING("Height","\x07","\x7c","\xe0","\x36"),
	HX_HCSTRING("GlobalTimer","\x42","\xaf","\xa6","\xcc"),
	::String(null())
};

void Block_obj::__register()
{
	hx::Object *dummy = new Block_obj;
	Block_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Block","\x2d","\xe5","\x29","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Block_obj::__GetStatic;
	__mClass->mSetStaticField = &Block_obj::__SetStatic;
	__mClass->mMarkFunc = Block_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Block_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Block_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Block_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Block_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Block_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Block_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Block_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_646686c1763ceffa_16_boot)
HXDLIN(  16)		GlobalTimer = (int)0;
            	}
}

