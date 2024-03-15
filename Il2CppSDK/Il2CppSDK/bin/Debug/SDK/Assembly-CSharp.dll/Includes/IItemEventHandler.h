#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IItemEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IItemEventHandler"));
	}


	template <typename R = IItem*> R get_DraggedItem() {
		return ((R (*)(IItemEventHandler*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnBeginDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(IItemEventHandler*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename R = void> R OnDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(IItemEventHandler*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename R = void> R OnEndDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(IItemEventHandler*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename R = void> R OnDrop(IInventoryItem* item) {
		return ((R (*)(IItemEventHandler*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(IItemEventHandler*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R OnHold(IInventoryItem* item) {
		return ((R (*)(IItemEventHandler*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R OnRelease(IInventoryItem* item) {
		return ((R (*)(IItemEventHandler*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R OnSelect(IInventoryItem* item) {
		return ((R (*)(IItemEventHandler*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}

};

