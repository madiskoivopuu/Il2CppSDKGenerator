#pragma once

#include "../mscorlib/System/ValueType.h"


class BuildEntityResultData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildEntityResultData"));
	}

	int32_t& ResultId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int64_t& Time() {
		return *(int64_t*)((uintptr_t)this + 0x8);
	}

};};
