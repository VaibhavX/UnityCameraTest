#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t1389513207;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Examples.UI.SetColor
struct  SetColor_t3761950761  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Color> TouchScript.Examples.UI.SetColor::Colors
	List_1_t1389513207 * ___Colors_2;

public:
	inline static int32_t get_offset_of_Colors_2() { return static_cast<int32_t>(offsetof(SetColor_t3761950761, ___Colors_2)); }
	inline List_1_t1389513207 * get_Colors_2() const { return ___Colors_2; }
	inline List_1_t1389513207 ** get_address_of_Colors_2() { return &___Colors_2; }
	inline void set_Colors_2(List_1_t1389513207 * value)
	{
		___Colors_2 = value;
		Il2CppCodeGenWriteBarrier(&___Colors_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
