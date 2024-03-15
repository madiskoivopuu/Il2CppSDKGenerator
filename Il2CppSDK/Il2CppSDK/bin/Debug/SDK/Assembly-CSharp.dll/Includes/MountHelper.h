#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountHelper"));
	}

	 static Il2CppDictionary<int32_t, int32_t>*& MountSkillsToGrade() {
		return *(Il2CppDictionary<int32_t, int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Il2CppDictionary<int32_t, int32_t>*& MountGradeToSkills() {
		return *(Il2CppDictionary<int32_t, int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static Il2CppDictionary<int32_t, ValueTuple2<int32_t, int32_t>*>*& MountsSlotsAndPriceByGrade() {
		return *(Il2CppDictionary<int32_t, ValueTuple2<int32_t, int32_t>*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	 static ValueTuple3<bool, int32_t, int32_t>* GetMountsInventorySlotsAndPriceByGrade(int32_t grade) {
		return ((ValueTuple3<bool, int32_t, int32_t>* (*)(void *, int32_t))(Il2CppBase() + 0x15433C0))(0, grade);
	}
	template <typename R = int32_t> static R CalcMountGrade(ItemEntity* item) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x1543594))(0, item);
	}
	template <typename R = int32_t> static R CalcMountSkillsCount(int32_t grade) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1543668))(0, grade);
	}
	template <typename R = bool> static R IsMountAvailable(ItemEntity* mountEntity, GameEntity* player, ICommonContexts* contexts) {
		return ((R (*)(void *, ItemEntity*, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x15436F0))(0, mountEntity, player, contexts);
	}
	template <typename R = int32_t> static R CalcMountSlotCount(ItemEntity* item, ICommonContexts* world) {
		return ((R (*)(void *, ItemEntity*, ICommonContexts*))(Il2CppBase() + 0x154383C))(0, item, world);
	}
	template <typename R = float> static R CalcMountPower(ItemEntity* item, ICommonContexts* world) {
		return ((R (*)(void *, ItemEntity*, ICommonContexts*))(Il2CppBase() + 0x15439E4))(0, item, world);
	}
	template <typename R = float> static R CalcMountTenacity(ItemEntity* mount, ICommonContexts* world) {
		return ((R (*)(void *, ItemEntity*, ICommonContexts*))(Il2CppBase() + 0x1543B98))(0, mount, world);
	}
	template <typename R = float> static R CalcMountSpeed(ItemEntity* mount, ICommonContexts* world) {
		return ((R (*)(void *, ItemEntity*, ICommonContexts*))(Il2CppBase() + 0x154407C))(0, mount, world);
	}
	 static ValueTuple3<float, float, int32_t>* CalcMountParams(ItemEntity* mount, ICommonContexts* world) {
		return ((ValueTuple3<float, float, int32_t>* (*)(void *, ItemEntity*, ICommonContexts*))(Il2CppBase() + 0x154452C))(0, mount, world);
	}
	template <typename R = ItemEntity*> static R GetMountFromInventory(GameEntity* entity, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x154460C))(0, entity, world);
	}
	 static ValueTuple3<bool, int32_t, int32_t>* CanReplaceMount(GameEntity* entity, ICommonContexts* world, ItemEntity* newMount) {
		return ((ValueTuple3<bool, int32_t, int32_t>* (*)(void *, GameEntity*, ICommonContexts*, ItemEntity*))(Il2CppBase() + 0x15447DC))(0, entity, world, newMount);
	}
	template <typename R = int32_t> static R GetInventoryMountGrade(InventorySlotEntity* inventory, ICommonContexts* world) {
		return ((R (*)(void *, InventorySlotEntity*, ICommonContexts*))(Il2CppBase() + 0x1544B58))(0, inventory, world);
	}
	template <typename R = Il2CppString*> static R GetInventoryMountType(InventorySlotEntity* inventory, ICommonContexts* world) {
		return ((R (*)(void *, InventorySlotEntity*, ICommonContexts*))(Il2CppBase() + 0x1544CB4))(0, inventory, world);
	}
	template <typename R = int32_t> static R GetInventoryMountOrder(InventorySlotEntity* inventory, ICommonContexts* world) {
		return ((R (*)(void *, InventorySlotEntity*, ICommonContexts*))(Il2CppBase() + 0x1544E0C))(0, inventory, world);
	}
	template <typename R = ItemEntity*> static R CheckOrGenerateMount(ItemEntity* mountEntity, ICommonContexts* world, int32_t grade, Il2CppArray<Il2CppString*>* inheritedSkills) {
		return ((R (*)(void *, ItemEntity*, ICommonContexts*, int32_t, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1544F54))(0, mountEntity, world, grade, inheritedSkills);
	}

};

