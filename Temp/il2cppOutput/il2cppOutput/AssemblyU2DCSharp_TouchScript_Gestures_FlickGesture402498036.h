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
#include "AssemblyU2DCSharp_TouchScript_Gestures_FlickGestur1726119045.h"

// System.String
struct String_t;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;
// TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>
struct TimedSequence_1_t4021328779;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.FlickGesture
struct  FlickGesture_t402498036  : public Gesture_t2352305985
{
public:
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.FlickGesture::flickedInvoker
	EventHandler_1_t1880931879 * ___flickedInvoker_33;
	// UnityEngine.Vector2 TouchScript.Gestures.FlickGesture::<ScreenFlickVector>k__BackingField
	Vector2_t2243707579  ___U3CScreenFlickVectorU3Ek__BackingField_34;
	// System.Single TouchScript.Gestures.FlickGesture::<ScreenFlickTime>k__BackingField
	float ___U3CScreenFlickTimeU3Ek__BackingField_35;
	// System.Single TouchScript.Gestures.FlickGesture::flickTime
	float ___flickTime_36;
	// System.Single TouchScript.Gestures.FlickGesture::minDistance
	float ___minDistance_37;
	// System.Single TouchScript.Gestures.FlickGesture::movementThreshold
	float ___movementThreshold_38;
	// TouchScript.Gestures.FlickGesture/GestureDirection TouchScript.Gestures.FlickGesture::direction
	int32_t ___direction_39;
	// System.Boolean TouchScript.Gestures.FlickGesture::moving
	bool ___moving_40;
	// UnityEngine.Vector2 TouchScript.Gestures.FlickGesture::movementBuffer
	Vector2_t2243707579  ___movementBuffer_41;
	// System.Boolean TouchScript.Gestures.FlickGesture::isActive
	bool ___isActive_42;
	// TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2> TouchScript.Gestures.FlickGesture::deltaSequence
	TimedSequence_1_t4021328779 * ___deltaSequence_43;

public:
	inline static int32_t get_offset_of_flickedInvoker_33() { return static_cast<int32_t>(offsetof(FlickGesture_t402498036, ___flickedInvoker_33)); }
	inline EventHandler_1_t1880931879 * get_flickedInvoker_33() const { return ___flickedInvoker_33; }
	inline EventHandler_1_t1880931879 ** get_address_of_flickedInvoker_33() { return &___flickedInvoker_33; }
	inline void set_flickedInvoker_33(EventHandler_1_t1880931879 * value)
	{
		___flickedInvoker_33 = value;
		Il2CppCodeGenWriteBarrier(&___flickedInvoker_33, value);
	}

	inline static int32_t get_offset_of_U3CScreenFlickVectorU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(FlickGesture_t402498036, ___U3CScreenFlickVectorU3Ek__BackingField_34)); }
	inline Vector2_t2243707579  get_U3CScreenFlickVectorU3Ek__BackingField_34() const { return ___U3CScreenFlickVectorU3Ek__BackingField_34; }
	inline Vector2_t2243707579 * get_address_of_U3CScreenFlickVectorU3Ek__BackingField_34() { return &___U3CScreenFlickVectorU3Ek__BackingField_34; }
	inline void set_U3CScreenFlickVectorU3Ek__BackingField_34(Vector2_t2243707579  value)
	{
		___U3CScreenFlickVectorU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CScreenFlickTimeU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(FlickGesture_t402498036, ___U3CScreenFlickTimeU3Ek__BackingField_35)); }
	inline float get_U3CScreenFlickTimeU3Ek__BackingField_35() const { return ___U3CScreenFlickTimeU3Ek__BackingField_35; }
	inline float* get_address_of_U3CScreenFlickTimeU3Ek__BackingField_35() { return &___U3CScreenFlickTimeU3Ek__BackingField_35; }
	inline void set_U3CScreenFlickTimeU3Ek__BackingField_35(float value)
	{
		___U3CScreenFlickTimeU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_flickTime_36() { return static_cast<int32_t>(offsetof(FlickGesture_t402498036, ___flickTime_36)); }
	inline float get_flickTime_36() const { return ___flickTime_36; }
	inline float* get_address_of_flickTime_36() { return &___flickTime_36; }
	inline void set_flickTime_36(float value)
	{
		___flickTime_36 = value;
	}

	inline static int32_t get_offset_of_minDistance_37() { return static_cast<int32_t>(offsetof(FlickGesture_t402498036, ___minDistance_37)); }
	inline float get_minDistance_37() const { return ___minDistance_37; }
	inline float* get_address_of_minDistance_37() { return &___minDistance_37; }
	inline void set_minDistance_37(float value)
	{
		___minDistance_37 = value;
	}

	inline static int32_t get_offset_of_movementThreshold_38() { return static_cast<int32_t>(offsetof(FlickGesture_t402498036, ___movementThreshold_38)); }
	inline float get_movementThreshold_38() const { return ___movementThreshold_38; }
	inline float* get_address_of_movementThreshold_38() { return &___movementThreshold_38; }
	inline void set_movementThreshold_38(float value)
	{
		___movementThreshold_38 = value;
	}

	inline static int32_t get_offset_of_direction_39() { return static_cast<int32_t>(offsetof(FlickGesture_t402498036, ___direction_39)); }
	inline int32_t get_direction_39() const { return ___direction_39; }
	inline int32_t* get_address_of_direction_39() { return &___direction_39; }
	inline void set_direction_39(int32_t value)
	{
		___direction_39 = value;
	}

	inline static int32_t get_offset_of_moving_40() { return static_cast<int32_t>(offsetof(FlickGesture_t402498036, ___moving_40)); }
	inline bool get_moving_40() const { return ___moving_40; }
	inline bool* get_address_of_moving_40() { return &___moving_40; }
	inline void set_moving_40(bool value)
	{
		___moving_40 = value;
	}

	inline static int32_t get_offset_of_movementBuffer_41() { return static_cast<int32_t>(offsetof(FlickGesture_t402498036, ___movementBuffer_41)); }
	inline Vector2_t2243707579  get_movementBuffer_41() const { return ___movementBuffer_41; }
	inline Vector2_t2243707579 * get_address_of_movementBuffer_41() { return &___movementBuffer_41; }
	inline void set_movementBuffer_41(Vector2_t2243707579  value)
	{
		___movementBuffer_41 = value;
	}

	inline static int32_t get_offset_of_isActive_42() { return static_cast<int32_t>(offsetof(FlickGesture_t402498036, ___isActive_42)); }
	inline bool get_isActive_42() const { return ___isActive_42; }
	inline bool* get_address_of_isActive_42() { return &___isActive_42; }
	inline void set_isActive_42(bool value)
	{
		___isActive_42 = value;
	}

	inline static int32_t get_offset_of_deltaSequence_43() { return static_cast<int32_t>(offsetof(FlickGesture_t402498036, ___deltaSequence_43)); }
	inline TimedSequence_1_t4021328779 * get_deltaSequence_43() const { return ___deltaSequence_43; }
	inline TimedSequence_1_t4021328779 ** get_address_of_deltaSequence_43() { return &___deltaSequence_43; }
	inline void set_deltaSequence_43(TimedSequence_1_t4021328779 * value)
	{
		___deltaSequence_43 = value;
		Il2CppCodeGenWriteBarrier(&___deltaSequence_43, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
