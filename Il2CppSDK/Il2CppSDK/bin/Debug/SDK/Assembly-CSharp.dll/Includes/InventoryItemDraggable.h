#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryItem.h" 

class InventoryItemDraggable : public InventoryItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryItemDraggable"));
	}

	template <typename R = uintptr_t> R& _activeIconColor() {
		return *(R*)((uintptr_t)this + 0x134);
	}
	template <typename R = uintptr_t> R& _inactiveIconColor() {
		return *(R*)((uintptr_t)this + 0x144);
	}
	template <typename R = IItemEventHandler*> R& _handler() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = InventorySlot*> R& Slot() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = int32_t> R& _clickCount() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = uintptr_t> R& _clickStartTime() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& _doubleClickThreshold() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = bool> R& _isPressed() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = bool> R& _isDragged() {
		return *(R*)((uintptr_t)this + 0x181);
	}
	template <typename R = bool> R& DragEnable() {
		return *(R*)((uintptr_t)this + 0x182);
	}
	template <typename R = bool> R& IsScrolling() {
		return *(R*)((uintptr_t)this + 0x183);
	}
	template <typename R = bool> R& DoubleClickEnable() {
		return *(R*)((uintptr_t)this + 0x184);
	}
	template <typename R = bool> R& ScrollEnable() {
		return *(R*)((uintptr_t)this + 0x185);
	}

	template <typename R = InventorySlot*> R get_Slot() {
		return ((R (*)(InventoryItemDraggable*))(Il2CppBase() + 0x1230EF8))(this);
	}
	template <typename R = void> R set_Slot(InventorySlot* value) {
		return ((R (*)(InventoryItemDraggable*, InventorySlot*))(Il2CppBase() + 0x1230F00))(this, value);
	}
	template <typename R = bool> R get_DragEnable() {
		return ((R (*)(InventoryItemDraggable*))(Il2CppBase() + 0x1230F10))(this);
	}
	template <typename R = void> R set_DragEnable(bool value) {
		return ((R (*)(InventoryItemDraggable*, bool))(Il2CppBase() + 0x1230F18))(this, value);
	}
	template <typename R = bool> R get_IsScrolling() {
		return ((R (*)(InventoryItemDraggable*))(Il2CppBase() + 0x1230F24))(this);
	}
	template <typename R = void> R set_IsScrolling(bool value) {
		return ((R (*)(InventoryItemDraggable*, bool))(Il2CppBase() + 0x1230F2C))(this, value);
	}
	template <typename R = bool> R get_DoubleClickEnable() {
		return ((R (*)(InventoryItemDraggable*))(Il2CppBase() + 0x1230F38))(this);
	}
	template <typename R = void> R set_DoubleClickEnable(bool value) {
		return ((R (*)(InventoryItemDraggable*, bool))(Il2CppBase() + 0x1230F40))(this, value);
	}
	template <typename R = bool> R get_ScrollEnable() {
		return ((R (*)(InventoryItemDraggable*))(Il2CppBase() + 0x1230F4C))(this);
	}
	template <typename R = void> R set_ScrollEnable(bool value) {
		return ((R (*)(InventoryItemDraggable*, bool))(Il2CppBase() + 0x1230F54))(this, value);
	}
	template <typename R = bool> R get_IsEmptySlot() {
		return ((R (*)(InventoryItemDraggable*))(Il2CppBase() + 0x1230F60))(this);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(InventoryItemDraggable*))(Il2CppBase() + 0x1231068))(this);
	}
	template <typename R = void> R Bind(IUIWindow* window, GameEntity* entity, int32_t index, InventorySlot* slot, IItemEventHandler* handler) {
		return ((R (*)(InventoryItemDraggable*, IUIWindow*, GameEntity*, int32_t, InventorySlot*, IItemEventHandler*))(Il2CppBase() + 0x12311A0))(this, window, entity, index, slot, handler);
	}
	template <typename R = void> R Bind_1(IUIWindow* window, GameEntity* entity, int32_t index) {
		return ((R (*)(InventoryItemDraggable*, IUIWindow*, GameEntity*, int32_t))(Il2CppBase() + 0x123121C))(this, window, entity, index);
	}
	template <typename R = void> R Unbind(bool toDestroy) {
		return ((R (*)(InventoryItemDraggable*, bool))(Il2CppBase() + 0x1231398))(this, toDestroy);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(InventoryItemDraggable*))(Il2CppBase() + 0x12314BC))(this);
	}
	template <typename R = void> R OnBeginDrag(uintptr_t eventData) {
		return ((R (*)(InventoryItemDraggable*, uintptr_t))(Il2CppBase() + 0x12314D0))(this, eventData);
	}
	template <typename R = void> R OnDrag(uintptr_t eventData) {
		return ((R (*)(InventoryItemDraggable*, uintptr_t))(Il2CppBase() + 0x12317C8))(this, eventData);
	}
	template <typename R = void> R OnEndDrag(uintptr_t eventData) {
		return ((R (*)(InventoryItemDraggable*, uintptr_t))(Il2CppBase() + 0x12318A0))(this, eventData);
	}
	template <typename R = void> R OnDrop(uintptr_t eventData) {
		return ((R (*)(InventoryItemDraggable*, uintptr_t))(Il2CppBase() + 0x1231A3C))(this, eventData);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(InventoryItemDraggable*, uintptr_t))(Il2CppBase() + 0x1231AF8))(this, eventData);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(InventoryItemDraggable*, uintptr_t))(Il2CppBase() + 0x1231D00))(this, eventData);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(InventoryItemDraggable*))(Il2CppBase() + 0x1231DC0))(this);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(InventoryItemDraggable*, float))(Il2CppBase() + 0x1231DE4))(this, deltaTime);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(InventoryItemDraggable*, float))(Il2CppBase() + 0x1231FAC))(this, deltaTime);
	}
	template <typename R = void> R Lock(bool visual) {
		return ((R (*)(InventoryItemDraggable*, bool))(Il2CppBase() + 0x12322E4))(this, visual);
	}
	template <typename R = void> R Unlock(bool visual) {
		return ((R (*)(InventoryItemDraggable*, bool))(Il2CppBase() + 0x12323C4))(this, visual);
	}

};

