#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class IItemEventHandler1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IItemEventHandler`1"));
	}


	template <typename R = IItem*> R get_DraggedItem() {
		return ((R (*)(IItemEventHandler1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnBeginDrag(T item, uintptr_t eventData) {
		return ((R (*)(IItemEventHandler1*, T, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename R = void> R OnDrag(T item, uintptr_t eventData) {
		return ((R (*)(IItemEventHandler1*, T, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename R = void> R OnEndDrag(T item, uintptr_t eventData) {
		return ((R (*)(IItemEventHandler1*, T, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename R = void> R OnDrop(T item) {
		return ((R (*)(IItemEventHandler1*, T))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R OnDoubleClick(T item) {
		return ((R (*)(IItemEventHandler1*, T))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R OnHold(T item) {
		return ((R (*)(IItemEventHandler1*, T))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R OnRelease(T item) {
		return ((R (*)(IItemEventHandler1*, T))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R OnSelect(T item) {
		return ((R (*)(IItemEventHandler1*, T))(Il2CppBase() + 0x0))(this, item);
	}

};

