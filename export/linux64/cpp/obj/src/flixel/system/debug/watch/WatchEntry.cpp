// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicCloseButton
#include <flixel/system/debug/GraphicCloseButton.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_EditableTextField
#include <flixel/system/debug/watch/EditableTextField.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntry
#include <flixel/system/debug/watch/WatchEntry.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
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
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFieldAutoSize
#include <openfl/_legacy/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_49_new,"flixel.system.debug.watch.WatchEntry","new",0x96ec41fc,"flixel.system.debug.watch.WatchEntry.new","flixel/system/debug/watch/WatchEntry.hx",49,0x2bd112d2)
HX_DEFINE_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_35_new,"flixel.system.debug.watch.WatchEntry","new",0x96ec41fc,"flixel.system.debug.watch.WatchEntry.new","flixel/system/debug/watch/WatchEntry.hx",35,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_56_getTextColor,"flixel.system.debug.watch.WatchEntry","getTextColor",0xd55318e4,"flixel.system.debug.watch.WatchEntry.getTextColor","flixel/system/debug/watch/WatchEntry.hx",56,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_65_initTextField,"flixel.system.debug.watch.WatchEntry","initTextField",0x8df9f439,"flixel.system.debug.watch.WatchEntry.initTextField","flixel/system/debug/watch/WatchEntry.hx",65,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_75_updateSize,"flixel.system.debug.watch.WatchEntry","updateSize",0x108dc54e,"flixel.system.debug.watch.WatchEntry.updateSize","flixel/system/debug/watch/WatchEntry.hx",75,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_85_updateName,"flixel.system.debug.watch.WatchEntry","updateName",0x0d3996d8,"flixel.system.debug.watch.WatchEntry.updateName","flixel/system/debug/watch/WatchEntry.hx",85,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_103_setNameText,"flixel.system.debug.watch.WatchEntry","setNameText",0x82ef23f6,"flixel.system.debug.watch.WatchEntry.setNameText","flixel/system/debug/watch/WatchEntry.hx",103,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_111_getValue,"flixel.system.debug.watch.WatchEntry","getValue",0xc769c7df,"flixel.system.debug.watch.WatchEntry.getValue","flixel/system/debug/watch/WatchEntry.hx",111,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_127_getFormattedValue,"flixel.system.debug.watch.WatchEntry","getFormattedValue",0xb861eca7,"flixel.system.debug.watch.WatchEntry.getFormattedValue","flixel/system/debug/watch/WatchEntry.hx",127,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_136_submitValue,"flixel.system.debug.watch.WatchEntry","submitValue",0x1e7eadd5,"flixel.system.debug.watch.WatchEntry.submitValue","flixel/system/debug/watch/WatchEntry.hx",136,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_146_updateValue,"flixel.system.debug.watch.WatchEntry","updateValue",0x205e5644,"flixel.system.debug.watch.WatchEntry.updateValue","flixel/system/debug/watch/WatchEntry.hx",146,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_152_getNameWidth,"flixel.system.debug.watch.WatchEntry","getNameWidth",0xb6209b29,"flixel.system.debug.watch.WatchEntry.getNameWidth","flixel/system/debug/watch/WatchEntry.hx",152,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_157_getMinWidth,"flixel.system.debug.watch.WatchEntry","getMinWidth",0xf09b5366,"flixel.system.debug.watch.WatchEntry.getMinWidth","flixel/system/debug/watch/WatchEntry.hx",157,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_161_destroy,"flixel.system.debug.watch.WatchEntry","destroy",0x012d9c96,"flixel.system.debug.watch.WatchEntry.destroy","flixel/system/debug/watch/WatchEntry.hx",161,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_22_boot,"flixel.system.debug.watch.WatchEntry","boot",0x6fe67b16,"flixel.system.debug.watch.WatchEntry.boot","flixel/system/debug/watch/WatchEntry.hx",22,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_23_boot,"flixel.system.debug.watch.WatchEntry","boot",0x6fe67b16,"flixel.system.debug.watch.WatchEntry.boot","flixel/system/debug/watch/WatchEntry.hx",23,0x2bd112d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2a234d999e4b3fc8_24_boot,"flixel.system.debug.watch.WatchEntry","boot",0x6fe67b16,"flixel.system.debug.watch.WatchEntry.boot","flixel/system/debug/watch/WatchEntry.hx",24,0x2bd112d2)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{

void WatchEntry_obj::__construct(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data, ::Dynamic removeEntry){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::Dynamic,f, ::flixel::_hx_system::debug::watch::WatchEntry,a1) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_49_new)
HXLINE(  49)			f(a1);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_35_new)
HXLINE(  36)		super::__construct();
HXLINE(  38)		this->displayName = displayName;
HXLINE(  39)		this->data = data;
HXLINE(  41)		::String _hx_tmp = ::flixel::_hx_system::FlxAssets_obj::FONT_DEBUGGER;
HXDLIN(  41)		this->defaultFormat =  ::openfl::_legacy::text::TextFormat_obj::__alloc( HX_CTX ,_hx_tmp,(int)12,this->getTextColor(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  42)		this->nameText = ( ( ::openfl::_legacy::text::TextField)(this->initTextField(::flixel::_hx_system::debug::DebuggerUtil_obj::createTextField(null(),null(),null(),null()))) );
HXLINE(  43)		 ::ValueType expectedType = ::Type_obj::_hx_typeof(this->getValue());
HXLINE(  45)		bool _hx_tmp1;
HXDLIN(  45)		if ((_hx_getEnumValueIndex(data) == (int)0)) {
HXLINE(  45)			_hx_tmp1 = true;
            		}
            		else {
HXLINE(  45)			_hx_tmp1 = false;
            		}
HXLINE(  44)		this->valueText = ( ( ::flixel::_hx_system::debug::watch::EditableTextField)(this->initTextField(::flixel::_hx_system::debug::DebuggerUtil_obj::initTextField( ::flixel::_hx_system::debug::watch::EditableTextField_obj::__alloc( HX_CTX ,_hx_tmp1,this->defaultFormat,this->submitValue_dyn(),expectedType),null(),null(),null(),null()))) );
HXLINE(  47)		this->updateName();
HXLINE(  49)		 ::Dynamic f = removeEntry;
HXDLIN(  49)		 ::flixel::_hx_system::debug::watch::WatchEntry a1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  49)		 ::Dynamic _hx_tmp2 =  ::Dynamic(new _hx_Closure_0(f,a1));
HXDLIN(  49)		this->addChild((this->removeButton =  ::flixel::_hx_system::ui::FlxSystemButton_obj::__alloc( HX_CTX , ::flixel::_hx_system::debug::GraphicCloseButton_obj::__alloc( HX_CTX ,(int)0,(int)0,null(),null()),_hx_tmp2,null())));
HXLINE(  50)		 ::flixel::_hx_system::ui::FlxSystemButton _hx_tmp3 = this->removeButton;
HXDLIN(  50)		_hx_tmp3->set_y(((Float)((int)20 - this->removeButton->get_height()) / (Float)(int)2));
HXLINE(  51)		this->removeButton->set_alpha(((Float)0.3));
            	}

