// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_sys_io__Process_Stdout
#include <sys/io/_Process/Stdout.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_36fe6243f75e6674_63_new,"sys.io._Process.Stdout","new",0xc765a8f4,"sys.io._Process.Stdout.new","/usr/share/haxe/std/cpp/_std/sys/io/Process.hx",63,0x2d961692)
HX_LOCAL_STACK_FRAME(_hx_pos_36fe6243f75e6674_69_readByte,"sys.io._Process.Stdout","readByte",0xa72b886a,"sys.io._Process.Stdout.readByte","/usr/share/haxe/std/cpp/_std/sys/io/Process.hx",69,0x2d961692)
HX_LOCAL_STACK_FRAME(_hx_pos_36fe6243f75e6674_75_readBytes,"sys.io._Process.Stdout","readBytes",0x9eebd4c9,"sys.io._Process.Stdout.readBytes","/usr/share/haxe/std/cpp/_std/sys/io/Process.hx",75,0x2d961692)
namespace sys{
namespace io{
namespace _Process{

void Stdout_obj::__construct( ::Dynamic p,bool out){
            	HX_STACKFRAME(&_hx_pos_36fe6243f75e6674_63_new)
HXLINE(  64)		this->p = p;
HXLINE(  65)		this->out = out;
HXLINE(  66)		this->buf = ::haxe::io::Bytes_obj::alloc((int)1);
            	}

Dynamic Stdout_obj::__CreateEmpty() { return new Stdout_obj; }

void *Stdout_obj::_hx_vtable = 0;

Dynamic Stdout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Stdout_obj > _hx_result = new Stdout_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Stdout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3de41c2e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3de41c2e;
	} else {
		return inClassId==(int)0x5c18cd32;
	}
}

int Stdout_obj::readByte(){
            	HX_STACKFRAME(&_hx_pos_36fe6243f75e6674_69_readByte)
HXLINE(  70)		if ((this->readBytes(this->buf,(int)0,(int)1) == (int)0)) {
HXLINE(  71)			HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked_dyn());
            		}
HXLINE(  72)		return this->buf->b->__get((int)0);
            	}


int Stdout_obj::readBytes( ::haxe::io::Bytes str,int pos,int len){
            	HX_GC_STACKFRAME(&_hx_pos_36fe6243f75e6674_75_readBytes)
HXLINE(  76)		int result;
HXLINE(  77)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  78)			if (this->out) {
HXLINE(  78)				result = _hx_std_process_stdout_read(this->p,str->b,pos,len);
            			}
            			else {
HXLINE(  79)				result = _hx_std_process_stderr_read(this->p,str->b,pos,len);
            			}
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE(  81)				HX_STACK_DO_THROW( ::haxe::io::Eof_obj::__alloc( HX_CTX ));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  83)		if ((result == (int)0)) {
HXLINE(  83)			HX_STACK_DO_THROW( ::haxe::io::Eof_obj::__alloc( HX_CTX ));
            		}
HXLINE(  84)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Stdout_obj,readBytes,return )


hx::ObjectPtr< Stdout_obj > Stdout_obj::__new( ::Dynamic p,bool out) {
	hx::ObjectPtr< Stdout_obj > __this = new Stdout_obj();
	__this->__construct(p,out);
	return __this;
}

hx::ObjectPtr< Stdout_obj > Stdout_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic p,bool out) {
	Stdout_obj *__this = (Stdout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Stdout_obj), true, "sys.io._Process.Stdout"));
	*(void **)__this = Stdout_obj::_hx_vtable;
	__this->__construct(p,out);
	return __this;
}

Stdout_obj::Stdout_obj()
{
}

void Stdout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stdout);
	HX_MARK_MEMBER_NAME(p,"p");
	HX_MARK_MEMBER_NAME(out,"out");
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_END_CLASS();
}

void Stdout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p,"p");
	HX_VISIT_MEMBER_NAME(out,"out");
	HX_VISIT_MEMBER_NAME(buf,"buf");
}

hx::Val Stdout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { return hx::Val( p ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"out") ) { return hx::Val( out ); }
		if (HX_FIELD_EQ(inName,"buf") ) { return hx::Val( buf ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return hx::Val( readByte_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return hx::Val( readBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Stdout_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"out") ) { out=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stdout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("p","\x70","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("out","\x8e","\xa0","\x54","\x00"));
	outFields->push(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Stdout_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stdout_obj,p),HX_HCSTRING("p","\x70","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Stdout_obj,out),HX_HCSTRING("out","\x8e","\xa0","\x54","\x00")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(Stdout_obj,buf),HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Stdout_obj_sStaticStorageInfo = 0;
#endif

static ::String Stdout_obj_sMemberFields[] = {
	HX_HCSTRING("p","\x70","\x00","\x00","\x00"),
	HX_HCSTRING("out","\x8e","\xa0","\x54","\x00"),
	HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	::String(null()) };

static void Stdout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stdout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Stdout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stdout_obj::__mClass,"__mClass");
};

#endif

hx::Class Stdout_obj::__mClass;

void Stdout_obj::__register()
{
	hx::Object *dummy = new Stdout_obj;
	Stdout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.io._Process.Stdout","\x02","\x5f","\x41","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Stdout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Stdout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stdout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Stdout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stdout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stdout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace io
} // end namespace _Process
