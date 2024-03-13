#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetHelper"));
	}

	template <typename T = int32_t> static T& MaxPetGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = InventorySlotEntity*> static T GetPetSlotForArmingPet(GameEntity* player, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x11EB908))(0, player, world);
	}
	template <typename T = bool> static T CanAddExpToCurrentPet(GameEntity* player, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x11EBA60))(0, player, world);
	}
	template <typename T = bool> static T IsPetAvailable(ItemEntity* petEntity, GameEntity* player, ICommonContexts* contexts) {
		return ((T (*)(void *, ItemEntity*, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x11EBA84))(0, petEntity, player, contexts);
	}
	template <typename T = bool> static T HasPetWithType(GameEntity* player, ICommonContexts* world, Il2CppString* petType) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x11EBBD0))(0, player, world, petType);
	}
	template <typename T = InventorySlotEntity*> static T GetPetSlotWithType(GameEntity* player, ICommonContexts* world, Il2CppString* petType) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x11EBCEC))(0, player, world, petType);
	}
	template <typename T = ItemEntity*> static T GetPetFromInventory(GameEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x11EBDFC))(0, entity, world);
	}
	template <typename T = bool> static T CanReplacePet(GameEntity* entity, ICommonContexts* world, ItemEntity* newPet) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, ItemEntity*))(Il2CppBase() + 0x11EBFCC))(0, entity, world, newPet);
	}
	template <typename T = float> static T CalcPetPower(ItemEntity* item, ICommonContexts* world, GameEntity* actor) {
		return ((T (*)(void *, ItemEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x11EBFD4))(0, item, world, actor);
	}
	template <typename T = int32_t> static T GetInventoryPetGrade(InventorySlotEntity* inventory, ICommonContexts* world) {
		return ((T (*)(void *, InventorySlotEntity*, ICommonContexts*))(Il2CppBase() + 0x11EC1AC))(0, inventory, world);
	}
	template <typename T = int32_t> static T GetInventoryPetOrder(InventorySlotEntity* inventory, ICommonContexts* world) {
		return ((T (*)(void *, InventorySlotEntity*, ICommonContexts*))(Il2CppBase() + 0x11EC2F4))(0, inventory, world);
	}
	template <typename T = ItemEntity*> static T GradeUpPet(ItemEntity* petEntity, ICommonContexts* world, int32_t newGrade) {
		return ((T (*)(void *, ItemEntity*, ICommonContexts*, int32_t))(Il2CppBase() + 0x11EC430))(0, petEntity, world, newGrade);
	}
	template <typename T = ItemEntity*> static T CheckOrGeneratePet(ItemEntity* petEntity, ICommonContexts* world, int32_t grade, Il2CppArray<uintptr_t>* overrideSkills) {
		return ((T (*)(void *, ItemEntity*, ICommonContexts*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x11EC808))(0, petEntity, world, grade, overrideSkills);
	}
	template <typename T = bool> static T CanUpgradeSkill(ItemEntity* petEntity, ICommonContexts* world, GameEntity* avatar, int32_t skillIndex) {
		return ((T (*)(void *, ItemEntity*, ICommonContexts*, GameEntity*, int32_t))(Il2CppBase() + 0x11ECB54))(0, petEntity, world, avatar, skillIndex);
	}

};

