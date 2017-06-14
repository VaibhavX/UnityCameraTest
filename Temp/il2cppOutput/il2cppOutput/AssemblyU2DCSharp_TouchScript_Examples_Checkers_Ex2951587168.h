#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// TouchScript.Gestures.TransformGesture
struct TransformGesture_t780972309;
// UnityEngine.Renderer
struct Renderer_t257310565;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Examples.Checkers.Exclusive
struct  Exclusive_t2951587168  : public MonoBehaviour_t1158329972
{
public:
	// TouchScript.Gestures.TransformGesture TouchScript.Examples.Checkers.Exclusive::Target
	TransformGesture_t780972309 * ___Target_2;
	// UnityEngine.Color TouchScript.Examples.Checkers.Exclusive::Color
	Color_t2020392075  ___Color_3;
	// System.Boolean TouchScript.Examples.Checkers.Exclusive::exclusive
	bool ___exclusive_4;
	// UnityEngine.Renderer TouchScript.Examples.Checkers.Exclusive::cachedRenderer
	Renderer_t257310565 * ___cachedRenderer_5;
	// System.Single TouchScript.Examples.Checkers.Exclusive::shininess
	float ___shininess_6;

public:
	inline static int32_t get_offset_of_Target_2() { return static_cast<int32_t>(offsetof(Exclusive_t2951587168, ___Target_2)); }
	inline TransformGesture_t780972309 * get_Target_2() const { return ___Target_2; }
	inline TransformGesture_t780972309 ** get_address_of_Target_2() { return &___Target_2; }
	inline void set_Target_2(TransformGesture_t780972309 * value)
	{
		___Target_2 = value;
		Il2CppCodeGenWriteBarrier(&___Target_2, value);
	}

	inline static int32_t get_offset_of_Color_3() { return static_cast<int32_t>(offsetof(Exclusive_t2951587168, ___Color_3)); }
	inline Color_t2020392075  get_Color_3() const { return ___Color_3; }
	inline Color_t2020392075 * get_address_of_Color_3() { return &___Color_3; }
	inline void set_Color_3(Color_t2020392075  value)
	{
		___Color_3 = value;
	}

	inline static int32_t get_offset_of_exclusive_4() { return static_cast<int32_t>(offsetof(Exclusive_t2951587168, ___exclusive_4)); }
	inline bool get_exclusive_4() const { return ___exclusive_4; }
	inline bool* get_address_of_exclusive_4() { return &___exclusive_4; }
	inline void set_exclusive_4(bool value)
	{
		___exclusive_4 = value;
	}

	inline static int32_t get_offset_of_cachedRenderer_5() { return static_cast<int32_t>(offsetof(Exclusive_t2951587168, ___cachedRenderer_5)); }
	inline Renderer_t257310565 * get_cachedRenderer_5() const { return ___cachedRenderer_5; }
	inline Renderer_t257310565 ** get_address_of_cachedRenderer_5() { return &___cachedRenderer_5; }
	inline void set_cachedRenderer_5(Renderer_t257310565 * value)
	{
		___cachedRenderer_5 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRenderer_5, value);
	}

	inline static int32_t get_offset_of_shininess_6() { return static_cast<int32_t>(offsetof(Exclusive_t2951587168, ___shininess_6)); }
	inline float get_shininess_6() const { return ___shininess_6; }
	inline float* get_address_of_shininess_6() { return &___shininess_6; }
	inline void set_shininess_6(float value)
	{
		___shininess_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
