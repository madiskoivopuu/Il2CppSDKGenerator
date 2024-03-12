#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountHelper"));
	}

	template <typename T = Il2CppDictionary<int32_t, int32_t>*> static T& MountSkillsToGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> static T& MountGradeToSkills() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<int32_t, void*>*> static T& MountsSlotsAndPriceByGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void*> static T GetMountsInventorySlotsAndPriceByGrade(int32_t grade) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x15433C0))(0, grade);
	}
	template <typename T = int32_t> static T CalcMountGrade(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1543594))(0, item);
	}
	template <typename T = int32_t> static T CalcMountSkillsCount(int32_t grade) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1543668))(0, grade);
	}
	template <typename T = bool> static T IsMountAvailable(uintptr_t mountEntity, uintptr_t player, uintptr_t contexts) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x15436F0))(0, mountEntity, player, contexts);
	}
	template <typename T = int32_t> static T CalcMountSlotCount(uintptr_t item, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x154383C))(0, item, world);
	}
	template <typename T = float> static T CalcMountPower(uintptr_t item, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x15439E4))(0, item, world);
	}
	template <typename T = float> static T CalcMountTenacity(uintptr_t mount, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1543B98))(0, mount, world);
	}
	template <typename T = float> static T CalcMountSpeed(uintptr_t mount, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x154407C))(0, mount, world);
	}
	template <typename T = void*> static T CalcMountParams(uintptr_t mount, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x154452C))(0, mount, world);
	}
	template <typename T = uintptr_t> static T GetMountFromInventory(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x154460C))(0, entity, world);
	}
	template <typename T = void*> static T CanReplaceMount(uintptr_t entity, uintptr_t world, uintptr_t newMount) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x15447DC))(0, entity, world, newMount);
	}
	template <typename T = int32_t> static T GetInventoryMountGrade(uintptr_t inventory, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1544B58))(0, inventory, world);
	}
	template <typename T = Il2CppString*> static T GetInventoryMountType(uintptr_t inventory, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1544CB4))(0, inventory, world);
	}
	template <typename T = int32_t> static T GetInventoryMountOrder(uintptr_t inventory, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1544E0C))(0, inventory, world);
	}
	template <typename T = uintptr_t> static T CheckOrGenerateMount(uintptr_t mountEntity, uintptr_t world, int32_t grade, Il2CppArray<uintptr_t>* inheritedSkills) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1544F54))(0, mountEntity, world, grade, inheritedSkills);
	}

};

}
