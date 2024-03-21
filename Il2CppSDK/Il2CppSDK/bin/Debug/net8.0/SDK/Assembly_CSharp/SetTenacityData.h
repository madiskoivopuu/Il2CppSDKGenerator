#pragma once

#include "../mscorlib/System/ValueType.h"


class SetTenacityData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetTenacityData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	float& TenacityCoef() {
		return *(float*)((uintptr_t)this + 0x4);
	}

};};
