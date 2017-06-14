#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TouchScript.Gestures.LongPressGesture
struct LongPressGesture_t656184630;
// TouchScript.Gestures.PressGesture
struct PressGesture_t582183752;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Examples.Tap.Break
struct  Break_t1800807137  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TouchScript.Examples.Tap.Break::Power
	float ___Power_2;
	// TouchScript.Gestures.LongPressGesture TouchScript.Examples.Tap.Break::longPressGesture
	LongPressGesture_t656184630 * ___longPressGesture_3;
	// TouchScript.Gestures.PressGesture TouchScript.Examples.Tap.Break::pressGesture
	PressGesture_t582183752 * ___pressGesture_4;
	// UnityEngine.MeshRenderer TouchScript.Examples.Tap.Break::rnd
	MeshRenderer_t1268241104 * ___rnd_5;
	// System.Boolean TouchScript.Examples.Tap.Break::growing
	bool ___growing_6;
	// System.Single TouchScript.Examples.Tap.Break::growingTime
	float ___growingTime_7;
	// UnityEngine.Vector3[] TouchScript.Examples.Tap.Break::directions
	Vector3U5BU5D_t1172311765* ___directions_8;

public:
	inline static int32_t get_offset_of_Power_2() { return static_cast<int32_t>(offsetof(Break_t1800807137, ___Power_2)); }
	inline float get_Power_2() const { return ___Power_2; }
	inline float* get_address_of_Power_2() { return &___Power_2; }
	inline void set_Power_2(float value)
	{
		___Power_2 = value;
	}

	inline static int32_t get_offset_of_longPressGesture_3() { return static_cast<int32_t>(offsetof(Break_t1800807137, ___longPressGesture_3)); }
	inline LongPressGesture_t656184630 * get_longPressGesture_3() const { return ___longPressGesture_3; }
	inline LongPressGesture_t656184630 ** get_address_of_longPressGesture_3() { return &___longPressGesture_3; }
	inline void set_longPressGesture_3(LongPressGesture_t656184630 * value)
	{
		___longPressGesture_3 = value;
		Il2CppCodeGenWriteBarrier(&___longPressGesture_3, value);
	}

	inline static int32_t get_offset_of_pressGesture_4() { return static_cast<int32_t>(offsetof(Break_t1800807137, ___pressGesture_4)); }
	inline PressGesture_t582183752 * get_pressGesture_4() const { return ___pressGesture_4; }
	inline PressGesture_t582183752 ** get_address_of_pressGesture_4() { return &___pressGesture_4; }
	inline void set_pressGesture_4(PressGesture_t582183752 * value)
	{
		___pressGesture_4 = value;
		Il2CppCodeGenWriteBarrier(&___pressGesture_4, value);
	}

	inline static int32_t get_offset_of_rnd_5() { return static_cast<int32_t>(offsetof(Break_t1800807137, ___rnd_5)); }
	inline MeshRenderer_t1268241104 * get_rnd_5() const { return ___rnd_5; }
	inline MeshRenderer_t1268241104 ** get_address_of_rnd_5() { return &___rnd_5; }
	inline void set_rnd_5(MeshRenderer_t1268241104 * value)
	{
		___rnd_5 = value;
		Il2CppCodeGenWriteBarrier(&___rnd_5, value);
	}

	inline static int32_t get_offset_of_growing_6() { return static_cast<int32_t>(offsetof(Break_t1800807137, ___growing_6)); }
	inline bool get_growing_6() const { return ___growing_6; }
	inline bool* get_address_of_growing_6() { return &___growing_6; }
	inline void set_growing_6(bool value)
	{
		___growing_6 = value;
	}

	inline static int32_t get_offset_of_growingTime_7() { return static_cast<int32_t>(offsetof(Break_t1800807137, ___growingTime_7)); }
	inline float get_growingTime_7() const { return ___growingTime_7; }
	inline float* get_address_of_growingTime_7() { return &___growingTime_7; }
	inline void set_growingTime_7(float value)
	{
		___growingTime_7 = value;
	}

	inline static int32_t get_offset_of_directions_8() { return static_cast<int32_t>(offsetof(Break_t1800807137, ___directions_8)); }
	inline Vector3U5BU5D_t1172311765* get_directions_8() const { return ___directions_8; }
	inline Vector3U5BU5D_t1172311765** get_address_of_directions_8() { return &___directions_8; }
	inline void set_directions_8(Vector3U5BU5D_t1172311765* value)
	{
		___directions_8 = value;
		Il2CppCodeGenWriteBarrier(&___directions_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