Dynamic WatchEntry_obj::__CreateEmpty() { return new WatchEntry_obj; }

void *WatchEntry_obj::_hx_vtable = 0;

Dynamic WatchEntry_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< WatchEntry_obj > _hx_result = new WatchEntry_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool WatchEntry_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25b00754) {
		if (inClassId<=(int)0x1e88cdcf) {
			if (inClassId<=(int)0x0bcf7aaa) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0bcf7aaa;
			} else {
				return inClassId==(int)0x1e88cdcf;
			}
		} else {
			return inClassId==(int)0x25b00754;
		}
	} else {
		if (inClassId<=(int)0x3d2d7617) {
			return inClassId==(int)0x306ae42a || inClassId==(int)0x3d2d7617;
		} else {
			return inClassId==(int)0x5fcdb6d3;
		}
	}
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_system_debug_watch_WatchEntry__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::_hx_system::debug::watch::WatchEntry_obj::destroy,
};

void *WatchEntry_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_system_debug_watch_WatchEntry__hx_flixel_util_IFlxDestroyable;
	}
	return super::_hx_getInterface(inHash);
}

int WatchEntry_obj::getTextColor(){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_56_getTextColor)
HXDLIN(  56)		 ::flixel::_hx_system::debug::watch::WatchEntryData _g = this->data;
HXDLIN(  56)		switch((int)(_hx_getEnumValueIndex(_g))){
            			case (int)0: {
HXLINE(  58)				return (int)16777215;
            			}
            			break;
            			case (int)1: {
HXLINE(  59)				return (int)10875373;
            			}
            			break;
            			case (int)2: {
HXLINE(  60)				return (int)12910211;
            			}
            			break;
            		}
