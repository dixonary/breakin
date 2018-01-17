// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a9542994cee360f6_13_new,"openfl.events.TextEvent","new",0x29e58508,"openfl.events.TextEvent.new","openfl/events/TextEvent.hx",13,0x23b91588)
HX_LOCAL_STACK_FRAME(_hx_pos_a9542994cee360f6_22_clone,"openfl.events.TextEvent","clone",0x41494205,"openfl.events.TextEvent.clone","openfl/events/TextEvent.hx",22,0x23b91588)
HX_LOCAL_STACK_FRAME(_hx_pos_a9542994cee360f6_37_toString,"openfl.events.TextEvent","toString",0x2a253b04,"openfl.events.TextEvent.toString","openfl/events/TextEvent.hx",37,0x23b91588)
static const ::String _hx_array_data_52f4a116_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("text",ad,cc,f9,4c),
};
HX_LOCAL_STACK_FRAME(_hx_pos_a9542994cee360f6_7_boot,"openfl.events.TextEvent","boot",0x7707e28a,"openfl.events.TextEvent.boot","openfl/events/TextEvent.hx",7,0x23b91588)
HX_LOCAL_STACK_FRAME(_hx_pos_a9542994cee360f6_8_boot,"openfl.events.TextEvent","boot",0x7707e28a,"openfl.events.TextEvent.boot","openfl/events/TextEvent.hx",8,0x23b91588)
namespace openfl{
namespace events{

void TextEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text){
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
::String text = __o_text.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_a9542994cee360f6_13_new)
HXLINE(  15)		super::__construct(type,bubbles,cancelable);
HXLINE(  17)		this->text = text;
            	}

Dynamic TextEvent_obj::__CreateEmpty() { return new TextEvent_obj; }

void *TextEvent_obj::_hx_vtable = 0;

Dynamic TextEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextEvent_obj > _hx_result = new TextEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool TextEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0dd3a6b1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0dd3a6b1;
	} else {
		return inClassId==(int)0x70c909a0;
	}
}

 ::openfl::_legacy::events::Event TextEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_a9542994cee360f6_22_clone)
HXLINE(  24)		::String event = this->get_type();
HXDLIN(  24)		bool event1 = this->get_bubbles();
HXDLIN(  24)		bool event2 = this->get_cancelable();
HXDLIN(  24)		 ::openfl::events::TextEvent event3 =  ::openfl::events::TextEvent_obj::__alloc( HX_CTX ,event,event1,event2,this->text);
HXLINE(  25)		event3->set_target(this->get_target());
HXLINE(  26)		event3->set_currentTarget(this->get_currentTarget());
HXLINE(  30)		return event3;
            	}


::String TextEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_a9542994cee360f6_37_toString)
HXDLIN(  37)		return this->_hx___formatToString(HX_("TextEvent",0d,38,85,b0),::Array_obj< ::String >::fromData( _hx_array_data_52f4a116_3,4));
            	}


::String TextEvent_obj::LINK;

::String TextEvent_obj::TEXT_INPUT;


hx::ObjectPtr< TextEvent_obj > TextEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text) {
	hx::ObjectPtr< TextEvent_obj > __this = new TextEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_text);
	return __this;
}

hx::ObjectPtr< TextEvent_obj > TextEvent_obj::__alloc(hx::Ctx *_hx_ctx,::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text) {
	TextEvent_obj *__this = (TextEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextEvent_obj), true, "openfl.events.TextEvent"));
	*(void **)__this = TextEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_text);
	return __this;
}

TextEvent_obj::TextEvent_obj()
{
}

void TextEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEvent);
	HX_MARK_MEMBER_NAME(text,"text");
	 ::openfl::_legacy::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	 ::openfl::_legacy::events::Event_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TextEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return hx::Val( text ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TextEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextEvent_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TextEvent_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo TextEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TextEvent_obj::LINK,HX_HCSTRING("LINK","\xfa","\xdf","\x73","\x32")},
	{hx::fsString,(void *) &TextEvent_obj::TEXT_INPUT,HX_HCSTRING("TEXT_INPUT","\x98","\x17","\xd6","\x79")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String TextEvent_obj_sMemberFields[] = {
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void TextEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextEvent_obj::LINK,"LINK");
	HX_MARK_MEMBER_NAME(TextEvent_obj::TEXT_INPUT,"TEXT_INPUT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextEvent_obj::LINK,"LINK");
	HX_VISIT_MEMBER_NAME(TextEvent_obj::TEXT_INPUT,"TEXT_INPUT");
};

#endif

hx::Class TextEvent_obj::__mClass;

static ::String TextEvent_obj_sStaticFields[] = {
	HX_HCSTRING("LINK","\xfa","\xdf","\x73","\x32"),
	HX_HCSTRING("TEXT_INPUT","\x98","\x17","\xd6","\x79"),
	::String(null())
};

void TextEvent_obj::__register()
{
	hx::Object *dummy = new TextEvent_obj;
	TextEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.TextEvent","\x16","\xa1","\xf4","\x52");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(TextEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a9542994cee360f6_7_boot)
HXDLIN(   7)		LINK = HX_("link",fa,17,b3,47);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9542994cee360f6_8_boot)
HXDLIN(   8)		TEXT_INPUT = HX_("textInput",1d,54,0b,57);
            	}
}

} // end namespace openfl
} // end namespace events
