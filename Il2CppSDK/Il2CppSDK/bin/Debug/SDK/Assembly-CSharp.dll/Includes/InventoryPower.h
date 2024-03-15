#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryPower
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryPower"));
	}

	template <typename R = float> R& HealthPower() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& EquipPower() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = float> R& MountPower() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& MountGrade() {
		return *(R*)((uintptr_t)this + 0xC);
	}
	template <typename R = float> R& ClassPower() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& ClassGrade() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& PetPower() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& PetGrade() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = float> R SummaryPower() {
		return ((R (*)(InventoryPower*))(Il2CppBase() + 0x12327B8))(this);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(InventoryPower*, uintptr_t))(Il2CppBase() + 0x12327DC))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(InventoryPower*, uintptr_t))(Il2CppBase() + 0x1232988))(this, writer);
	}

};

