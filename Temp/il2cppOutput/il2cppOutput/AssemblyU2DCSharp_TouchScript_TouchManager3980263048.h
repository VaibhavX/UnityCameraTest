#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_TouchScript_TouchManager_Message1628650752.h"

// System.Version
struct Version_t1755874712;
// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>
struct List_1_t2004561110;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.TouchManager
struct  TouchManager_t3980263048  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Object TouchScript.TouchManager::displayDevice
	Object_t1021602117 * ___displayDevice_6;
	// System.Boolean TouchScript.TouchManager::shouldCreateCameraLayer
	bool ___shouldCreateCameraLayer_7;
	// System.Boolean TouchScript.TouchManager::shouldCreateStandardInput
	bool ___shouldCreateStandardInput_8;
	// System.Boolean TouchScript.TouchManager::useSendMessage
	bool ___useSendMessage_9;
	// TouchScript.TouchManager/MessageType TouchScript.TouchManager::sendMessageEvents
	int32_t ___sendMessageEvents_10;
	// UnityEngine.GameObject TouchScript.TouchManager::sendMessageTarget
	GameObject_t1756533147 * ___sendMessageTarget_11;
	// System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer> TouchScript.TouchManager::layers
	List_1_t2004561110 * ___layers_12;

public:
	inline static int32_t get_offset_of_displayDevice_6() { return static_cast<int32_t>(offsetof(TouchManager_t3980263048, ___displayDevice_6)); }
	inline Object_t1021602117 * get_displayDevice_6() const { return ___displayDevice_6; }
	inline Object_t1021602117 ** get_address_of_displayDevice_6() { return &___displayDevice_6; }
	inline void set_displayDevice_6(Object_t1021602117 * value)
	{
		___displayDevice_6 = value;
		Il2CppCodeGenWriteBarrier(&___displayDevice_6, value);
	}

	inline static int32_t get_offset_of_shouldCreateCameraLayer_7() { return static_cast<int32_t>(offsetof(TouchManager_t3980263048, ___shouldCreateCameraLayer_7)); }
	inline bool get_shouldCreateCameraLayer_7() const { return ___shouldCreateCameraLayer_7; }
	inline bool* get_address_of_shouldCreateCameraLayer_7() { return &___shouldCreateCameraLayer_7; }
	inline void set_shouldCreateCameraLayer_7(bool value)
	{
		___shouldCreateCameraLayer_7 = value;
	}

	inline static int32_t get_offset_of_shouldCreateStandardInput_8() { return static_cast<int32_t>(offsetof(TouchManager_t3980263048, ___shouldCreateStandardInput_8)); }
	inline bool get_shouldCreateStandardInput_8() const { return ___shouldCreateStandardInput_8; }
	inline bool* get_address_of_shouldCreateStandardInput_8() { return &___shouldCreateStandardInput_8; }
	inline void set_shouldCreateStandardInput_8(bool value)
	{
		___shouldCreateStandardInput_8 = value;
	}

	inline static int32_t get_offset_of_useSendMessage_9() { return static_cast<int32_t>(offsetof(TouchManager_t3980263048, ___useSendMessage_9)); }
	inline bool get_useSendMessage_9() const { return ___useSendMessage_9; }
	inline bool* get_address_of_useSendMessage_9() { return &___useSendMessage_9; }
	inline void set_useSendMessage_9(bool value)
	{
		___useSendMessage_9 = value;
	}

	inline static int32_t get_offset_of_sendMessageEvents_10() { return static_cast<int32_t>(offsetof(TouchManager_t3980263048, ___sendMessageEvents_10)); }
	inline int32_t get_sendMessageEvents_10() const { return ___sendMessageEvents_10; }
	inline int32_t* get_address_of_sendMessageEvents_10() { return &___sendMessageEvents_10; }
	inline void set_sendMessageEvents_10(int32_t value)
	{
		___sendMessageEvents_10 = value;
	}

	inline static int32_t get_offset_of_sendMessageTarget_11() { return static_cast<int32_t>(offsetof(TouchManager_t3980263048, ___sendMessageTarget_11)); }
	inline GameObject_t1756533147 * get_sendMessageTarget_11() const { return ___sendMessageTarget_11; }
	inline GameObject_t1756533147 ** get_address_of_sendMessageTarget_11() { return &___sendMessageTarget_11; }
	inline void set_sendMessageTarget_11(GameObject_t1756533147 * value)
	{
		___sendMessageTarget_11 = value;
		Il2CppCodeGenWriteBarrier(&___sendMessageTarget_11, value);
	}

	inline static int32_t get_offset_of_layers_12() { return static_cast<int32_t>(offsetof(TouchManager_t3980263048, ___layers_12)); }
	inline List_1_t2004561110 * get_layers_12() const { return ___layers_12; }
	inline List_1_t2004561110 ** get_address_of_layers_12() { return &___layers_12; }
	inline void set_layers_12(List_1_t2004561110 * value)
	{
		___layers_12 = value;
		Il2CppCodeGenWriteBarrier(&___layers_12, value);
	}
};

struct TouchManager_t3980263048_StaticFields
{
public:
	// UnityEngine.Vector2 TouchScript.TouchManager::INVALID_POSITION
	Vector2_t2243707579  ___INVALID_POSITION_4;
	// System.Version TouchScript.TouchManager::VERSION
	Version_t1755874712 * ___VERSION_5;

public:
	inline static int32_t get_offset_of_INVALID_POSITION_4() { return static_cast<int32_t>(offsetof(TouchManager_t3980263048_StaticFields, ___INVALID_POSITION_4)); }
	inline Vector2_t2243707579  get_INVALID_POSITION_4() const { return ___INVALID_POSITION_4; }
	inline Vector2_t2243707579 * get_address_of_INVALID_POSITION_4() { return &___INVALID_POSITION_4; }
	inline void set_INVALID_POSITION_4(Vector2_t2243707579  value)
	{
		___INVALID_POSITION_4 = value;
	}

	inline static int32_t get_offset_of_VERSION_5() { return static_cast<int32_t>(offsetof(TouchManager_t3980263048_StaticFields, ___VERSION_5)); }
	inline Version_t1755874712 * get_VERSION_5() const { return ___VERSION_5; }
	inline Version_t1755874712 ** get_address_of_VERSION_5() { return &___VERSION_5; }
	inline void set_VERSION_5(Version_t1755874712 * value)
	{
		___VERSION_5 = value;
		Il2CppCodeGenWriteBarrier(&___VERSION_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