HXLINE(  56)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,getTextColor,return )

 ::Dynamic WatchEntry_obj::initTextField( ::Dynamic textField){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_65_initTextField)
HXLINE(  66)		( ( ::openfl::_legacy::text::TextField)(textField) )->set_selectable(true);
HXLINE(  67)		( ( ::openfl::_legacy::text::TextField)(textField) )->set_defaultTextFormat(this->defaultFormat);
HXLINE(  68)		( ( ::openfl::_legacy::text::TextField)(textField) )->set_autoSize(::openfl::_legacy::text::TextFieldAutoSize_obj::NONE_dyn());
HXLINE(  69)		( ( ::openfl::_legacy::display::DisplayObject)(textField) )->set_height((int)20);
HXLINE(  70)		this->addChild(( ( ::openfl::_legacy::display::DisplayObject)(textField) ));
HXLINE(  71)		return textField;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,initTextField,return )

void WatchEntry_obj::updateSize(Float nameWidth,Float windowWidth){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_75_updateSize)
HXLINE(  76)		Float textWidth = ((windowWidth - this->removeButton->get_width()) - (int)4);
HXLINE(  78)		this->nameText->set_width(nameWidth);
HXLINE(  79)		 ::flixel::_hx_system::debug::watch::EditableTextField _hx_tmp = this->valueText;
HXDLIN(  79)		_hx_tmp->set_x((nameWidth + (int)4));
HXLINE(  80)		 ::flixel::_hx_system::debug::watch::EditableTextField _hx_tmp1 = this->valueText;
HXDLIN(  80)		_hx_tmp1->set_width(((textWidth - nameWidth) - (int)4));
HXLINE(  81)		this->removeButton->set_x(textWidth);
            	}


HX_DEFINE_DYNAMIC_FUNC2(WatchEntry_obj,updateSize,(void))

void WatchEntry_obj::updateName(){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_85_updateName)
HXLINE(  86)		if (hx::IsNotNull( this->displayName )) {
HXLINE(  88)			this->setNameText(this->displayName);
HXLINE(  89)			return;
            		}
HXLINE(  92)		{
HXLINE(  92)			 ::flixel::_hx_system::debug::watch::WatchEntryData _g = this->data;
HXDLIN(  92)			switch((int)(_hx_getEnumValueIndex(_g))){
            				case (int)0: {
HXLINE(  94)					::String field = _g->_hx_getString(1);
HXDLIN(  94)					 ::Dynamic object = _g->_hx_getObject(0);
HXLINE(  95)					this->setNameText(((::flixel::util::FlxStringUtil_obj::getClassName(object,true) + HX_(".",2e,00,00,00)) + field));
            				}
            				break;
            				case (int)1: {
            				}
            				break;
            				case (int)2: {
HXLINE(  96)					::String expression = _g->_hx_getString(0);
HXLINE(  97)					this->setNameText(expression);
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,updateName,(void))

void WatchEntry_obj::setNameText(::String name){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_103_setNameText)
HXLINE( 104)		this->nameText->set_text(name);
HXLINE( 105)		Float currentWidth = (this->nameText->get_textWidth() + (int)4);
HXLINE( 106)		 ::openfl::_legacy::text::TextField _hx_tmp = this->nameText;
HXDLIN( 106)		_hx_tmp->set_width(::Math_obj::min(currentWidth,(int)125));
            	}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,setNameText,(void))

 ::Dynamic WatchEntry_obj::getValue(){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_111_getValue)
