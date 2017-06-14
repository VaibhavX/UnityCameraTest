#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_InputSources_InputSo3078263767.h"
#include "AssemblyU2DCSharp_TouchScript_InputSources_Standar4008807668.h"
#include "AssemblyU2DCSharp_TouchScript_InputSources_Standar3091725811.h"

// TouchScript.Tags
struct Tags_t1265380163;
// TouchScript.InputSources.InputHandlers.MouseHandler
struct MouseHandler_t3116661769;
// TouchScript.InputSources.InputHandlers.TouchHandler
struct TouchHandler_t2521645213;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.InputSources.StandardInput
struct  StandardInput_t4102879489  : public InputSource_t3078263767
{
public:
	// TouchScript.Tags TouchScript.InputSources.StandardInput::TouchTags
	Tags_t1265380163 * ___TouchTags_5;
	// TouchScript.Tags TouchScript.InputSources.StandardInput::MouseTags
	Tags_t1265380163 * ___MouseTags_6;
	// TouchScript.Tags TouchScript.InputSources.StandardInput::PenTags
	Tags_t1265380163 * ___PenTags_7;
	// TouchScript.InputSources.StandardInput/Windows8TouchAPIType TouchScript.InputSources.StandardInput::Windows8Touch
	int32_t ___Windows8Touch_8;
	// TouchScript.InputSources.StandardInput/Windows7TouchAPIType TouchScript.InputSources.StandardInput::Windows7Touch
	int32_t ___Windows7Touch_9;
	// System.Boolean TouchScript.InputSources.StandardInput::WebPlayerTouch
	bool ___WebPlayerTouch_10;
	// System.Boolean TouchScript.InputSources.StandardInput::WebGLTouch
	bool ___WebGLTouch_11;
	// System.Boolean TouchScript.InputSources.StandardInput::Windows8Mouse
	bool ___Windows8Mouse_12;
	// System.Boolean TouchScript.InputSources.StandardInput::Windows7Mouse
	bool ___Windows7Mouse_13;
	// System.Boolean TouchScript.InputSources.StandardInput::UniversalWindowsMouse
	bool ___UniversalWindowsMouse_14;
	// TouchScript.InputSources.InputHandlers.MouseHandler TouchScript.InputSources.StandardInput::mouseHandler
	MouseHandler_t3116661769 * ___mouseHandler_15;
	// TouchScript.InputSources.InputHandlers.TouchHandler TouchScript.InputSources.StandardInput::touchHandler
	TouchHandler_t2521645213 * ___touchHandler_16;

public:
	inline static int32_t get_offset_of_TouchTags_5() { return static_cast<int32_t>(offsetof(StandardInput_t4102879489, ___TouchTags_5)); }
	inline Tags_t1265380163 * get_TouchTags_5() const { return ___TouchTags_5; }
	inline Tags_t1265380163 ** get_address_of_TouchTags_5() { return &___TouchTags_5; }
	inline void set_TouchTags_5(Tags_t1265380163 * value)
	{
		___TouchTags_5 = value;
		Il2CppCodeGenWriteBarrier(&___TouchTags_5, value);
	}

	inline static int32_t get_offset_of_MouseTags_6() { return static_cast<int32_t>(offsetof(StandardInput_t4102879489, ___MouseTags_6)); }
	inline Tags_t1265380163 * get_MouseTags_6() const { return ___MouseTags_6; }
	inline Tags_t1265380163 ** get_address_of_MouseTags_6() { return &___MouseTags_6; }
	inline void set_MouseTags_6(Tags_t1265380163 * value)
	{
		___MouseTags_6 = value;
		Il2CppCodeGenWriteBarrier(&___MouseTags_6, value);
	}

	inline static int32_t get_offset_of_PenTags_7() { return static_cast<int32_t>(offsetof(StandardInput_t4102879489, ___PenTags_7)); }
	inline Tags_t1265380163 * get_PenTags_7() const { return ___PenTags_7; }
	inline Tags_t1265380163 ** get_address_of_PenTags_7() { return &___PenTags_7; }
	inline void set_PenTags_7(Tags_t1265380163 * value)
	{
		___PenTags_7 = value;
		Il2CppCodeGenWriteBarrier(&___PenTags_7, value);
	}

