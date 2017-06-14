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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Examples.Tap.Spawn
struct  Spawn_t1484139269  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform TouchScript.Examples.Tap.Spawn::CubePrefab
	Transform_t3275118058 * ___CubePrefab_2;
	// UnityEngine.Transform TouchScript.Examples.Tap.Spawn::Container
	Transform_t3275118058 * ___Container_3;
	// System.Single TouchScript.Examples.Tap.Spawn::Scale
	float ___Scale_4;

public:
	inline static int32_t get_offset_of_CubePrefab_2() { return static_cast<int32_t>(offsetof(Spawn_t1484139269, ___CubePrefab_2)); }
	inline Transform_t3275118058 * get_CubePrefab_2() const { return ___CubePrefab_2; }
	inline Transform_t3275118058 ** get_address_of_CubePrefab_2() { return &___CubePrefab_2; }
	inline void set_CubePrefab_2(Transform_t3275118058 * value)
	{
		___CubePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___CubePrefab_2, value);
	}

	inline static int32_t get_offset_of_Container_3() { return static_cast<int32_t>(offsetof(Spawn_t1484139269, ___Container_3)); }
	inline Transform_t3275118058 * get_Container_3() const { return ___Container_3; }
	inline Transform_t3275118058 ** get_address_of_Container_3() { return &___Container_3; }
	inline void set_Container_3(Transform_t3275118058 * value)
	{
		___Container_3 = value;
		Il2CppCodeGenWriteBarrier(&___Container_3, value);
	}

	inline static int32_t get_offset_of_Scale_4() { return static_cast<int32_t>(offsetof(Spawn_t1484139269, ___Scale_4)); }
	inline float get_Scale_4() const { return ___Scale_4; }
	inline float* get_address_of_Scale_4() { return &___Scale_4; }
	inline void set_Scale_4(float value)
	{
		___Scale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
