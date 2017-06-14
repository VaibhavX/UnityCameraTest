#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_InputSources_InputSo3078263767.h"

// TouchScript.Tags
struct Tags_t1265380163;
// TouchScript.InputSources.InputHandlers.TouchHandler
struct TouchHandler_t2521645213;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.InputSources.MobileInput
struct  MobileInput_t1619040116  : public InputSource_t3078263767
{
public:
	// System.Boolean TouchScript.InputSources.MobileInput::DisableOnNonTouchPlatforms
	bool ___DisableOnNonTouchPlatforms_5;
	// TouchScript.Tags TouchScript.InputSources.MobileInput::Tags
	Tags_t1265380163 * ___Tags_6;
	// TouchScript.InputSources.InputHandlers.TouchHandler TouchScript.InputSources.MobileInput::touchHandler
	TouchHandler_t2521645213 * ___touchHandler_7;

public:
	inline static int32_t get_offset_of_DisableOnNonTouchPlatforms_5() { return static_cast<int32_t>(offsetof(MobileInput_t1619040116, ___DisableOnNonTouchPlatforms_5)); }
	inline bool get_DisableOnNonTouchPlatforms_5() const { return ___DisableOnNonTouchPlatforms_5; }
	inline bool* get_address_of_DisableOnNonTouchPlatforms_5() { return &___DisableOnNonTouchPlatforms_5; }
	inline void set_DisableOnNonTouchPlatforms_5(bool value)
	{
		___DisableOnNonTouchPlatforms_5 = value;
	}

	inline static int32_t get_offset_of_Tags_6() { return static_cast<int32_t>(offsetof(MobileInput_t1619040116, ___Tags_6)); }
	inline Tags_t1265380163 * get_Tags_6() const { return ___Tags_6; }
	inline Tags_t1265380163 ** get_address_of_Tags_6() { return &___Tags_6; }
	inline void set_Tags_6(Tags_t1265380163 * value)
	{
		___Tags_6 = value;
		Il2CppCodeGenWriteBarrier(&___Tags_6, value);
	}

	inline static int32_t get_offset_of_touchHandler_7() { return static_cast<int32_t>(offsetof(MobileInput_t1619040116, ___touchHandler_7)); }
	inline TouchHandler_t2521645213 * get_touchHandler_7() const { return ___touchHandler_7; }
	inline TouchHandler_t2521645213 ** get_address_of_touchHandler_7() { return &___touchHandler_7; }
	inline void set_touchHandler_7(TouchHandler_t2521645213 * value)
	{
		___touchHandler_7 = value;
		Il2CppCodeGenWriteBarrier(&___touchHandler_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
