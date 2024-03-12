#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInventoryItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInventoryItem"));
	}


	template <typename T = uintptr_t> T get_Slot() {
		return ((T (*)(IInventoryItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Lock(bool visual) {
		return ((T (*)(IInventoryItem*, bool))(Il2CppBase() + 0x0))(this, visual);
	}
	template <typename T = void> T Unlock(bool visual) {
		return ((T (*)(IInventoryItem*, bool))(Il2CppBase() + 0x0))(this, visual);
	}
	template <typename T = bool> T get_DragEnable() {
		return ((T (*)(IInventoryItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_DragEnable(bool value) {
		return ((T (*)(IInventoryItem*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_ScrollEnable() {
		return ((T (*)(IInventoryItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsScrolling() {
		return ((T (*)(IInventoryItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_Locked() {
		return ((T (*)(IInventoryItem*))(Il2CppBase() + 0x0))(this);
	}

};

}
