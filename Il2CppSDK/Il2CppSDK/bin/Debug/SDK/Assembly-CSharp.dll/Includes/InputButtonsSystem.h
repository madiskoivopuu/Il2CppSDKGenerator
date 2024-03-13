#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputButtonsSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputButtonsSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = ITimeManager*> T& _timeManager() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = ICollector1InputEntity*>*> T GetTrigger(IContext1InputEntity*>* context) {
		return ((T (*)(InputButtonsSystem*, IContext1InputEntity*>*))(Il2CppBase() + 0x1E41F6C))(this, context);
	}
	template <typename T = bool> T Filter(InputEntity* entity) {
		return ((T (*)(InputButtonsSystem*, InputEntity*))(Il2CppBase() + 0x1E420D0))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<InputEntity*>* entities) {
		return ((T (*)(InputButtonsSystem*, Il2CppList<InputEntity*>*))(Il2CppBase() + 0x1E420D8))(this, entities);
	}
	template <typename T = bool> T DoUseItem(GameEntity* avatar, int32_t inventoryIndex, InputEntity* buttonEntity) {
		return ((T (*)(InputButtonsSystem*, GameEntity*, int32_t, InputEntity*))(Il2CppBase() + 0x1E42F7C))(this, avatar, inventoryIndex, buttonEntity);
	}
	template <typename T = bool> T DoUseItem_1(GameEntity* avatar, InventorySlotEntity* inventory, InputEntity* buttonEntity) {
		return ((T (*)(InputButtonsSystem*, GameEntity*, InventorySlotEntity*, InputEntity*))(Il2CppBase() + 0x1E43000))(this, avatar, inventory, buttonEntity);
	}
	template <typename T = void> T SwitchSneak(GameEntity* avatar) {
		return ((T (*)(InputButtonsSystem*, GameEntity*))(Il2CppBase() + 0x1E43458))(this, avatar);
	}

};

