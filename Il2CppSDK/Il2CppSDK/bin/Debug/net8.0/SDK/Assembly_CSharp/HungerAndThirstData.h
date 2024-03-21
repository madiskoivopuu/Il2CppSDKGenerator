#pragma once

#include "../mscorlib/System/ValueType.h"


class HungerAndThirstData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HungerAndThirstData"));
	}

	float& Hunger() {
		return *(float*)((uintptr_t)this + 0x0);
	}

	float& Thirst() {
		return *(float*)((uintptr_t)this + 0x4);
	}

};};
