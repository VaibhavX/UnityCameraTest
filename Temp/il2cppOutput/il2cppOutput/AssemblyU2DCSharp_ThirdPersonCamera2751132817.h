#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ThirdPersonCamera
struct  ThirdPersonCamera_t2751132817  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ThirdPersonCamera::mouseSensitivity
	float ___mouseSensitivity_2;
	// System.Single ThirdPersonCamera::degreeLimit
	float ___degreeLimit_3;
	// UnityEngine.GameObject ThirdPersonCamera::target
	GameObject_t1756533147 * ___target_4;
	// UnityEngine.Vector3 ThirdPersonCamera::focus
	Vector3_t2243707580  ___focus_5;
	// System.Boolean ThirdPersonCamera::IsRotating
	bool ___IsRotating_6;
	// System.Single ThirdPersonCamera::distance
	float ___distance_9;
	// System.Single ThirdPersonCamera::scrollspeed
	float ___scrollspeed_10;

public:
	inline static int32_t get_offset_of_mouseSensitivity_2() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2751132817, ___mouseSensitivity_2)); }
	inline float get_mouseSensitivity_2() const { return ___mouseSensitivity_2; }
	inline float* get_address_of_mouseSensitivity_2() { return &___mouseSensitivity_2; }
	inline void set_mouseSensitivity_2(float value)
	{
		___mouseSensitivity_2 = value;
	}

	inline static int32_t get_offset_of_degreeLimit_3() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2751132817, ___degreeLimit_3)); }
	inline float get_degreeLimit_3() const { return ___degreeLimit_3; }
	inline float* get_address_of_degreeLimit_3() { return &___degreeLimit_3; }
	inline void set_degreeLimit_3(float value)
	{
		___degreeLimit_3 = value;
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2751132817, ___target_4)); }
	inline GameObject_t1756533147 * get_target_4() const { return ___target_4; }
	inline GameObject_t1756533147 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(GameObject_t1756533147 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier(&___target_4, value);
	}

	inline static int32_t get_offset_of_focus_5() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2751132817, ___focus_5)); }
	inline Vector3_t2243707580  get_focus_5() const { return ___focus_5; }
	inline Vector3_t2243707580 * get_address_of_focus_5() { return &___focus_5; }
	inline void set_focus_5(Vector3_t2243707580  value)
	{
		___focus_5 = value;
	}

	inline static int32_t get_offset_of_IsRotating_6() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2751132817, ___IsRotating_6)); }
	inline bool get_IsRotating_6() const { return ___IsRotating_6; }
	inline bool* get_address_of_IsRotating_6() { return &___IsRotating_6; }
	inline void set_IsRotating_6(bool value)
	{
		___IsRotating_6 = value;
	}

	inline static int32_t get_offset_of_distance_9() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2751132817, ___distance_9)); }
	inline float get_distance_9() const { return ___distance_9; }
	inline float* get_address_of_distance_9() { return &___distance_9; }
	inline void set_distance_9(float value)
	{
		___distance_9 = value;
	}

	inline static int32_t get_offset_of_scrollspeed_10() { return static_cast<int32_t>(offsetof(ThirdPersonCamera_t2751132817, ___scrollspeed_10)); }
	inline float get_scrollspeed_10() const { return ___scrollspeed_10; }
	inline float* get_address_of_scrollspeed_10() { return &___scrollspeed_10; }
	inline void set_scrollspeed_10(float value)
	{
		___scrollspeed_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
