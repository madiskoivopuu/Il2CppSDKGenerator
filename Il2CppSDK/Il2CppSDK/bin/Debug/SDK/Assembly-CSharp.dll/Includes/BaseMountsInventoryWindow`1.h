#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class BaseMountsInventoryWindow1: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseMountsInventoryWindow`1"));
	}

	template <typename T = bool> T& _isDrageEnabled() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _itemDragged() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& D_Pad() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _mountsInventoryContainer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _headerText() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _targetContainer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _selectedSlot() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _selectedInventory() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _selectedItem() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _fromItem() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _messageId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& OnBeginScrolling() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& OnScrolling() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& OnEndScrolling() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_MountsInventoryContainer() {
		return ((T (*)(BaseMountsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_DraggedItem() {
		return ((T (*)(BaseMountsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_SelectedItem() {
		return ((T (*)(BaseMountsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsDeleteProcessing() {
		return ((T (*)(BaseMountsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T add_OnBeginScrolling(void* value) {
		return ((T (*)(BaseMountsInventoryWindow1*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnBeginScrolling(void* value) {
		return ((T (*)(BaseMountsInventoryWindow1*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnScrolling(void* value) {
		return ((T (*)(BaseMountsInventoryWindow1*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnScrolling(void* value) {
		return ((T (*)(BaseMountsInventoryWindow1*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnEndScrolling(void* value) {
		return ((T (*)(BaseMountsInventoryWindow1*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnEndScrolling(void* value) {
		return ((T (*)(BaseMountsInventoryWindow1*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(BaseMountsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(BaseMountsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Delete() {
		return ((T (*)(BaseMountsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ChangeHighlitedSlot(uintptr_t slot) {
		return ((T (*)(BaseMountsInventoryWindow1*, uintptr_t))(Il2CppBase() + 0x0))(this, slot);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t item, uintptr_t eventData) {
		return ((T (*)(BaseMountsInventoryWindow1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename T = void> T OnDoubleClick(uintptr_t item) {
		return ((T (*)(BaseMountsInventoryWindow1*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnDrag(uintptr_t item, uintptr_t eventData) {
		return ((T (*)(BaseMountsInventoryWindow1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename T = void> T OnDrop(uintptr_t item) {
		return ((T (*)(BaseMountsInventoryWindow1*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnEndDrag(uintptr_t item, uintptr_t eventData) {
		return ((T (*)(BaseMountsInventoryWindow1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename T = void> T OnHold(uintptr_t item) {
		return ((T (*)(BaseMountsInventoryWindow1*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnRelease(uintptr_t item) {
		return ((T (*)(BaseMountsInventoryWindow1*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnSelect(uintptr_t item) {
		return ((T (*)(BaseMountsInventoryWindow1*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnLeft() {
		return ((T (*)(BaseMountsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnRight() {
		return ((T (*)(BaseMountsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnTop() {
		return ((T (*)(BaseMountsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnBottom() {
		return ((T (*)(BaseMountsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BaseMountsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}

};

}
