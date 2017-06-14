#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TouchScript.Examples.Runner
struct Runner_t619679634;
// TouchScript.Layers.UILayer
struct UILayer_t314035379;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Examples.Runner
struct  Runner_t619679634  : public MonoBehaviour_t1158329972
{
public:
	// TouchScript.Layers.UILayer TouchScript.Examples.Runner::layer
	UILayer_t314035379 * ___layer_3;

public:
	inline static int32_t get_offset_of_layer_3() { return static_cast<int32_t>(offsetof(Runner_t619679634, ___layer_3)); }
	inline UILayer_t314035379 * get_layer_3() const { return ___layer_3; }
	inline UILayer_t314035379 ** get_address_of_layer_3() { return &___layer_3; }
	inline void set_layer_3(UILayer_t314035379 * value)
	{
		___layer_3 = value;
		Il2CppCodeGenWriteBarrier(&___layer_3, value);
	}
};

struct Runner_t619679634_StaticFields
{
public:
	// TouchScript.Examples.Runner TouchScript.Examples.Runner::instance
	Runner_t619679634 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(Runner_t619679634_StaticFields, ___instance_2)); }
	inline Runner_t619679634 * get_instance_2() const { return ___instance_2; }
	inline Runner_t619679634 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(Runner_t619679634 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
