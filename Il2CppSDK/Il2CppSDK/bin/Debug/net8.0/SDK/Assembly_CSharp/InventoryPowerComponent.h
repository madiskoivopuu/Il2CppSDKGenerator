#pragma once

#include "../mscorlib/System/Object.h"
#include "InventoryPower.h"


class InventoryPowerComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryPowerComponent"));
	}

	InventoryPower& Value() {
		return *(InventoryPower*)((uintptr_t)this + 0x10);
	}

};};
