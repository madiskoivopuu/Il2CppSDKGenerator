#pragma once

#include "../mscorlib/System/ValueType.h"


class PickupData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PickupData"));
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Il2CppArray<PickupResourceData>*& Resources() {
		return *(Il2CppArray<PickupResourceData>**)((uintptr_t)this + 0x8);
	}

};};
