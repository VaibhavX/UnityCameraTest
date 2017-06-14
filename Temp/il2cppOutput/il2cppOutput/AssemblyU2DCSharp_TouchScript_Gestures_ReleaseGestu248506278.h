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
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.ReleaseGesture
struct  ReleaseGesture_t248506278  : public Gesture_t2352305985
{
public:
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.ReleaseGesture::releasedInvoker
	EventHandler_1_t1880931879 * ___releasedInvoker_33;
	// System.Boolean TouchScript.Gestures.ReleaseGesture::ignoreChildren
	bool ___ignoreChildren_34;

public:
	inline static int32_t get_offset_of_releasedInvoker_33() { return static_cast<int32_t>(offsetof(ReleaseGesture_t248506278, ___releasedInvoker_33)); }
	inline EventHandler_1_t1880931879 * get_releasedInvoker_33() const { return ___releasedInvoker_33; }
	inline EventHandler_1_t1880931879 ** get_address_of_releasedInvoker_33() { return &___releasedInvoker_33; }
	inline void set_releasedInvoker_33(EventHandler_1_t1880931879 * value)
	{
		___releasedInvoker_33 = value;
		Il2CppCodeGenWriteBarrier(&___releasedInvoker_33, value);
	}

	inline static int32_t get_offset_of_ignoreChildren_34() { return static_cast<int32_t>(offsetof(ReleaseGesture_t248506278, ___ignoreChildren_34)); }
	inline bool get_ignoreChildren_34() const { return ___ignoreChildren_34; }
	inline bool* get_address_of_ignoreChildren_34() { return &___ignoreChildren_34; }
	inline void set_ignoreChildren_34(bool value)
	{
		___ignoreChildren_34 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
