#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputButtonsSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputButtonsSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _timeManager() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(InputButtonsSystem*, void*))(Il2CppBase() + 0x1E41F6C))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(InputButtonsSystem*, uintptr_t))(Il2CppBase() + 0x1E420D0))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(InputButtonsSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1E420D8))(this, entities);
	}
	template <typename T = bool> T DoUseItem(uintptr_t avatar, int32_t inventoryIndex, uintptr_t buttonEntity) {
		return ((T (*)(InputButtonsSystem*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1E42F7C))(this, avatar, inventoryIndex, buttonEntity);
	}
	template <typename T = bool> T DoUseItem_1(uintptr_t avatar, uintptr_t inventory, uintptr_t buttonEntity) {
		return ((T (*)(InputButtonsSystem*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E43000))(this, avatar, inventory, buttonEntity);
	}
	template <typename T = void> T SwitchSneak(uintptr_t avatar) {
		return ((T (*)(InputButtonsSystem*, uintptr_t))(Il2CppBase() + 0x1E43458))(this, avatar);
	}

};

}
