#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftHelper"));
	}


	template <typename T = RecipeEntity*> static T GetRecipe(ICommonContexts* world, GameEntity* entity) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x13436C8))(0, world, entity);
	}
	template <typename T = RecipeEntity*> static T GetCraftRecipe(ICommonContexts* world, GameEntity* entity) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1343764))(0, world, entity);
	}
	template <typename T = RecipeEntity*> static T GetProductionRecipe(ICommonContexts* world, GameDataEntity* entityData) {
		return ((T (*)(void *, ICommonContexts*, GameDataEntity*))(Il2CppBase() + 0x1343CE0))(0, world, entityData);
	}
	template <typename T = int64_t> static T GetCraftTime(RecipeEntity* recipe, float boost) {
		return ((T (*)(void *, RecipeEntity*, float))(Il2CppBase() + 0x1343EB0))(0, recipe, boost);
	}
	template <typename T = float> static T GetCraftBoost(ICommonContexts* world, GameEntity* furniture, int64_t playerId) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, int64_t))(Il2CppBase() + 0x1343F10))(0, world, furniture, playerId);
	}
	template <typename T = bool> static T IsSlotNotFull(ICommonContexts* world, InventorySlotEntity* slot, GameEntity* entity) {
		return ((T (*)(void *, ICommonContexts*, InventorySlotEntity*, GameEntity*))(Il2CppBase() + 0x1342DC8))(0, world, slot, entity);
	}
	template <typename T = int32_t> static T GetFuelSlotIndex(CraftComponent* craft) {
		return ((T (*)(void *, CraftComponent*))(Il2CppBase() + 0x13440FC))(0, craft);
	}
	template <typename T = int32_t> static T GetMinOutSlots(CraftComponent* craft) {
		return ((T (*)(void *, CraftComponent*))(Il2CppBase() + 0x1344128))(0, craft);
	}
	template <typename T = int32_t> static T GetMaxOutSlotsCount(CraftComponent* craft) {
		return ((T (*)(void *, CraftComponent*))(Il2CppBase() + 0x1342D5C))(0, craft);
	}
	template <typename T = int32_t> static T GetUnlockedOutSlotsCount(ICommonContexts* world, GameEntity* entity) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1342F94))(0, world, entity);
	}
	template <typename T = bool> static T HasDeadWorker(GameContext* context, GameEntity* entity) {
		return ((T (*)(void *, GameContext*, GameEntity*))(Il2CppBase() + 0x1344148))(0, context, entity);
	}

};

