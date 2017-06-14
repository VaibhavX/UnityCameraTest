#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TouchScript.Examples.Cube.RedirectInput
struct RedirectInput_t1920236474;
// TouchScript.Layers.TouchLayer
struct TouchLayer_t2635439978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Examples.Cube.LayerDelegate
struct  LayerDelegate_t3473877044  : public MonoBehaviour_t1158329972
{
public:
	// TouchScript.Examples.Cube.RedirectInput TouchScript.Examples.Cube.LayerDelegate::Source
	RedirectInput_t1920236474 * ___Source_2;
	// TouchScript.Layers.TouchLayer TouchScript.Examples.Cube.LayerDelegate::RenderTextureLayer
	TouchLayer_t2635439978 * ___RenderTextureLayer_3;

public:
	inline static int32_t get_offset_of_Source_2() { return static_cast<int32_t>(offsetof(LayerDelegate_t3473877044, ___Source_2)); }
	inline RedirectInput_t1920236474 * get_Source_2() const { return ___Source_2; }
	inline RedirectInput_t1920236474 ** get_address_of_Source_2() { return &___Source_2; }
	inline void set_Source_2(RedirectInput_t1920236474 * value)
	{
		___Source_2 = value;
		Il2CppCodeGenWriteBarrier(&___Source_2, value);
	}

	inline static int32_t get_offset_of_RenderTextureLayer_3() { return static_cast<int32_t>(offsetof(LayerDelegate_t3473877044, ___RenderTextureLayer_3)); }
	inline TouchLayer_t2635439978 * get_RenderTextureLayer_3() const { return ___RenderTextureLayer_3; }
	inline TouchLayer_t2635439978 ** get_address_of_RenderTextureLayer_3() { return &___RenderTextureLayer_3; }
	inline void set_RenderTextureLayer_3(TouchLayer_t2635439978 * value)
	{
		___RenderTextureLayer_3 = value;
		Il2CppCodeGenWriteBarrier(&___RenderTextureLayer_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
