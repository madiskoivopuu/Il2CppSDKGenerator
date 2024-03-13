#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "RuneItem.h" 

class RuneItemSplit : public RuneItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneItemSplit"));
	}

	template <typename T = bool> T& IsShowed() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = bool> T get_IsShowed() {
		return ((T (*)(RuneItemSplit*))(Il2CppBase() + 0x1353AC4))(this);
	}
	template <typename T = void> T set_IsShowed(bool value) {
		return ((T (*)(RuneItemSplit*, bool))(Il2CppBase() + 0x1353ACC))(this, value);
	}
	template <typename T = void> T Show(IRuneInventoryPanel* panel, GameEntity* entity, int32_t index, uintptr_t position, uintptr_t parent) {
		return ((T (*)(RuneItemSplit*, IRuneInventoryPanel*, GameEntity*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1353AD8))(this, panel, entity, index, position, parent);
	}
	template <typename T = void> T Close() {
		return ((T (*)(RuneItemSplit*))(Il2CppBase() + 0x1353BAC))(this);
	}

};

