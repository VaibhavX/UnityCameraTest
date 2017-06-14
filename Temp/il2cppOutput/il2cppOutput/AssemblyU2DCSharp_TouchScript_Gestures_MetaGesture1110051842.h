#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_Gestures_Gesture2352305985.h"

// System.String
struct String_t;
// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>
struct EventHandler_1_t3142866083;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.MetaGesture
struct  MetaGesture_t1110051842  : public Gesture_t2352305985
{
public:
	// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs> TouchScript.Gestures.MetaGesture::touchBeganInvoker
	EventHandler_1_t3142866083 * ___touchBeganInvoker_36;
	// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs> TouchScript.Gestures.MetaGesture::touchMovedInvoker
	EventHandler_1_t3142866083 * ___touchMovedInvoker_37;
	// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs> TouchScript.Gestures.MetaGesture::touchEndedInvoker
	EventHandler_1_t3142866083 * ___touchEndedInvoker_38;
	// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs> TouchScript.Gestures.MetaGesture::touchCancelledInvoker
	EventHandler_1_t3142866083 * ___touchCancelledInvoker_39;

public:
	inline static int32_t get_offset_of_touchBeganInvoker_36() { return static_cast<int32_t>(offsetof(MetaGesture_t1110051842, ___touchBeganInvoker_36)); }
	inline EventHandler_1_t3142866083 * get_touchBeganInvoker_36() const { return ___touchBeganInvoker_36; }
	inline EventHandler_1_t3142866083 ** get_address_of_touchBeganInvoker_36() { return &___touchBeganInvoker_36; }
	inline void set_touchBeganInvoker_36(EventHandler_1_t3142866083 * value)
	{
		___touchBeganInvoker_36 = value;
		Il2CppCodeGenWriteBarrier(&___touchBeganInvoker_36, value);
	}

	inline static int32_t get_offset_of_touchMovedInvoker_37() { return static_cast<int32_t>(offsetof(MetaGesture_t1110051842, ___touchMovedInvoker_37)); }
	inline EventHandler_1_t3142866083 * get_touchMovedInvoker_37() const { return ___touchMovedInvoker_37; }
	inline EventHandler_1_t3142866083 ** get_address_of_touchMovedInvoker_37() { return &___touchMovedInvoker_37; }
	inline void set_touchMovedInvoker_37(EventHandler_1_t3142866083 * value)
	{
		___touchMovedInvoker_37 = value;
		Il2CppCodeGenWriteBarrier(&___touchMovedInvoker_37, value);
	}

	inline static int32_t get_offset_of_touchEndedInvoker_38() { return static_cast<int32_t>(offsetof(MetaGesture_t1110051842, ___touchEndedInvoker_38)); }
	inline EventHandler_1_t3142866083 * get_touchEndedInvoker_38() const { return ___touchEndedInvoker_38; }
	inline EventHandler_1_t3142866083 ** get_address_of_touchEndedInvoker_38() { return &___touchEndedInvoker_38; }
	inline void set_touchEndedInvoker_38(EventHandler_1_t3142866083 * value)
	{
		___touchEndedInvoker_38 = value;
		Il2CppCodeGenWriteBarrier(&___touchEndedInvoker_38, value);
	}

	inline static int32_t get_offset_of_touchCancelledInvoker_39() { return static_cast<int32_t>(offsetof(MetaGesture_t1110051842, ___touchCancelledInvoker_39)); }
	inline EventHandler_1_t3142866083 * get_touchCancelledInvoker_39() const { return ___touchCancelledInvoker_39; }
	inline EventHandler_1_t3142866083 ** get_address_of_touchCancelledInvoker_39() { return &___touchCancelledInvoker_39; }
	inline void set_touchCancelledInvoker_39(EventHandler_1_t3142866083 * value)
	{
		___touchCancelledInvoker_39 = value;
		Il2CppCodeGenWriteBarrier(&___touchCancelledInvoker_39, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
