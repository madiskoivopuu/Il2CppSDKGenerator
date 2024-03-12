#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftHelper"));
	}


	template <typename T = uintptr_t> static T GetRecipe(uintptr_t world, uintptr_t entity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x13436C8))(0, world, entity);
	}
	template <typename T = uintptr_t> static T GetCraftRecipe(uintptr_t world, uintptr_t entity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1343764))(0, world, entity);
	}
	template <typename T = uintptr_t> static T GetProductionRecipe(uintptr_t world, uintptr_t entityData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1343CE0))(0, world, entityData);
	}
	template <typename T = int64_t> static T GetCraftTime(uintptr_t recipe, float boost) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x1343EB0))(0, recipe, boost);
	}
	template <typename T = float> static T GetCraftBoost(uintptr_t world, uintptr_t furniture, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x1343F10))(0, world, furniture, playerId);
	}
	template <typename T = bool> static T IsSlotNotFull(uintptr_t world, uintptr_t slot, uintptr_t entity) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1342DC8))(0, world, slot, entity);
	}
	template <typename T = int32_t> static T GetFuelSlotIndex(uintptr_t craft) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x13440FC))(0, craft);
	}
	template <typename T = int32_t> static T GetMinOutSlots(uintptr_t craft) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1344128))(0, craft);
	}
	template <typename T = int32_t> static T GetMaxOutSlotsCount(uintptr_t craft) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1342D5C))(0, craft);
	}
	template <typename T = int32_t> static T GetUnlockedOutSlotsCount(uintptr_t world, uintptr_t entity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1342F94))(0, world, entity);
	}
	template <typename T = bool> static T HasDeadWorker(uintptr_t context, uintptr_t entity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1344148))(0, context, entity);
	}

};

}
