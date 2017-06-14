#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t1389513207;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Examples.Colors.Colors
struct  Colors_t466566976  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform TouchScript.Examples.Colors.Colors::Prefab
	Transform_t3275118058 * ___Prefab_2;
	// System.Int32 TouchScript.Examples.Colors.Colors::Total
	int32_t ___Total_3;
	// System.Collections.Generic.List`1<UnityEngine.Color> TouchScript.Examples.Colors.Colors::colors
	List_1_t1389513207 * ___colors_4;

public:
	inline static int32_t get_offset_of_Prefab_2() { return static_cast<int32_t>(offsetof(Colors_t466566976, ___Prefab_2)); }
	inline Transform_t3275118058 * get_Prefab_2() const { return ___Prefab_2; }
	inline Transform_t3275118058 ** get_address_of_Prefab_2() { return &___Prefab_2; }
	inline void set_Prefab_2(Transform_t3275118058 * value)
	{
		___Prefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___Prefab_2, value);
	}

	inline static int32_t get_offset_of_Total_3() { return static_cast<int32_t>(offsetof(Colors_t466566976, ___Total_3)); }
	inline int32_t get_Total_3() const { return ___Total_3; }
	inline int32_t* get_address_of_Total_3() { return &___Total_3; }
	inline void set_Total_3(int32_t value)
	{
		___Total_3 = value;
	}

	inline static int32_t get_offset_of_colors_4() { return static_cast<int32_t>(offsetof(Colors_t466566976, ___colors_4)); }
	inline List_1_t1389513207 * get_colors_4() const { return ___colors_4; }
	inline List_1_t1389513207 ** get_address_of_colors_4() { return &___colors_4; }
	inline void set_colors_4(List_1_t1389513207 * value)
	{
		___colors_4 = value;
		Il2CppCodeGenWriteBarrier(&___colors_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
