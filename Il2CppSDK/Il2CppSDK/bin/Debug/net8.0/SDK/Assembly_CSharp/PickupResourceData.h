#pragma once

#include "../mscorlib/System/ValueType.h"


class PickupResourceData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PickupResourceData"));
	}

	int32_t& PickedCount() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int32_t& RestCount() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

	Il2CppString*& Resource() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

};};
