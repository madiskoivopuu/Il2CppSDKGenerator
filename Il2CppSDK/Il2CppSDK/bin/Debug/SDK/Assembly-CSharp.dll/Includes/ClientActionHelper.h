#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientActionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientActionHelper"));
	}


	template <typename T = void> static T InterruptCameraFollow(GameEntity* actor) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x18F9CC4))(0, actor);
	}
	template <typename T = ValueTuple3ActionBreakReasons*, Il2CppString*, ActionEntity*>*> static T StartInteract(GameEntity* actor, GameEntity* target, bool checkMinRadius) {
		return ((T (*)(void *, GameEntity*, GameEntity*, bool))(Il2CppBase() + 0x18F9E2C))(0, actor, target, checkMinRadius);
	}
	template <typename T = void> static T PvPChestTryUnlockAnalytics(GameEntity* target) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x18FB46C))(0, target);
	}
	template <typename T = bool> static T CanUseFromInventory(GameEntity* actor, InventorySlotEntity* inventory, bool chest) {
		return ((T (*)(void *, GameEntity*, InventorySlotEntity*, bool))(Il2CppBase() + 0x18FBAF0))(0, actor, inventory, chest);
	}
	template <typename T = ValueTuple3ActionBreakReasons*, Il2CppString*, ActionEntity*>*> static T StartUseItem(GameEntity* actor, Il2CppString* itemName, float angle, GameEntity* target) {
		return ((T (*)(void *, GameEntity*, Il2CppString*, float, GameEntity*))(Il2CppBase() + 0x18FBCE0))(0, actor, itemName, angle, target);
	}
	template <typename T = ValueTuple3ActionBreakReasons*, Il2CppString*, ActionEntity*>*> static T StartUseItemFromInventory(GameEntity* actor, int32_t inventoryIndex, float angle, GameEntity* target) {
		return ((T (*)(void *, GameEntity*, int32_t, float, GameEntity*))(Il2CppBase() + 0x18FCDCC))(0, actor, inventoryIndex, angle, target);
	}
	template <typename T = ValueTuple3ActionBreakReasons*, Il2CppString*, ActionEntity*>*> static T StartUseInventoryItem(GameEntity* actor, int32_t inventoryItemId, float angle, GameEntity* target) {
		return ((T (*)(void *, GameEntity*, int32_t, float, GameEntity*))(Il2CppBase() + 0x18FD088))(0, actor, inventoryItemId, angle, target);
	}
	template <typename T = void> static T EquipInventoryItem(GameEntity* actor, int32_t inventoryItemId) {
		return ((T (*)(void *, GameEntity*, int32_t))(Il2CppBase() + 0x18FD504))(0, actor, inventoryItemId);
	}
	template <typename T = ValueTuple3ActionBreakReasons*, Il2CppString*, ActionEntity*>*> static T StartUseItem_1(GameEntity* actor, ItemEntity* item, int32_t inventoryItemId, float angle, GameEntity* target) {
		return ((T (*)(void *, GameEntity*, ItemEntity*, int32_t, float, GameEntity*))(Il2CppBase() + 0x18FBF20))(0, actor, item, inventoryItemId, angle, target);
	}
	template <typename T = void> static T MoveToTarget(GameEntity* actor, ActionEntity* action) {
		return ((T (*)(void *, GameEntity*, ActionEntity*))(Il2CppBase() + 0x18FB954))(0, actor, action);
	}
	template <typename T = void> static T InputInterrupt(GameEntity* actor, GameEntity* target, ActionType* actionType, Il2CppString* itemName, ActionEntity* actionData) {
		return ((T (*)(void *, GameEntity*, GameEntity*, ActionType*, Il2CppString*, ActionEntity*))(Il2CppBase() + 0x18FAFD0))(0, actor, target, actionType, itemName, actionData);
	}

};

