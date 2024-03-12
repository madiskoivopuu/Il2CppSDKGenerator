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

	template <typename T = uintptr_t> static T GetPetSlotForArmingPet(uintptr_t player, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x11EB908))(0, player, world);
	}
	template <typename T = bool> static T CanAddExpToCurrentPet(uintptr_t player, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x11EBA60))(0, player, world);
	}
	template <typename T = bool> static T IsPetAvailable(uintptr_t petEntity, uintptr_t player, uintptr_t contexts) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x11EBA84))(0, petEntity, player, contexts);
	}
	template <typename T = bool> static T HasPetWithType(uintptr_t player, uintptr_t world, Il2CppString* petType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x11EBBD0))(0, player, world, petType);
	}
	template <typename T = uintptr_t> static T GetPetSlotWithType(uintptr_t player, uintptr_t world, Il2CppString* petType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x11EBCEC))(0, player, world, petType);
	}
	template <typename T = uintptr_t> static T GetPetFromInventory(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x11EBDFC))(0, entity, world);
	}
	template <typename T = bool> static T CanReplacePet(uintptr_t entity, uintptr_t world, uintptr_t newPet) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x11EBFCC))(0, entity, world, newPet);
	}
	template <typename T = float> static T CalcPetPower(uintptr_t item, uintptr_t world, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x11EBFD4))(0, item, world, actor);
	}
	template <typename T = int32_t> static T GetInventoryPetGrade(uintptr_t inventory, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x11EC1AC))(0, inventory, world);
	}
	template <typename T = int32_t> static T GetInventoryPetOrder(uintptr_t inventory, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x11EC2F4))(0, inventory, world);
	}
	template <typename T = uintptr_t> static T GradeUpPet(uintptr_t petEntity, uintptr_t world, int32_t newGrade) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x11EC430))(0, petEntity, world, newGrade);
	}
	template <typename T = uintptr_t> static T CheckOrGeneratePet(uintptr_t petEntity, uintptr_t world, int32_t grade, Il2CppArray<uintptr_t>* overrideSkills) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x11EC808))(0, petEntity, world, grade, overrideSkills);
	}
	template <typename T = bool> static T CanUpgradeSkill(uintptr_t petEntity, uintptr_t world, uintptr_t avatar, int32_t skillIndex) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x11ECB54))(0, petEntity, world, avatar, skillIndex);
	}

};

}
