#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientActionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientActionHelper"));
	}


	template <typename T = void> static T InterruptCameraFollow(uintptr_t actor) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18F9CC4))(0, actor);
	}
	template <typename T = void*> static T StartInteract(uintptr_t actor, uintptr_t target, bool checkMinRadius) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x18F9E2C))(0, actor, target, checkMinRadius);
	}
	template <typename T = void> static T PvPChestTryUnlockAnalytics(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18FB46C))(0, target);
	}
	template <typename T = bool> static T CanUseFromInventory(uintptr_t actor, uintptr_t inventory, bool chest) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x18FBAF0))(0, actor, inventory, chest);
	}
	template <typename T = void*> static T StartUseItem(uintptr_t actor, Il2CppString* itemName, float angle, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, float, uintptr_t))(Il2CppBase() + 0x18FBCE0))(0, actor, itemName, angle, target);
	}
	template <typename T = void*> static T StartUseItemFromInventory(uintptr_t actor, int32_t inventoryIndex, float angle, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, int32_t, float, uintptr_t))(Il2CppBase() + 0x18FCDCC))(0, actor, inventoryIndex, angle, target);
	}
	template <typename T = void*> static T StartUseInventoryItem(uintptr_t actor, int32_t inventoryItemId, float angle, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, int32_t, float, uintptr_t))(Il2CppBase() + 0x18FD088))(0, actor, inventoryItemId, angle, target);
	}
	template <typename T = void> static T EquipInventoryItem(uintptr_t actor, int32_t inventoryItemId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x18FD504))(0, actor, inventoryItemId);
	}
	template <typename T = void*> static T StartUseItem_1(uintptr_t actor, uintptr_t item, int32_t inventoryItemId, float angle, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, float, uintptr_t))(Il2CppBase() + 0x18FBF20))(0, actor, item, inventoryItemId, angle, target);
	}
	template <typename T = void> static T MoveToTarget(uintptr_t actor, uintptr_t action) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x18FB954))(0, actor, action);
	}
	template <typename T = void> static T InputInterrupt(uintptr_t actor, uintptr_t target, uintptr_t actionType, Il2CppString* itemName, uintptr_t actionData) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x18FAFD0))(0, actor, target, actionType, itemName, actionData);
	}

};

}
