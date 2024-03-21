#pragma once

#include "../mscorlib/System/ValueType.h"


class InventoryPower : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryPower"));
	}

	float& HealthPower() {
		return *(float*)((uintptr_t)this + 0x0);
	}

	float& EquipPower() {
		return *(float*)((uintptr_t)this + 0x4);
	}

	float& MountPower() {
		return *(float*)((uintptr_t)this + 0x8);
	}

	int32_t& MountGrade() {
		return *(int32_t*)((uintptr_t)this + 0xC);
	}

	float& ClassPower() {
		return *(float*)((uintptr_t)this + 0x10);
	}

	int32_t& ClassGrade() {
		return *(int32_t*)((uintptr_t)this + 0x14);
	}

	float& PetPower() {
		return *(float*)((uintptr_t)this + 0x18);
	}

	int32_t& PetGrade() {
		return *(int32_t*)((uintptr_t)this + 0x1C);
	}

};};
