#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "RuneItem" 

class RuneItemSplit: RuneItem
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
	template <typename T = void> T Show(uintptr_t panel, uintptr_t entity, int32_t index, Il2CppVector2 position, uintptr_t parent) {
		return ((T (*)(RuneItemSplit*, uintptr_t, uintptr_t, int32_t, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x1353AD8))(this, panel, entity, index, position, parent);
	}
	template <typename T = void> T Close() {
		return ((T (*)(RuneItemSplit*))(Il2CppBase() + 0x1353BAC))(this);
	}

};

}
