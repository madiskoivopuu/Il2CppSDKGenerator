#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryPower
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryPower"));
	}

	template <typename T = float> T& HealthPower() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& EquipPower() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& MountPower() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& MountGrade() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& ClassPower() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ClassGrade() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& PetPower() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& PetGrade() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = float> T SummaryPower() {
		return ((T (*)(InventoryPower*))(Il2CppBase() + 0x12327B8))(this);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(InventoryPower*, uintptr_t))(Il2CppBase() + 0x12327DC))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(InventoryPower*, uintptr_t))(Il2CppBase() + 0x1232988))(this, writer);
	}

};

}
