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
	template <typename T = Il2CppDictionary<int32_t, ValueTuple2int32_t, int32_t>*>*> static T& MountsSlotsAndPriceByGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = ValueTuple3bool, int32_t, int32_t>*> static T GetMountsInventorySlotsAndPriceByGrade(int32_t grade) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x15433C0))(0, grade);
	}
	template <typename T = int32_t> static T CalcMountGrade(ItemEntity* item) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x1543594))(0, item);
	}
	template <typename T = int32_t> static T CalcMountSkillsCount(int32_t grade) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1543668))(0, grade);
	}
	template <typename T = bool> static T IsMountAvailable(ItemEntity* mountEntity, GameEntity* player, ICommonContexts* contexts) {
		return ((T (*)(void *, ItemEntity*, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x15436F0))(0, mountEntity, player, contexts);
	}
	template <typename T = int32_t> static T CalcMountSlotCount(ItemEntity* item, ICommonContexts* world) {
		return ((T (*)(void *, ItemEntity*, ICommonContexts*))(Il2CppBase() + 0x154383C))(0, item, world);
	}
	template <typename T = float> static T CalcMountPower(ItemEntity* item, ICommonContexts* world) {
		return ((T (*)(void *, ItemEntity*, ICommonContexts*))(Il2CppBase() + 0x15439E4))(0, item, world);
	}
	template <typename T = float> static T CalcMountTenacity(ItemEntity* mount, ICommonContexts* world) {
		return ((T (*)(void *, ItemEntity*, ICommonContexts*))(Il2CppBase() + 0x1543B98))(0, mount, world);
	}
	template <typename T = float> static T CalcMountSpeed(ItemEntity* mount, ICommonContexts* world) {
		return ((T (*)(void *, ItemEntity*, ICommonContexts*))(Il2CppBase() + 0x154407C))(0, mount, world);
	}
	template <typename T = ValueTuple3float, float, int32_t>*> static T CalcMountParams(ItemEntity* mount, ICommonContexts* world) {
		return ((T (*)(void *, ItemEntity*, ICommonContexts*))(Il2CppBase() + 0x154452C))(0, mount, world);
	}
	template <typename T = ItemEntity*> static T GetMountFromInventory(GameEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x154460C))(0, entity, world);
	}
	template <typename T = ValueTuple3bool, int32_t, int32_t>*> static T CanReplaceMount(GameEntity* entity, ICommonContexts* world, ItemEntity* newMount) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, ItemEntity*))(Il2CppBase() + 0x15447DC))(0, entity, world, newMount);
	}
	template <typename T = int32_t> static T GetInventoryMountGrade(InventorySlotEntity* inventory, ICommonContexts* world) {
		return ((T (*)(void *, InventorySlotEntity*, ICommonContexts*))(Il2CppBase() + 0x1544B58))(0, inventory, world);
	}
	template <typename T = Il2CppString*> static T GetInventoryMountType(InventorySlotEntity* inventory, ICommonContexts* world) {
		return ((T (*)(void *, InventorySlotEntity*, ICommonContexts*))(Il2CppBase() + 0x1544CB4))(0, inventory, world);
	}
	template <typename T = int32_t> static T GetInventoryMountOrder(InventorySlotEntity* inventory, ICommonContexts* world) {
		return ((T (*)(void *, InventorySlotEntity*, ICommonContexts*))(Il2CppBase() + 0x1544E0C))(0, inventory, world);
	}
	template <typename T = ItemEntity*> static T CheckOrGenerateMount(ItemEntity* mountEntity, ICommonContexts* world, int32_t grade, Il2CppArray<uintptr_t>* inheritedSkills) {
		return ((T (*)(void *, ItemEntity*, ICommonContexts*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1544F54))(0, mountEntity, world, grade, inheritedSkills);
	}

};

