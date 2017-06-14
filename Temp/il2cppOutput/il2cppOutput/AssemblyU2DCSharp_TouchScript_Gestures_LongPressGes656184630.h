#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_Gestures_Gesture2352305985.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.String
struct String_t;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.LongPressGesture
struct  LongPressGesture_t656184630  : public Gesture_t2352305985
{
public:
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.LongPressGesture::longPressedInvoker
	EventHandler_1_t1880931879 * ___longPressedInvoker_33;
	// System.Single TouchScript.Gestures.LongPressGesture::timeToPress
	float ___timeToPress_34;
	// System.Single TouchScript.Gestures.LongPressGesture::distanceLimit
	float ___distanceLimit_35;
	// System.Single TouchScript.Gestures.LongPressGesture::distanceLimitInPixelsSquared
	float ___distanceLimitInPixelsSquared_36;
	// UnityEngine.Vector2 TouchScript.Gestures.LongPressGesture::totalMovement
	Vector2_t2243707579  ___totalMovement_37;

public:
	inline static int32_t get_offset_of_longPressedInvoker_33() { return static_cast<int32_t>(offsetof(LongPressGesture_t656184630, ___longPressedInvoker_33)); }
	inline EventHandler_1_t1880931879 * get_longPressedInvoker_33() const { return ___longPressedInvoker_33; }
	inline EventHandler_1_t1880931879 ** get_address_of_longPressedInvoker_33() { return &___longPressedInvoker_33; }
	inline void set_longPressedInvoker_33(EventHandler_1_t1880931879 * value)
	{
		___longPressedInvoker_33 = value;
		Il2CppCodeGenWriteBarrier(&___longPressedInvoker_33, value);
	}

	inline static int32_t get_offset_of_timeToPress_34() { return static_cast<int32_t>(offsetof(LongPressGesture_t656184630, ___timeToPress_34)); }
	inline float get_timeToPress_34() const { return ___timeToPress_34; }
	inline float* get_address_of_timeToPress_34() { return &___timeToPress_34; }
	inline void set_timeToPress_34(float value)
	{
		___timeToPress_34 = value;
	}

	inline static int32_t get_offset_of_distanceLimit_35() { return static_cast<int32_t>(offsetof(LongPressGesture_t656184630, ___distanceLimit_35)); }
	inline float get_distanceLimit_35() const { return ___distanceLimit_35; }
	inline float* get_address_of_distanceLimit_35() { return &___distanceLimit_35; }
	inline void set_distanceLimit_35(float value)
	{
		___distanceLimit_35 = value;
	}

	inline static int32_t get_offset_of_distanceLimitInPixelsSquared_36() { return static_cast<int32_t>(offsetof(LongPressGesture_t656184630, ___distanceLimitInPixelsSquared_36)); }
	inline float get_distanceLimitInPixelsSquared_36() const { return ___distanceLimitInPixelsSquared_36; }
	inline float* get_address_of_distanceLimitInPixelsSquared_36() { return &___distanceLimitInPixelsSquared_36; }
	inline void set_distanceLimitInPixelsSquared_36(float value)
	{
		___distanceLimitInPixelsSquared_36 = value;
	}

	inline static int32_t get_offset_of_totalMovement_37() { return static_cast<int32_t>(offsetof(LongPressGesture_t656184630, ___totalMovement_37)); }
	inline Vector2_t2243707579  get_totalMovement_37() const { return ___totalMovement_37; }
	inline Vector2_t2243707579 * get_address_of_totalMovement_37() { return &___totalMovement_37; }
	inline void set_totalMovement_37(Vector2_t2243707579  value)
	{
		___totalMovement_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
