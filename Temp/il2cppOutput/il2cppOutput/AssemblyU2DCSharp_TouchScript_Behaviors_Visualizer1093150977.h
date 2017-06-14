#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_Behaviors_Visualizer4188753234.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Behaviors.Visualizer.TouchProxy
struct  TouchProxy_t1093150977  : public TouchProxyBase_t4188753234
{
public:
	// UnityEngine.UI.Text TouchScript.Behaviors.Visualizer.TouchProxy::Text
	Text_t356221433 * ___Text_6;
	// System.Text.StringBuilder TouchScript.Behaviors.Visualizer.TouchProxy::stringBuilder
	StringBuilder_t1221177846 * ___stringBuilder_7;

public:
	inline static int32_t get_offset_of_Text_6() { return static_cast<int32_t>(offsetof(TouchProxy_t1093150977, ___Text_6)); }
	inline Text_t356221433 * get_Text_6() const { return ___Text_6; }
	inline Text_t356221433 ** get_address_of_Text_6() { return &___Text_6; }
	inline void set_Text_6(Text_t356221433 * value)
	{
		___Text_6 = value;
		Il2CppCodeGenWriteBarrier(&___Text_6, value);
	}

	inline static int32_t get_offset_of_stringBuilder_7() { return static_cast<int32_t>(offsetof(TouchProxy_t1093150977, ___stringBuilder_7)); }
	inline StringBuilder_t1221177846 * get_stringBuilder_7() const { return ___stringBuilder_7; }
	inline StringBuilder_t1221177846 ** get_address_of_stringBuilder_7() { return &___stringBuilder_7; }
	inline void set_stringBuilder_7(StringBuilder_t1221177846 * value)
	{
		___stringBuilder_7 = value;
		Il2CppCodeGenWriteBarrier(&___stringBuilder_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