HXDLIN( 111)		 ::flixel::_hx_system::debug::watch::WatchEntryData _g = this->data;
HXDLIN( 111)		switch((int)(_hx_getEnumValueIndex(_g))){
            			case (int)0: {
HXLINE( 113)				::String field = _g->_hx_getString(1);
HXDLIN( 113)				 ::Dynamic object = _g->_hx_getObject(0);
HXLINE( 114)				return ::Reflect_obj::getProperty(object,field);
            			}
            			break;
            			case (int)1: {
HXLINE( 121)				::String value = _g->_hx_getString(0);
HXLINE( 122)				return value;
            			}
            			break;
            			case (int)2: {
HXLINE( 115)				::String parsedExpr = _g->_hx_getString(1);
HXLINE( 119)				return HX_("hscript is not installed",84,84,f9,28);
            			}
            			break;
            		}
HXLINE( 111)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,getValue,return )

::String WatchEntry_obj::getFormattedValue(){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_127_getFormattedValue)
HXLINE( 128)		 ::Dynamic value = this->getValue();
HXLINE( 129)		if (::Std_obj::is(value,hx::ClassOf< ::Float >())) {
HXLINE( 130)			value = ::flixel::math::FlxMath_obj::roundDecimal(( (Float)(value) ),::flixel::FlxG_obj::debugger->precision);
            		}
HXLINE( 131)		return ::Std_obj::string(value);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,getFormattedValue,return )

void WatchEntry_obj::submitValue( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_136_submitValue)
HXDLIN( 136)		 ::flixel::_hx_system::debug::watch::WatchEntryData _g = this->data;
HXDLIN( 136)		if ((_hx_getEnumValueIndex(_g) == (int)0)) {
HXLINE( 138)			::String field = _g->_hx_getString(1);
HXDLIN( 138)			 ::Dynamic object = _g->_hx_getObject(0);
HXLINE( 139)			::Reflect_obj::setProperty(object,field,value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,submitValue,(void))

void WatchEntry_obj::updateValue(){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_146_updateValue)
HXDLIN( 146)		if (!(this->valueText->isEditing)) {
HXLINE( 147)			 ::flixel::_hx_system::debug::watch::EditableTextField _hx_tmp = this->valueText;
HXDLIN( 147)			_hx_tmp->set_text(this->getFormattedValue());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,updateValue,(void))

Float WatchEntry_obj::getNameWidth(){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_152_getNameWidth)
HXDLIN( 152)		return this->nameText->get_width();
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,getNameWidth,return )

Float WatchEntry_obj::getMinWidth(){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_157_getMinWidth)
HXDLIN( 157)		Float _hx_tmp = (this->valueText->get_x() + (int)8);
HXDLIN( 157)		return (_hx_tmp + this->removeButton->get_width());
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,getMinWidth,return )

void WatchEntry_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_161_destroy)
HXLINE( 162)		this->nameText = ( ( ::openfl::_legacy::text::TextField)(::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),this->nameText)) );
HXLINE( 163)		::flixel::util::FlxDestroyUtil_obj::destroy(this->valueText);
HXLINE( 164)		this->valueText = ( ( ::flixel::_hx_system::debug::watch::EditableTextField)(::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),this->valueText)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,destroy,(void))

int WatchEntry_obj::GUTTER;

int WatchEntry_obj::TEXT_HEIGHT;

int WatchEntry_obj::MAX_NAME_WIDTH;


hx::ObjectPtr< WatchEntry_obj > WatchEntry_obj::__new(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data, ::Dynamic removeEntry) {
	hx::ObjectPtr< WatchEntry_obj > __this = new WatchEntry_obj();
	__this->__construct(displayName,data,removeEntry);
	return __this;
}

