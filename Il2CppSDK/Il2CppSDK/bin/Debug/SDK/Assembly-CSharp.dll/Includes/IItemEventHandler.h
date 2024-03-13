#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IItemEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IItemEventHandler"));
	}


	template <typename T = IItem*> T get_DraggedItem() {
		return ((T (*)(IItemEventHandler*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnBeginDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(IItemEventHandler*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename T = void> T OnDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(IItemEventHandler*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename T = void> T OnEndDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(IItemEventHandler*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename T = void> T OnDrop(IInventoryItem* item) {
		return ((T (*)(IItemEventHandler*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnDoubleClick(IInventoryItem* item) {
		return ((T (*)(IItemEventHandler*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnHold(IInventoryItem* item) {
		return ((T (*)(IItemEventHandler*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnRelease(IInventoryItem* item) {
		return ((T (*)(IItemEventHandler*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnSelect(IInventoryItem* item) {
		return ((T (*)(IItemEventHandler*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}

};

