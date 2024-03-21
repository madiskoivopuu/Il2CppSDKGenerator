#pragma once

#include "../mscorlib/System/ValueType.h"
#include "PlayerInventoryType.h"


class AddSlotsData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddSlotsData"));
	}

	PlayerInventoryType& InventoryType() {
		return *(PlayerInventoryType*)((uintptr_t)this + 0x0);
	}

	int32_t& Grade() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

};};
