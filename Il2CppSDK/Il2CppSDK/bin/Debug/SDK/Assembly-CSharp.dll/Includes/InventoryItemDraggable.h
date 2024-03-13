#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryItem.h" 

class InventoryItemDraggable : public InventoryItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryItemDraggable"));
	}

	template <typename T = uintptr_t> T& _activeIconColor() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& _inactiveIconColor() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = IItemEventHandler*> T& _handler() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = InventorySlot*> T& Slot() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = int32_t> T& _clickCount() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& _clickStartTime() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& _doubleClickThreshold() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = bool> T& _isPressed() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = bool> T& _isDragged() {
		return *(T*)((uintptr_t)this + 0x181);
	}
	template <typename T = bool> T& DragEnable() {
		return *(T*)((uintptr_t)this + 0x182);
	}
	template <typename T = bool> T& IsScrolling() {
		return *(T*)((uintptr_t)this + 0x183);
	}
	template <typename T = bool> T& DoubleClickEnable() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = bool> T& ScrollEnable() {
		return *(T*)((uintptr_t)this + 0x185);
	}

	template <typename T = InventorySlot*> T get_Slot() {
		return ((T (*)(InventoryItemDraggable*))(Il2CppBase() + 0x1230EF8))(this);
	}
	template <typename T = void> T set_Slot(InventorySlot* value) {
		return ((T (*)(InventoryItemDraggable*, InventorySlot*))(Il2CppBase() + 0x1230F00))(this, value);
	}
	template <typename T = bool> T get_DragEnable() {
		return ((T (*)(InventoryItemDraggable*))(Il2CppBase() + 0x1230F10))(this);
	}
	template <typename T = void> T set_DragEnable(bool value) {
		return ((T (*)(InventoryItemDraggable*, bool))(Il2CppBase() + 0x1230F18))(this, value);
	}
	template <typename T = bool> T get_IsScrolling() {
		return ((T (*)(InventoryItemDraggable*))(Il2CppBase() + 0x1230F24))(this);
	}
	template <typename T = void> T set_IsScrolling(bool value) {
		return ((T (*)(InventoryItemDraggable*, bool))(Il2CppBase() + 0x1230F2C))(this, value);
	}
	template <typename T = bool> T get_DoubleClickEnable() {
		return ((T (*)(InventoryItemDraggable*))(Il2CppBase() + 0x1230F38))(this);
	}
	template <typename T = void> T set_DoubleClickEnable(bool value) {
		return ((T (*)(InventoryItemDraggable*, bool))(Il2CppBase() + 0x1230F40))(this, value);
	}
	template <typename T = bool> T get_ScrollEnable() {
		return ((T (*)(InventoryItemDraggable*))(Il2CppBase() + 0x1230F4C))(this);
	}
	template <typename T = void> T set_ScrollEnable(bool value) {
		return ((T (*)(InventoryItemDraggable*, bool))(Il2CppBase() + 0x1230F54))(this, value);
	}
	template <typename T = bool> T get_IsEmptySlot() {
		return ((T (*)(InventoryItemDraggable*))(Il2CppBase() + 0x1230F60))(this);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(InventoryItemDraggable*))(Il2CppBase() + 0x1231068))(this);
	}
	template <typename T = void> T Bind(IUIWindow* window, GameEntity* entity, int32_t index, InventorySlot* slot, IItemEventHandler* handler) {
		return ((T (*)(InventoryItemDraggable*, IUIWindow*, GameEntity*, int32_t, InventorySlot*, IItemEventHandler*))(Il2CppBase() + 0x12311A0))(this, window, entity, index, slot, handler);
	}
	template <typename T = void> T Bind_1(IUIWindow* window, GameEntity* entity, int32_t index) {
		return ((T (*)(InventoryItemDraggable*, IUIWindow*, GameEntity*, int32_t))(Il2CppBase() + 0x123121C))(this, window, entity, index);
	}
	template <typename T = void> T Unbind(bool toDestroy) {
		return ((T (*)(InventoryItemDraggable*, bool))(Il2CppBase() + 0x1231398))(this, toDestroy);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(InventoryItemDraggable*))(Il2CppBase() + 0x12314BC))(this);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t eventData) {
		return ((T (*)(InventoryItemDraggable*, uintptr_t))(Il2CppBase() + 0x12314D0))(this, eventData);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(InventoryItemDraggable*, uintptr_t))(Il2CppBase() + 0x12317C8))(this, eventData);
	}
	template <typename T = void> T OnEndDrag(uintptr_t eventData) {
		return ((T (*)(InventoryItemDraggable*, uintptr_t))(Il2CppBase() + 0x12318A0))(this, eventData);
	}
	template <typename T = void> T OnDrop(uintptr_t eventData) {
		return ((T (*)(InventoryItemDraggable*, uintptr_t))(Il2CppBase() + 0x1231A3C))(this, eventData);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(InventoryItemDraggable*, uintptr_t))(Il2CppBase() + 0x1231AF8))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(InventoryItemDraggable*, uintptr_t))(Il2CppBase() + 0x1231D00))(this, eventData);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(InventoryItemDraggable*))(Il2CppBase() + 0x1231DC0))(this);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(InventoryItemDraggable*, float))(Il2CppBase() + 0x1231DE4))(this, deltaTime);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(InventoryItemDraggable*, float))(Il2CppBase() + 0x1231FAC))(this, deltaTime);
	}
	template <typename T = void> T Lock(bool visual) {
		return ((T (*)(InventoryItemDraggable*, bool))(Il2CppBase() + 0x12322E4))(this, visual);
	}
	template <typename T = void> T Unlock(bool visual) {
		return ((T (*)(InventoryItemDraggable*, bool))(Il2CppBase() + 0x12323C4))(this, visual);
	}

};

