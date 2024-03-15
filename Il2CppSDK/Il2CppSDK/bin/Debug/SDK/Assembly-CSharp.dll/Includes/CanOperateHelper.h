#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CanOperateHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CanOperateHelper"));
	}


	 static ValueTuple2bool, Il2CppString*>* CanOperate(CanOperateComponent* component, GameEntity* entity, GameEntity* target, ICommonContexts* world) {
		return ((ValueTuple2bool, Il2CppString*>* (*)(void *, CanOperateComponent*, GameEntity*, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x15B5D5C))(0, component, entity, target, world);
	}
	 static ValueTuple2bool, Il2CppString*>* CanOperate_1(CanOperateComponent* component, InventorySlotEntity* fromInventory, InventorySlotEntity* toInventory, ICommonContexts* world) {
		return ((ValueTuple2bool, Il2CppString*>* (*)(void *, CanOperateComponent*, InventorySlotEntity*, InventorySlotEntity*, ICommonContexts*))(Il2CppBase() + 0x15B5E94))(0, component, fromInventory, toInventory, world);
	}

};