hx::ObjectPtr< WatchEntry_obj > WatchEntry_obj::__alloc(hx::Ctx *_hx_ctx,::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data, ::Dynamic removeEntry) {
	WatchEntry_obj *__this = (WatchEntry_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(WatchEntry_obj), true, "flixel.system.debug.watch.WatchEntry"));
	*(void **)__this = WatchEntry_obj::_hx_vtable;
	__this->__construct(displayName,data,removeEntry);
	return __this;
}

WatchEntry_obj::WatchEntry_obj()
{
}

void WatchEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WatchEntry);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(displayName,"displayName");
	HX_MARK_MEMBER_NAME(nameText,"nameText");
	HX_MARK_MEMBER_NAME(valueText,"valueText");
	HX_MARK_MEMBER_NAME(removeButton,"removeButton");
	HX_MARK_MEMBER_NAME(defaultFormat,"defaultFormat");
	 ::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WatchEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(displayName,"displayName");
	HX_VISIT_MEMBER_NAME(nameText,"nameText");
	HX_VISIT_MEMBER_NAME(valueText,"valueText");
	HX_VISIT_MEMBER_NAME(removeButton,"removeButton");
	HX_VISIT_MEMBER_NAME(defaultFormat,"defaultFormat");
	 ::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val WatchEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nameText") ) { return hx::Val( nameText ); }
		if (HX_FIELD_EQ(inName,"getValue") ) { return hx::Val( getValue_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"valueText") ) { return hx::Val( valueText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return hx::Val( updateSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateName") ) { return hx::Val( updateName_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayName") ) { return hx::Val( displayName ); }
		if (HX_FIELD_EQ(inName,"setNameText") ) { return hx::Val( setNameText_dyn() ); }
		if (HX_FIELD_EQ(inName,"submitValue") ) { return hx::Val( submitValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateValue") ) { return hx::Val( updateValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMinWidth") ) { return hx::Val( getMinWidth_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeButton") ) { return hx::Val( removeButton ); }
		if (HX_FIELD_EQ(inName,"getTextColor") ) { return hx::Val( getTextColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"getNameWidth") ) { return hx::Val( getNameWidth_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { return hx::Val( defaultFormat ); }
		if (HX_FIELD_EQ(inName,"initTextField") ) { return hx::Val( initTextField_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFormattedValue") ) { return hx::Val( getFormattedValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val WatchEntry_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::flixel::_hx_system::debug::watch::WatchEntryData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nameText") ) { nameText=inValue.Cast<  ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"valueText") ) { valueText=inValue.Cast<  ::flixel::_hx_system::debug::watch::EditableTextField >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayName") ) { displayName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeButton") ) { removeButton=inValue.Cast<  ::flixel::_hx_system::ui::FlxSystemButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { defaultFormat=inValue.Cast<  ::openfl::_legacy::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WatchEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("displayName","\xad","\x11","\xf2","\x30"));
	outFields->push(HX_HCSTRING("nameText","\x98","\xec","\x80","\x49"));
	outFields->push(HX_HCSTRING("valueText","\xbe","\x84","\x7e","\x99"));
	outFields->push(HX_HCSTRING("removeButton","\x56","\xfd","\x0d","\x49"));
	outFields->push(HX_HCSTRING("defaultFormat","\xd8","\x62","\x07","\xf8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo WatchEntry_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_hx_system::debug::watch::WatchEntryData*/ ,(int)offsetof(WatchEntry_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsString,(int)offsetof(WatchEntry_obj,displayName),HX_HCSTRING("displayName","\xad","\x11","\xf2","\x30")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(WatchEntry_obj,nameText),HX_HCSTRING("nameText","\x98","\xec","\x80","\x49")},
	{hx::fsObject /*::flixel::_hx_system::debug::watch::EditableTextField*/ ,(int)offsetof(WatchEntry_obj,valueText),HX_HCSTRING("valueText","\xbe","\x84","\x7e","\x99")},
	{hx::fsObject /*::flixel::_hx_system::ui::FlxSystemButton*/ ,(int)offsetof(WatchEntry_obj,removeButton),HX_HCSTRING("removeButton","\x56","\xfd","\x0d","\x49")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(WatchEntry_obj,defaultFormat),HX_HCSTRING("defaultFormat","\xd8","\x62","\x07","\xf8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo WatchEntry_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &WatchEntry_obj::GUTTER,HX_HCSTRING("GUTTER","\x1b","\xd3","\x2b","\x8c")},
	{hx::fsInt,(void *) &WatchEntry_obj::TEXT_HEIGHT,HX_HCSTRING("TEXT_HEIGHT","\x79","\xd0","\xdc","\x87")},
	{hx::fsInt,(void *) &WatchEntry_obj::MAX_NAME_WIDTH,HX_HCSTRING("MAX_NAME_WIDTH","\xcd","\x26","\x03","\x84")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String WatchEntry_obj_sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("displayName","\xad","\x11","\xf2","\x30"),
	HX_HCSTRING("nameText","\x98","\xec","\x80","\x49"),
	HX_HCSTRING("valueText","\xbe","\x84","\x7e","\x99"),
	HX_HCSTRING("removeButton","\x56","\xfd","\x0d","\x49"),
	HX_HCSTRING("defaultFormat","\xd8","\x62","\x07","\xf8"),
	HX_HCSTRING("getTextColor","\x00","\x9e","\xa0","\xf2"),
	HX_HCSTRING("initTextField","\x9d","\xe7","\x80","\x14"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	HX_HCSTRING("updateName","\xf4","\x5c","\xb4","\x01"),
	HX_HCSTRING("setNameText","\x5a","\xb6","\xe1","\x79"),
	HX_HCSTRING("getValue","\xfb","\x8e","\x8f","\x91"),
	HX_HCSTRING("getFormattedValue","\x0b","\x62","\xf0","\xec"),
	HX_HCSTRING("submitValue","\x39","\x40","\x71","\x15"),
	HX_HCSTRING("updateValue","\xa8","\xe8","\x50","\x17"),
	HX_HCSTRING("getNameWidth","\x45","\x20","\x6e","\xd3"),
	HX_HCSTRING("getMinWidth","\xca","\xe5","\x8d","\xe7"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void WatchEntry_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WatchEntry_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WatchEntry_obj::GUTTER,"GUTTER");
	HX_MARK_MEMBER_NAME(WatchEntry_obj::TEXT_HEIGHT,"TEXT_HEIGHT");
	HX_MARK_MEMBER_NAME(WatchEntry_obj::MAX_NAME_WIDTH,"MAX_NAME_WIDTH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WatchEntry_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WatchEntry_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WatchEntry_obj::GUTTER,"GUTTER");
	HX_VISIT_MEMBER_NAME(WatchEntry_obj::TEXT_HEIGHT,"TEXT_HEIGHT");
	HX_VISIT_MEMBER_NAME(WatchEntry_obj::MAX_NAME_WIDTH,"MAX_NAME_WIDTH");
};

#endif

hx::Class WatchEntry_obj::__mClass;

static ::String WatchEntry_obj_sStaticFields[] = {
	HX_HCSTRING("GUTTER","\x1b","\xd3","\x2b","\x8c"),
	HX_HCSTRING("TEXT_HEIGHT","\x79","\xd0","\xdc","\x87"),
	HX_HCSTRING("MAX_NAME_WIDTH","\xcd","\x26","\x03","\x84"),
	::String(null())
};

void WatchEntry_obj::__register()
{
	hx::Object *dummy = new WatchEntry_obj;
	WatchEntry_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.watch.WatchEntry","\x0a","\xd4","\x34","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = WatchEntry_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(WatchEntry_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(WatchEntry_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WatchEntry_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WatchEntry_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WatchEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WatchEntry_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WatchEntry_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_22_boot)
HXDLIN(  22)		GUTTER = (int)4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_23_boot)
HXDLIN(  23)		TEXT_HEIGHT = (int)20;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2a234d999e4b3fc8_24_boot)
HXDLIN(  24)		MAX_NAME_WIDTH = (int)125;
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch
