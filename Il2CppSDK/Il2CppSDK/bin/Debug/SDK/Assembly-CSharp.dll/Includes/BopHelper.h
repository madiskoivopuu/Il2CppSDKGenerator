#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BopHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BopHelper"));
	}


	template <typename T = bool> static T IsBop(ItemEntity* item, ICommonContexts* world) {
		return ((T (*)(void *, ItemEntity*, ICommonContexts*))(Il2CppBase() + 0x16C9750))(0, item, world);
	}
	template <typename T = bool> static T BopCheck(InventorySlotEntity* fromInventory, ICommonContexts* world, GameEntity* toEntity, InventorySlotEntity* toInventory) {
		return ((T (*)(void *, InventorySlotEntity*, ICommonContexts*, GameEntity*, InventorySlotEntity*))(Il2CppBase() + 0x16C97B4))(0, fromInventory, world, toEntity, toInventory);
	}
	template <typename T = bool> static T BopCheck_1(GameEntity* fromEntity, GameEntity* toEntity) {
		return ((T (*)(void *, GameEntity*, GameEntity*))(Il2CppBase() + 0x16C9B84))(0, fromEntity, toEntity);
	}

};

