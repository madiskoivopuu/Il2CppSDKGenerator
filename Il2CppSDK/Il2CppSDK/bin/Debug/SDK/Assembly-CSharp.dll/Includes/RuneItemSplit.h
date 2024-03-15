#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "RuneItem.h" 

class RuneItemSplit : public RuneItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneItemSplit"));
	}

	template <typename R = bool> R& IsShowed() {
		return *(R*)((uintptr_t)this + 0x100);
	}

	template <typename R = bool> R get_IsShowed() {
		return ((R (*)(RuneItemSplit*))(Il2CppBase() + 0x1353AC4))(this);
	}
	template <typename R = void> R set_IsShowed(bool value) {
		return ((R (*)(RuneItemSplit*, bool))(Il2CppBase() + 0x1353ACC))(this, value);
	}
	template <typename R = void> R Show(IRuneInventoryPanel* panel, GameEntity* entity, int32_t index, uintptr_t position, uintptr_t parent) {
		return ((R (*)(RuneItemSplit*, IRuneInventoryPanel*, GameEntity*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1353AD8))(this, panel, entity, index, position, parent);
	}
	template <typename R = void> R Close() {
		return ((R (*)(RuneItemSplit*))(Il2CppBase() + 0x1353BAC))(this);
	}

};

