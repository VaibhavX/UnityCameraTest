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

// TouchScript.Gestures.TapGesture
struct  TapGesture_t556401502  : public Gesture_t2352305985
{
public:
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.TapGesture::tappedInvoker
	EventHandler_1_t1880931879 * ___tappedInvoker_33;
	// System.Int32 TouchScript.Gestures.TapGesture::numberOfTapsRequired
	int32_t ___numberOfTapsRequired_34;
	// System.Single TouchScript.Gestures.TapGesture::timeLimit
	float ___timeLimit_35;
	// System.Single TouchScript.Gestures.TapGesture::distanceLimit
	float ___distanceLimit_36;
	// System.Single TouchScript.Gestures.TapGesture::distanceLimitInPixelsSquared
	float ___distanceLimitInPixelsSquared_37;
	// System.Boolean TouchScript.Gestures.TapGesture::isActive
	bool ___isActive_38;
	// System.Int32 TouchScript.Gestures.TapGesture::tapsDone
	int32_t ___tapsDone_39;
	// UnityEngine.Vector2 TouchScript.Gestures.TapGesture::startPosition
	Vector2_t2243707579  ___startPosition_40;
	// UnityEngine.Vector2 TouchScript.Gestures.TapGesture::totalMovement
	Vector2_t2243707579  ___totalMovement_41;

public:
	inline static int32_t get_offset_of_tappedInvoker_33() { return static_cast<int32_t>(offsetof(TapGesture_t556401502, ___tappedInvoker_33)); }
	inline EventHandler_1_t1880931879 * get_tappedInvoker_33() const { return ___tappedInvoker_33; }
	inline EventHandler_1_t1880931879 ** get_address_of_tappedInvoker_33() { return &___tappedInvoker_33; }
	inline void set_tappedInvoker_33(EventHandler_1_t1880931879 * value)
	{
		___tappedInvoker_33 = value;
		Il2CppCodeGenWriteBarrier(&___tappedInvoker_33, value);
	}

	inline static int32_t get_offset_of_numberOfTapsRequired_34() { return static_cast<int32_t>(offsetof(TapGesture_t556401502, ___numberOfTapsRequired_34)); }
	inline int32_t get_numberOfTapsRequired_34() const { return ___numberOfTapsRequired_34; }
	inline int32_t* get_address_of_numberOfTapsRequired_34() { return &___numberOfTapsRequired_34; }
	inline void set_numberOfTapsRequired_34(int32_t value)
	{
		___numberOfTapsRequired_34 = value;
	}

	inline static int32_t get_offset_of_timeLimit_35() { return static_cast<int32_t>(offsetof(TapGesture_t556401502, ___timeLimit_35)); }
	inline float get_timeLimit_35() const { return ___timeLimit_35; }
	inline float* get_address_of_timeLimit_35() { return &___timeLimit_35; }
	inline void set_timeLimit_35(float value)
	{
		___timeLimit_35 = value;
	}

	inline static int32_t get_offset_of_distanceLimit_36() { return static_cast<int32_t>(offsetof(TapGesture_t556401502, ___distanceLimit_36)); }
	inline float get_distanceLimit_36() const { return ___distanceLimit_36; }
	inline float* get_address_of_distanceLimit_36() { return &___distanceLimit_36; }
	inline void set_distanceLimit_36(float value)
	{
		___distanceLimit_36 = value;
	}

	inline static int32_t get_offset_of_distanceLimitInPixelsSquared_37() { return static_cast<int32_t>(offsetof(TapGesture_t556401502, ___distanceLimitInPixelsSquared_37)); }
	inline float get_distanceLimitInPixelsSquared_37() const { return ___distanceLimitInPixelsSquared_37; }
	inline float* get_address_of_distanceLimitInPixelsSquared_37() { return &___distanceLimitInPixelsSquared_37; }
	inline void set_distanceLimitInPixelsSquared_37(float value)
	{
		___distanceLimitInPixelsSquared_37 = value;
	}

	inline static int32_t get_offset_of_isActive_38() { return static_cast<int32_t>(offsetof(TapGesture_t556401502, ___isActive_38)); }
	inline bool get_isActive_38() const { return ___isActive_38; }
	inline bool* get_address_of_isActive_38() { return &___isActive_38; }
	inline void set_isActive_38(bool value)
	{
		___isActive_38 = value;
	}

	inline static int32_t get_offset_of_tapsDone_39() { return static_cast<int32_t>(offsetof(TapGesture_t556401502, ___tapsDone_39)); }
	inline int32_t get_tapsDone_39() const { return ___tapsDone_39; }
	inline int32_t* get_address_of_tapsDone_39() { return &___tapsDone_39; }
	inline void set_tapsDone_39(int32_t value)
	{
		___tapsDone_39 = value;
	}

	inline static int32_t get_offset_of_startPosition_40() { return static_cast<int32_t>(offsetof(TapGesture_t556401502, ___startPosition_40)); }
	inline Vector2_t2243707579  get_startPosition_40() const { return ___startPosition_40; }
	inline Vector2_t2243707579 * get_address_of_startPosition_40() { return &___startPosition_40; }
	inline void set_startPosition_40(Vector2_t2243707579  value)
	{
		___startPosition_40 = value;
	}

	inline static int32_t get_offset_of_totalMovement_41() { return static_cast<int32_t>(offsetof(TapGesture_t556401502, ___totalMovement_41)); }
	inline Vector2_t2243707579  get_totalMovement_41() const { return ___totalMovement_41; }
	inline Vector2_t2243707579 * get_address_of_totalMovement_41() { return &___totalMovement_41; }
	inline void set_totalMovement_41(Vector2_t2243707579  value)
	{
		___totalMovement_41 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
