// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_HitEmitter
#include <HitEmitter.h>
#endif
#ifndef INCLUDED_HitParticle
#include <HitParticle.h>
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
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxEmitterMode
#include <flixel/effects/particles/FlxEmitterMode.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_IFlxParticle
#include <flixel/effects/particles/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxBounds
#include <flixel/util/helpers/FlxBounds.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxPointRangeBounds
#include <flixel/util/helpers/FlxPointRangeBounds.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d1779a1b3431c51e_139_new,"HitEmitter","new",0x2f2755ed,"HitEmitter.new","Paddle.hx",139,0x43ccfc74)

void HitEmitter_obj::__construct( ::flixel::FlxObject T,Float yDir){
            	HX_STACKFRAME(&_hx_pos_d1779a1b3431c51e_139_new)
HXLINE( 140)		super::__construct(T->x,T->y,(int)50);
HXLINE( 141)		this->target = T;
HXLINE( 142)		this->width = this->target->get_width();
HXLINE( 143)		this->particleClass = hx::ClassOf< ::HitParticle >();
HXLINE( 144)		this->makeParticles((int)2,(int)2,(int)-1,(int)50);
HXLINE( 145)		this->lifespan->set(((Float)0.2),((Float)0.5));
HXLINE( 146)		this->launchMode = ::flixel::effects::particles::FlxEmitterMode_obj::SQUARE_dyn();
HXLINE( 147)		 ::flixel::util::helpers::FlxPointRangeBounds _hx_tmp = this->velocity;
HXDLIN( 147)		_hx_tmp->set((int)-40,((int)0 * yDir),(int)40,((int)80 * yDir),null(),null(),null(),null());
HXLINE( 148)		this->scale->set((int)1,(int)3,null(),null(),null(),null(),null(),null());
            	}

Dynamic HitEmitter_obj::__CreateEmpty() { return new HitEmitter_obj; }

void *HitEmitter_obj::_hx_vtable = 0;

Dynamic HitEmitter_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HitEmitter_obj > _hx_result = new HitEmitter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool HitEmitter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1118db7b) {
		if (inClassId<=(int)0x00f130af) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x00f130af;
		} else {
			return inClassId==(int)0x1118db7b;
		}
	} else {
		return inClassId==(int)0x25a685e0 || inClassId==(int)0x3634c52c;
	}
}


hx::ObjectPtr< HitEmitter_obj > HitEmitter_obj::__new( ::flixel::FlxObject T,Float yDir) {
	hx::ObjectPtr< HitEmitter_obj > __this = new HitEmitter_obj();
	__this->__construct(T,yDir);
	return __this;
}

hx::ObjectPtr< HitEmitter_obj > HitEmitter_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::FlxObject T,Float yDir) {
	HitEmitter_obj *__this = (HitEmitter_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HitEmitter_obj), true, "HitEmitter"));
	*(void **)__this = HitEmitter_obj::_hx_vtable;
	__this->__construct(T,yDir);
	return __this;
}

HitEmitter_obj::HitEmitter_obj()
{
}

void HitEmitter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HitEmitter);
	HX_MARK_MEMBER_NAME(target,"target");
	 ::flixel::effects::particles::FlxTypedEmitter_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HitEmitter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	 ::flixel::effects::particles::FlxTypedEmitter_obj::__Visit(HX_VISIT_ARG);
}

hx::Val HitEmitter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return hx::Val( target ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val HitEmitter_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HitEmitter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo HitEmitter_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(HitEmitter_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *HitEmitter_obj_sStaticStorageInfo = 0;
#endif

static ::String HitEmitter_obj_sMemberFields[] = {
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	::String(null()) };

static void HitEmitter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HitEmitter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HitEmitter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HitEmitter_obj::__mClass,"__mClass");
};

#endif

hx::Class HitEmitter_obj::__mClass;

void HitEmitter_obj::__register()
{
	hx::Object *dummy = new HitEmitter_obj;
	HitEmitter_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("HitEmitter","\x7b","\xdb","\x18","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HitEmitter_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HitEmitter_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HitEmitter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HitEmitter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HitEmitter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HitEmitter_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

