#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputButtonsSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputButtonsSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = ITimeManager*> R& _timeManager() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 ICollector1<InputEntity*>* GetTrigger(IContext1<InputEntity*>* context) {
		return ((ICollector1<InputEntity*>* (*)(InputButtonsSystem*, IContext1<InputEntity*>*))(Il2CppBase() + 0x1E41F6C))(this, context);
	}
	template <typename R = bool> R Filter(InputEntity* entity) {
		return ((R (*)(InputButtonsSystem*, InputEntity*))(Il2CppBase() + 0x1E420D0))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<InputEntity*>* entities) {
		return ((R (*)(InputButtonsSystem*, Il2CppList<InputEntity*>*))(Il2CppBase() + 0x1E420D8))(this, entities);
	}
	template <typename R = bool> R DoUseItem(GameEntity* avatar, int32_t inventoryIndex, InputEntity* buttonEntity) {
		return ((R (*)(InputButtonsSystem*, GameEntity*, int32_t, InputEntity*))(Il2CppBase() + 0x1E42F7C))(this, avatar, inventoryIndex, buttonEntity);
	}
	template <typename R = bool> R DoUseItem_1(GameEntity* avatar, InventorySlotEntity* inventory, InputEntity* buttonEntity) {
		return ((R (*)(InputButtonsSystem*, GameEntity*, InventorySlotEntity*, InputEntity*))(Il2CppBase() + 0x1E43000))(this, avatar, inventory, buttonEntity);
	}
	template <typename R = void> R SwitchSneak(GameEntity* avatar) {
		return ((R (*)(InputButtonsSystem*, GameEntity*))(Il2CppBase() + 0x1E43458))(this, avatar);
	}

};

