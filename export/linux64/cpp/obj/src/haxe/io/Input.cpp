// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_254a12b9e3136e41_51_readByte,"haxe.io.Input","readByte",0x4de8a3c2,"haxe.io.Input.readByte","/usr/share/haxe/std/haxe/io/Input.hx",51,0x1cc3d0af)
HX_LOCAL_STACK_FRAME(_hx_pos_254a12b9e3136e41_92_close,"haxe.io.Input","close",0xfc421af4,"haxe.io.Input.close","/usr/share/haxe/std/haxe/io/Input.hx",92,0x1cc3d0af)
HX_LOCAL_STACK_FRAME(_hx_pos_254a12b9e3136e41_177_readLine,"haxe.io.Input","readLine",0x54789cae,"haxe.io.Input.readLine","/usr/share/haxe/std/haxe/io/Input.hx",177,0x1cc3d0af)
namespace haxe{
namespace io{

void Input_obj::__construct() { }

Dynamic Input_obj::__CreateEmpty() { return new Input_obj; }

void *Input_obj::_hx_vtable = 0;

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Input_obj > _hx_result = new Input_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Input_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5c18cd32;
}

int Input_obj::readByte(){
            	HX_STACKFRAME(&_hx_pos_254a12b9e3136e41_51_readByte)
HXDLIN(  51)		HX_STACK_DO_THROW(HX_("Not implemented",15,1e,32,34));
HXDLIN(  51)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readByte,return )

void Input_obj::close(){
            	HX_STACKFRAME(&_hx_pos_254a12b9e3136e41_92_close)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,close,(void))

::String Input_obj::readLine(){
            	HX_GC_STACKFRAME(&_hx_pos_254a12b9e3136e41_177_readLine)
HXLINE( 178)		 ::haxe::io::BytesBuffer buf =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE( 179)		int last;
HXLINE( 180)		::String s;
HXLINE( 181)		try {
            			HX_STACK_CATCHABLE( ::haxe::io::Eof, 0);
HXLINE( 182)			while(true){
HXLINE( 182)				last = this->readByte();
HXDLIN( 182)				if (!((last != (int)10))) {
HXLINE( 182)					goto _hx_goto_2;
            				}
HXLINE( 183)				buf->b->push(last);
            			}
            			_hx_goto_2:;
HXLINE( 184)			s = buf->getBytes()->toString();
HXLINE( 185)			if (hx::IsEq( s.charCodeAt((s.length - (int)1)),(int)13 )) {
HXLINE( 185)				s = s.substr((int)0,(int)-1);
            			}
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::haxe::io::Eof >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::haxe::io::Eof e = _hx_e;
HXLINE( 187)				s = buf->getBytes()->toString();
HXLINE( 188)				if ((s.length == (int)0)) {
HXLINE( 189)					HX_STACK_DO_THROW(e);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 191)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readLine,return )


Input_obj::Input_obj()
{
}

hx::Val Input_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return hx::Val( readByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"readLine") ) { return hx::Val( readLine_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Input_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Input_obj_sStaticStorageInfo = 0;
#endif

static ::String Input_obj_sMemberFields[] = {
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("readLine","\x6a","\xf2","\xaa","\x6f"),
	::String(null()) };

static void Input_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Input_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#endif

hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Object *dummy = new Input_obj;
	Input_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Input","\xaa","\x0e","\xf5","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Input_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Input_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Input_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Input_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Input_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
