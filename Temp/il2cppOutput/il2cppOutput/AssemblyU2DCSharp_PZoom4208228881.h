#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PZoom
struct  PZoom_t4208228881  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PZoom::previousDistance
	float ___previousDistance_2;
	// System.Single PZoom::zoomSpeed
	float ___zoomSpeed_3;

public:
	inline static int32_t get_offset_of_previousDistance_2() { return static_cast<int32_t>(offsetof(PZoom_t4208228881, ___previousDistance_2)); }
	inline float get_previousDistance_2() const { return ___previousDistance_2; }
	inline float* get_address_of_previousDistance_2() { return &___previousDistance_2; }
	inline void set_previousDistance_2(float value)
	{
		___previousDistance_2 = value;
	}

	inline static int32_t get_offset_of_zoomSpeed_3() { return static_cast<int32_t>(offsetof(PZoom_t4208228881, ___zoomSpeed_3)); }
	inline float get_zoomSpeed_3() const { return ___zoomSpeed_3; }
	inline float* get_address_of_zoomSpeed_3() { return &___zoomSpeed_3; }
	inline void set_zoomSpeed_3(float value)
	{
		___zoomSpeed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
