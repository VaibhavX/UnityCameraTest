#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_TouchScript_Examples_Portal_Plan3727824722.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Examples.Portal.Planet
struct  Planet_t3382065704  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TouchScript.Examples.Portal.Planet::Speed
	float ___Speed_2;
	// System.Single TouchScript.Examples.Portal.Planet::RotationSpeed
	float ___RotationSpeed_3;
	// System.Single TouchScript.Examples.Portal.Planet::FallSpeed
	float ___FallSpeed_4;
	// TouchScript.Examples.Portal.Planet/PlanetStatus TouchScript.Examples.Portal.Planet::status
	int32_t ___status_5;

public:
	inline static int32_t get_offset_of_Speed_2() { return static_cast<int32_t>(offsetof(Planet_t3382065704, ___Speed_2)); }
	inline float get_Speed_2() const { return ___Speed_2; }
	inline float* get_address_of_Speed_2() { return &___Speed_2; }
	inline void set_Speed_2(float value)
	{
		___Speed_2 = value;
	}

	inline static int32_t get_offset_of_RotationSpeed_3() { return static_cast<int32_t>(offsetof(Planet_t3382065704, ___RotationSpeed_3)); }
	inline float get_RotationSpeed_3() const { return ___RotationSpeed_3; }
	inline float* get_address_of_RotationSpeed_3() { return &___RotationSpeed_3; }
	inline void set_RotationSpeed_3(float value)
	{
		___RotationSpeed_3 = value;
	}

	inline static int32_t get_offset_of_FallSpeed_4() { return static_cast<int32_t>(offsetof(Planet_t3382065704, ___FallSpeed_4)); }
	inline float get_FallSpeed_4() const { return ___FallSpeed_4; }
	inline float* get_address_of_FallSpeed_4() { return &___FallSpeed_4; }
	inline void set_FallSpeed_4(float value)
	{
		___FallSpeed_4 = value;
	}

	inline static int32_t get_offset_of_status_5() { return static_cast<int32_t>(offsetof(Planet_t3382065704, ___status_5)); }
	inline int32_t get_status_5() const { return ___status_5; }
	inline int32_t* get_address_of_status_5() { return &___status_5; }
	inline void set_status_5(int32_t value)
	{
		___status_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
