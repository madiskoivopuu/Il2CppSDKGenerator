#pragma once

#include "../mscorlib/System/ValueType.h"
#include "Gender.h"


class GenderData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GenderData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Gender& Gender() {
		return *(Gender*)((uintptr_t)this + 0x4);
	}

};};
