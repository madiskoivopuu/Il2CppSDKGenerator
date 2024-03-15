#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientActionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientActionHelper"));
	}


	template <typename R = void> static R InterruptCameraFollow(GameEntity* actor) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x18F9CC4))(0, actor);
	}
	 static ValueTuple3<ActionBreakReasons, Il2CppString*, ActionEntity*>* StartInteract(GameEntity* actor, GameEntity* target, bool checkMinRadius) {
		return ((ValueTuple3<ActionBreakReasons, Il2CppString*, ActionEntity*>* (*)(void *, GameEntity*, GameEntity*, bool))(Il2CppBase() + 0x18F9E2C))(0, actor, target, checkMinRadius);
	}
	template <typename R = void> static R PvPChestTryUnlockAnalytics(GameEntity* target) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x18FB46C))(0, target);
	}
	template <typename R = bool> static R CanUseFromInventory(GameEntity* actor, InventorySlotEntity* inventory, bool chest) {
		return ((R (*)(void *, GameEntity*, InventorySlotEntity*, bool))(Il2CppBase() + 0x18FBAF0))(0, actor, inventory, chest);
	}
	 static ValueTuple3<ActionBreakReasons, Il2CppString*, ActionEntity*>* StartUseItem(GameEntity* actor, Il2CppString* itemName, float angle, GameEntity* target) {
		return ((ValueTuple3<ActionBreakReasons, Il2CppString*, ActionEntity*>* (*)(void *, GameEntity*, Il2CppString*, float, GameEntity*))(Il2CppBase() + 0x18FBCE0))(0, actor, itemName, angle, target);
	}
	 static ValueTuple3<ActionBreakReasons, Il2CppString*, ActionEntity*>* StartUseItemFromInventory(GameEntity* actor, int32_t inventoryIndex, float angle, GameEntity* target) {
		return ((ValueTuple3<ActionBreakReasons, Il2CppString*, ActionEntity*>* (*)(void *, GameEntity*, int32_t, float, GameEntity*))(Il2CppBase() + 0x18FCDCC))(0, actor, inventoryIndex, angle, target);
	}
	 static ValueTuple3<ActionBreakReasons, Il2CppString*, ActionEntity*>* StartUseInventoryItem(GameEntity* actor, int32_t inventoryItemId, float angle, GameEntity* target) {
		return ((ValueTuple3<ActionBreakReasons, Il2CppString*, ActionEntity*>* (*)(void *, GameEntity*, int32_t, float, GameEntity*))(Il2CppBase() + 0x18FD088))(0, actor, inventoryItemId, angle, target);
	}
	template <typename R = void> static R EquipInventoryItem(GameEntity* actor, int32_t inventoryItemId) {
		return ((R (*)(void *, GameEntity*, int32_t))(Il2CppBase() + 0x18FD504))(0, actor, inventoryItemId);
	}
	 static ValueTuple3<ActionBreakReasons, Il2CppString*, ActionEntity*>* StartUseItem_1(GameEntity* actor, ItemEntity* item, int32_t inventoryItemId, float angle, GameEntity* target) {
		return ((ValueTuple3<ActionBreakReasons, Il2CppString*, ActionEntity*>* (*)(void *, GameEntity*, ItemEntity*, int32_t, float, GameEntity*))(Il2CppBase() + 0x18FBF20))(0, actor, item, inventoryItemId, angle, target);
	}
	template <typename R = void> static R MoveToTarget(GameEntity* actor, ActionEntity* action) {
		return ((R (*)(void *, GameEntity*, ActionEntity*))(Il2CppBase() + 0x18FB954))(0, actor, action);
	}
	template <typename R = void> static R InputInterrupt(GameEntity* actor, GameEntity* target, ActionType actionType, Il2CppString* itemName, ActionEntity* actionData) {
		return ((R (*)(void *, GameEntity*, GameEntity*, ActionType, Il2CppString*, ActionEntity*))(Il2CppBase() + 0x18FAFD0))(0, actor, target, actionType, itemName, actionData);
	}

};

