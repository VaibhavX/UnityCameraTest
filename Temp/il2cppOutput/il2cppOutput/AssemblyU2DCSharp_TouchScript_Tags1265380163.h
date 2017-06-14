#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// TouchScript.Tags
struct Tags_t1265380163;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t362681087;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Tags
struct  Tags_t1265380163  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.String> TouchScript.Tags::tagList
	List_1_t1398341365 * ___tagList_5;
	// System.Collections.Generic.HashSet`1<System.String> TouchScript.Tags::tags
	HashSet_1_t362681087 * ___tags_6;
	// System.String TouchScript.Tags::stringValue
	String_t* ___stringValue_7;

public:
	inline static int32_t get_offset_of_tagList_5() { return static_cast<int32_t>(offsetof(Tags_t1265380163, ___tagList_5)); }
	inline List_1_t1398341365 * get_tagList_5() const { return ___tagList_5; }
	inline List_1_t1398341365 ** get_address_of_tagList_5() { return &___tagList_5; }
	inline void set_tagList_5(List_1_t1398341365 * value)
	{
		___tagList_5 = value;
		Il2CppCodeGenWriteBarrier(&___tagList_5, value);
	}

	inline static int32_t get_offset_of_tags_6() { return static_cast<int32_t>(offsetof(Tags_t1265380163, ___tags_6)); }
	inline HashSet_1_t362681087 * get_tags_6() const { return ___tags_6; }
	inline HashSet_1_t362681087 ** get_address_of_tags_6() { return &___tags_6; }
	inline void set_tags_6(HashSet_1_t362681087 * value)
	{
		___tags_6 = value;
		Il2CppCodeGenWriteBarrier(&___tags_6, value);
	}

	inline static int32_t get_offset_of_stringValue_7() { return static_cast<int32_t>(offsetof(Tags_t1265380163, ___stringValue_7)); }
	inline String_t* get_stringValue_7() const { return ___stringValue_7; }
	inline String_t** get_address_of_stringValue_7() { return &___stringValue_7; }
	inline void set_stringValue_7(String_t* value)
	{
		___stringValue_7 = value;
		Il2CppCodeGenWriteBarrier(&___stringValue_7, value);
	}
};

struct Tags_t1265380163_StaticFields
{
public:
	// TouchScript.Tags TouchScript.Tags::EMPTY
	Tags_t1265380163 * ___EMPTY_4;

public:
	inline static int32_t get_offset_of_EMPTY_4() { return static_cast<int32_t>(offsetof(Tags_t1265380163_StaticFields, ___EMPTY_4)); }
	inline Tags_t1265380163 * get_EMPTY_4() const { return ___EMPTY_4; }
	inline Tags_t1265380163 ** get_address_of_EMPTY_4() { return &___EMPTY_4; }
	inline void set_EMPTY_4(Tags_t1265380163 * value)
	{
		___EMPTY_4 = value;
		Il2CppCodeGenWriteBarrier(&___EMPTY_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
