#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetHelper"));
	}

	template <typename R = int32_t> static R& MaxPetGrade() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = InventorySlotEntity*> static R GetPetSlotForArmingPet(GameEntity* player, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x11EB908))(0, player, world);
	}
	template <typename R = bool> static R CanAddExpToCurrentPet(GameEntity* player, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x11EBA60))(0, player, world);
	}
	template <typename R = bool> static R IsPetAvailable(ItemEntity* petEntity, GameEntity* player, ICommonContexts* contexts) {
		return ((R (*)(void *, ItemEntity*, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x11EBA84))(0, petEntity, player, contexts);
	}
	template <typename R = bool> static R HasPetWithType(GameEntity* player, ICommonContexts* world, Il2CppString* petType) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x11EBBD0))(0, player, world, petType);
	}
	template <typename R = InventorySlotEntity*> static R GetPetSlotWithType(GameEntity* player, ICommonContexts* world, Il2CppString* petType) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x11EBCEC))(0, player, world, petType);
	}
	template <typename R = ItemEntity*> static R GetPetFromInventory(GameEntity* entity, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x11EBDFC))(0, entity, world);
	}
	template <typename R = bool> static R CanReplacePet(GameEntity* entity, ICommonContexts* world, ItemEntity* newPet) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, ItemEntity*))(Il2CppBase() + 0x11EBFCC))(0, entity, world, newPet);
	}
	template <typename R = float> static R CalcPetPower(ItemEntity* item, ICommonContexts* world, GameEntity* actor) {
		return ((R (*)(void *, ItemEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x11EBFD4))(0, item, world, actor);
	}
	template <typename R = int32_t> static R GetInventoryPetGrade(InventorySlotEntity* inventory, ICommonContexts* world) {
		return ((R (*)(void *, InventorySlotEntity*, ICommonContexts*))(Il2CppBase() + 0x11EC1AC))(0, inventory, world);
	}
	template <typename R = int32_t> static R GetInventoryPetOrder(InventorySlotEntity* inventory, ICommonContexts* world) {
		return ((R (*)(void *, InventorySlotEntity*, ICommonContexts*))(Il2CppBase() + 0x11EC2F4))(0, inventory, world);
	}
	template <typename R = ItemEntity*> static R GradeUpPet(ItemEntity* petEntity, ICommonContexts* world, int32_t newGrade) {
		return ((R (*)(void *, ItemEntity*, ICommonContexts*, int32_t))(Il2CppBase() + 0x11EC430))(0, petEntity, world, newGrade);
	}
	template <typename R = ItemEntity*> static R CheckOrGeneratePet(ItemEntity* petEntity, ICommonContexts* world, int32_t grade, Il2CppArray<Il2CppString*>* overrideSkills) {
		return ((R (*)(void *, ItemEntity*, ICommonContexts*, int32_t, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x11EC808))(0, petEntity, world, grade, overrideSkills);
	}
	template <typename R = bool> static R CanUpgradeSkill(ItemEntity* petEntity, ICommonContexts* world, GameEntity* avatar, int32_t skillIndex) {
		return ((R (*)(void *, ItemEntity*, ICommonContexts*, GameEntity*, int32_t))(Il2CppBase() + 0x11ECB54))(0, petEntity, world, avatar, skillIndex);
	}

};

