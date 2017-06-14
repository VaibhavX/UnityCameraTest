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
// TouchScript.InputSources.InputHandlers.MouseHandler
struct MouseHandler_t3116661769;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.InputSources.MouseInput
struct  MouseInput_t301708067  : public InputSource_t3078263767
{
public:
	// System.Boolean TouchScript.InputSources.MouseInput::DisableOnMobilePlatforms
	bool ___DisableOnMobilePlatforms_5;
	// TouchScript.Tags TouchScript.InputSources.MouseInput::Tags
	Tags_t1265380163 * ___Tags_6;
	// TouchScript.InputSources.InputHandlers.MouseHandler TouchScript.InputSources.MouseInput::mouseHandler
	MouseHandler_t3116661769 * ___mouseHandler_7;

public:
	inline static int32_t get_offset_of_DisableOnMobilePlatforms_5() { return static_cast<int32_t>(offsetof(MouseInput_t301708067, ___DisableOnMobilePlatforms_5)); }
	inline bool get_DisableOnMobilePlatforms_5() const { return ___DisableOnMobilePlatforms_5; }
	inline bool* get_address_of_DisableOnMobilePlatforms_5() { return &___DisableOnMobilePlatforms_5; }
	inline void set_DisableOnMobilePlatforms_5(bool value)
	{
		___DisableOnMobilePlatforms_5 = value;
	}

	inline static int32_t get_offset_of_Tags_6() { return static_cast<int32_t>(offsetof(MouseInput_t301708067, ___Tags_6)); }
	inline Tags_t1265380163 * get_Tags_6() const { return ___Tags_6; }
	inline Tags_t1265380163 ** get_address_of_Tags_6() { return &___Tags_6; }
	inline void set_Tags_6(Tags_t1265380163 * value)
	{
		___Tags_6 = value;
		Il2CppCodeGenWriteBarrier(&___Tags_6, value);
	}

	inline static int32_t get_offset_of_mouseHandler_7() { return static_cast<int32_t>(offsetof(MouseInput_t301708067, ___mouseHandler_7)); }
	inline MouseHandler_t3116661769 * get_mouseHandler_7() const { return ___mouseHandler_7; }
	inline MouseHandler_t3116661769 ** get_address_of_mouseHandler_7() { return &___mouseHandler_7; }
	inline void set_mouseHandler_7(MouseHandler_t3116661769 * value)
	{
		___mouseHandler_7 = value;
		Il2CppCodeGenWriteBarrier(&___mouseHandler_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
