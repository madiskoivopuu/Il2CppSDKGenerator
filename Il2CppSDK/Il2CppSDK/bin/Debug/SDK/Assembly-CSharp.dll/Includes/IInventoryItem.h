#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInventoryItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInventoryItem"));
	}


	template <typename R = InventorySlot*> R get_Slot() {
		return ((R (*)(IInventoryItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Lock(bool visual) {
		return ((R (*)(IInventoryItem*, bool))(Il2CppBase() + 0x0))(this, visual);
	}
	template <typename R = void> R Unlock(bool visual) {
		return ((R (*)(IInventoryItem*, bool))(Il2CppBase() + 0x0))(this, visual);
	}
	template <typename R = bool> R get_DragEnable() {
		return ((R (*)(IInventoryItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_DragEnable(bool value) {
		return ((R (*)(IInventoryItem*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = bool> R get_ScrollEnable() {
		return ((R (*)(IInventoryItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_IsScrolling() {
		return ((R (*)(IInventoryItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_Locked() {
		return ((R (*)(IInventoryItem*))(Il2CppBase() + 0x0))(this);
	}

};

