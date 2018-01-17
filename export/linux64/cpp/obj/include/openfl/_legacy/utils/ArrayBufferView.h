// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl__legacy_utils_ArrayBufferView
#define INCLUDED_openfl__legacy_utils_ArrayBufferView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ArrayBufferView)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)

namespace openfl{
namespace _legacy{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES ArrayBufferView_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ArrayBufferView_obj OBJ_;
		ArrayBufferView_obj();

	public:
		enum { _hx_ClassId = 0x600248a5 };

		void __construct( ::Dynamic lengthOrBuffer,hx::Null< int >  __o_byteOffset, ::Dynamic length);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.utils.ArrayBufferView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.utils.ArrayBufferView"); }
		static hx::ObjectPtr< ArrayBufferView_obj > __new( ::Dynamic lengthOrBuffer,hx::Null< int >  __o_byteOffset, ::Dynamic length);
		static hx::ObjectPtr< ArrayBufferView_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic lengthOrBuffer,hx::Null< int >  __o_byteOffset, ::Dynamic length);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArrayBufferView_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("ArrayBufferView","\x5e","\x6e","\x84","\xfd"); }

		static void __boot();
		static ::String invalidDataIndex;
		 ::openfl::_legacy::utils::ByteArray buffer;
		int byteOffset;
		int byteLength;
		::Array< unsigned char > bytes;
		 ::openfl::_legacy::utils::ByteArray getByteBuffer();
		::Dynamic getByteBuffer_dyn();

		Float getFloat32(int position);
		::Dynamic getFloat32_dyn();

		int getInt16(int position);
		::Dynamic getInt16_dyn();

		int getInt32(int position);
		::Dynamic getInt32_dyn();

		int getLength();
		::Dynamic getLength_dyn();

		 ::Dynamic getNativePointer();
		::Dynamic getNativePointer_dyn();

		int getStart();
		::Dynamic getStart_dyn();

		int getUInt8(int position);
		::Dynamic getUInt8_dyn();

		void setFloat32(int position,Float value);
		::Dynamic setFloat32_dyn();

		void setInt16(int position,int value);
		::Dynamic setInt16_dyn();

		void setInt32(int position,int value);
		::Dynamic setInt32_dyn();

		void setUInt8(int position,int value);
		::Dynamic setUInt8_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils

#endif /* INCLUDED_openfl__legacy_utils_ArrayBufferView */ 
