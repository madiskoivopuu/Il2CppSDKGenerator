#pragma once

#include "../mscorlib/System/ValueType.h"


class DamageShieldData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageShieldData"));
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	float& Value() {
		return *(float*)((uintptr_t)this + 0x4);
	}

};};