	inline static int32_t get_offset_of_Windows8Touch_8() { return static_cast<int32_t>(offsetof(StandardInput_t4102879489, ___Windows8Touch_8)); }
	inline int32_t get_Windows8Touch_8() const { return ___Windows8Touch_8; }
	inline int32_t* get_address_of_Windows8Touch_8() { return &___Windows8Touch_8; }
	inline void set_Windows8Touch_8(int32_t value)
	{
		___Windows8Touch_8 = value;
	}

	inline static int32_t get_offset_of_Windows7Touch_9() { return static_cast<int32_t>(offsetof(StandardInput_t4102879489, ___Windows7Touch_9)); }
	inline int32_t get_Windows7Touch_9() const { return ___Windows7Touch_9; }
	inline int32_t* get_address_of_Windows7Touch_9() { return &___Windows7Touch_9; }
	inline void set_Windows7Touch_9(int32_t value)
	{
		___Windows7Touch_9 = value;
	}

	inline static int32_t get_offset_of_WebPlayerTouch_10() { return static_cast<int32_t>(offsetof(StandardInput_t4102879489, ___WebPlayerTouch_10)); }
	inline bool get_WebPlayerTouch_10() const { return ___WebPlayerTouch_10; }
	inline bool* get_address_of_WebPlayerTouch_10() { return &___WebPlayerTouch_10; }
	inline void set_WebPlayerTouch_10(bool value)
	{
		___WebPlayerTouch_10 = value;
	}

	inline static int32_t get_offset_of_WebGLTouch_11() { return static_cast<int32_t>(offsetof(StandardInput_t4102879489, ___WebGLTouch_11)); }
	inline bool get_WebGLTouch_11() const { return ___WebGLTouch_11; }
	inline bool* get_address_of_WebGLTouch_11() { return &___WebGLTouch_11; }
	inline void set_WebGLTouch_11(bool value)
	{
		___WebGLTouch_11 = value;
	}

	inline static int32_t get_offset_of_Windows8Mouse_12() { return static_cast<int32_t>(offsetof(StandardInput_t4102879489, ___Windows8Mouse_12)); }
	inline bool get_Windows8Mouse_12() const { return ___Windows8Mouse_12; }
	inline bool* get_address_of_Windows8Mouse_12() { return &___Windows8Mouse_12; }
	inline void set_Windows8Mouse_12(bool value)
	{
		___Windows8Mouse_12 = value;
	}

	inline static int32_t get_offset_of_Windows7Mouse_13() { return static_cast<int32_t>(offsetof(StandardInput_t4102879489, ___Windows7Mouse_13)); }
	inline bool get_Windows7Mouse_13() const { return ___Windows7Mouse_13; }
	inline bool* get_address_of_Windows7Mouse_13() { return &___Windows7Mouse_13; }
	inline void set_Windows7Mouse_13(bool value)
	{
		___Windows7Mouse_13 = value;
	}

	inline static int32_t get_offset_of_UniversalWindowsMouse_14() { return static_cast<int32_t>(offsetof(StandardInput_t4102879489, ___UniversalWindowsMouse_14)); }
	inline bool get_UniversalWindowsMouse_14() const { return ___UniversalWindowsMouse_14; }
	inline bool* get_address_of_UniversalWindowsMouse_14() { return &___UniversalWindowsMouse_14; }
	inline void set_UniversalWindowsMouse_14(bool value)
	{
		___UniversalWindowsMouse_14 = value;
	}

	inline static int32_t get_offset_of_mouseHandler_15() { return static_cast<int32_t>(offsetof(StandardInput_t4102879489, ___mouseHandler_15)); }
	inline MouseHandler_t3116661769 * get_mouseHandler_15() const { return ___mouseHandler_15; }
	inline MouseHandler_t3116661769 ** get_address_of_mouseHandler_15() { return &___mouseHandler_15; }
	inline void set_mouseHandler_15(MouseHandler_t3116661769 * value)
	{
		___mouseHandler_15 = value;
		Il2CppCodeGenWriteBarrier(&___mouseHandler_15, value);
	}

	inline static int32_t get_offset_of_touchHandler_16() { return static_cast<int32_t>(offsetof(StandardInput_t4102879489, ___touchHandler_16)); }
	inline TouchHandler_t2521645213 * get_touchHandler_16() const { return ___touchHandler_16; }
	inline TouchHandler_t2521645213 ** get_address_of_touchHandler_16() { return &___touchHandler_16; }
	inline void set_touchHandler_16(TouchHandler_t2521645213 * value)
	{
		___touchHandler_16 = value;
		Il2CppCodeGenWriteBarrier(&___touchHandler_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
