#pragma once

#include "../mscorlib/System/ValueType.h"


class SetHealthData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetHealthData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	float& HealthCoef() {
		return *(float*)((uintptr_t)this + 0x4);
	}

	float& BonusHealth() {
		return *(float*)((uintptr_t)this + 0x8);
	}

};};
