#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftHelper"));
	}


	template <typename R = RecipeEntity*> static R GetRecipe(ICommonContexts* world, GameEntity* entity) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x13436C8))(0, world, entity);
	}
	template <typename R = RecipeEntity*> static R GetCraftRecipe(ICommonContexts* world, GameEntity* entity) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1343764))(0, world, entity);
	}
	template <typename R = RecipeEntity*> static R GetProductionRecipe(ICommonContexts* world, GameDataEntity* entityData) {
		return ((R (*)(void *, ICommonContexts*, GameDataEntity*))(Il2CppBase() + 0x1343CE0))(0, world, entityData);
	}
	template <typename R = int64_t> static R GetCraftTime(RecipeEntity* recipe, float boost) {
		return ((R (*)(void *, RecipeEntity*, float))(Il2CppBase() + 0x1343EB0))(0, recipe, boost);
	}
	template <typename R = float> static R GetCraftBoost(ICommonContexts* world, GameEntity* furniture, int64_t playerId) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*, int64_t))(Il2CppBase() + 0x1343F10))(0, world, furniture, playerId);
	}
	template <typename R = bool> static R IsSlotNotFull(ICommonContexts* world, InventorySlotEntity* slot, GameEntity* entity) {
		return ((R (*)(void *, ICommonContexts*, InventorySlotEntity*, GameEntity*))(Il2CppBase() + 0x1342DC8))(0, world, slot, entity);
	}
	template <typename R = int32_t> static R GetFuelSlotIndex(CraftComponent* craft) {
		return ((R (*)(void *, CraftComponent*))(Il2CppBase() + 0x13440FC))(0, craft);
	}
	template <typename R = int32_t> static R GetMinOutSlots(CraftComponent* craft) {
		return ((R (*)(void *, CraftComponent*))(Il2CppBase() + 0x1344128))(0, craft);
	}
	template <typename R = int32_t> static R GetMaxOutSlotsCount(CraftComponent* craft) {
		return ((R (*)(void *, CraftComponent*))(Il2CppBase() + 0x1342D5C))(0, craft);
	}
	template <typename R = int32_t> static R GetUnlockedOutSlotsCount(ICommonContexts* world, GameEntity* entity) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1342F94))(0, world, entity);
	}
	template <typename R = bool> static R HasDeadWorker(GameContext* context, GameEntity* entity) {
		return ((R (*)(void *, GameContext*, GameEntity*))(Il2CppBase() + 0x1344148))(0, context, entity);
	}

};

