#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// TouchScript.Gestures.TapGesture
struct TapGesture_t556401502;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Examples.Tap.Kick
struct  Kick_t448281468  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TouchScript.Examples.Tap.Kick::Force
	float ___Force_2;
	// UnityEngine.ParticleSystem TouchScript.Examples.Tap.Kick::Particles
	ParticleSystem_t3394631041 * ___Particles_3;
	// TouchScript.Gestures.TapGesture TouchScript.Examples.Tap.Kick::gesture
	TapGesture_t556401502 * ___gesture_4;
	// UnityEngine.Rigidbody TouchScript.Examples.Tap.Kick::rb
	Rigidbody_t4233889191 * ___rb_5;
	// UnityEngine.Camera TouchScript.Examples.Tap.Kick::activeCamera
	Camera_t189460977 * ___activeCamera_6;

public:
	inline static int32_t get_offset_of_Force_2() { return static_cast<int32_t>(offsetof(Kick_t448281468, ___Force_2)); }
	inline float get_Force_2() const { return ___Force_2; }
	inline float* get_address_of_Force_2() { return &___Force_2; }
	inline void set_Force_2(float value)
	{
		___Force_2 = value;
	}

	inline static int32_t get_offset_of_Particles_3() { return static_cast<int32_t>(offsetof(Kick_t448281468, ___Particles_3)); }
	inline ParticleSystem_t3394631041 * get_Particles_3() const { return ___Particles_3; }
	inline ParticleSystem_t3394631041 ** get_address_of_Particles_3() { return &___Particles_3; }
	inline void set_Particles_3(ParticleSystem_t3394631041 * value)
	{
		___Particles_3 = value;
		Il2CppCodeGenWriteBarrier(&___Particles_3, value);
	}

	inline static int32_t get_offset_of_gesture_4() { return static_cast<int32_t>(offsetof(Kick_t448281468, ___gesture_4)); }
	inline TapGesture_t556401502 * get_gesture_4() const { return ___gesture_4; }
	inline TapGesture_t556401502 ** get_address_of_gesture_4() { return &___gesture_4; }
	inline void set_gesture_4(TapGesture_t556401502 * value)
	{
		___gesture_4 = value;
		Il2CppCodeGenWriteBarrier(&___gesture_4, value);
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(Kick_t448281468, ___rb_5)); }
	inline Rigidbody_t4233889191 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody_t4233889191 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier(&___rb_5, value);
	}

	inline static int32_t get_offset_of_activeCamera_6() { return static_cast<int32_t>(offsetof(Kick_t448281468, ___activeCamera_6)); }
	inline Camera_t189460977 * get_activeCamera_6() const { return ___activeCamera_6; }
	inline Camera_t189460977 ** get_address_of_activeCamera_6() { return &___activeCamera_6; }
	inline void set_activeCamera_6(Camera_t189460977 * value)
	{
		___activeCamera_6 = value;
		Il2CppCodeGenWriteBarrier(&___activeCamera_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
