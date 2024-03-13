#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IItemEventHandler1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IItemEventHandler`1"));
	}


	template <typename T = IItem*> T get_DraggedItem() {
		return ((T (*)(IItemEventHandler1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t item, uintptr_t eventData) {
		return ((T (*)(IItemEventHandler1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename T = void> T OnDrag(uintptr_t item, uintptr_t eventData) {
		return ((T (*)(IItemEventHandler1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename T = void> T OnEndDrag(uintptr_t item, uintptr_t eventData) {
		return ((T (*)(IItemEventHandler1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename T = void> T OnDrop(uintptr_t item) {
		return ((T (*)(IItemEventHandler1*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnDoubleClick(uintptr_t item) {
		return ((T (*)(IItemEventHandler1*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnHold(uintptr_t item) {
		return ((T (*)(IItemEventHandler1*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnRelease(uintptr_t item) {
		return ((T (*)(IItemEventHandler1*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnSelect(uintptr_t item) {
		return ((T (*)(IItemEventHandler1*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}

};

