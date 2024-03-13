#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDInventoryPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDInventoryPanel"));
	}

	template <typename T = bool> T& _canExpand() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _slots() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _items() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _viewPort() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _collapseOnOtherClick() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& _maxOffsetY() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& _expandThreshold() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = IHUDWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = UIHotKeysManager*> T& _hotKeyManager() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = TooltipView*> T& _tooltipView() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& _isExpanded() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& _isPanelChangingSize() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = float> T& startPosition() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& _hudInventoryPanelTag() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = IInventoryItem*> T& _beginDragItem() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = IItem*> T get_DraggedItem() {
		return ((T (*)(HUDInventoryPanel*))(Il2CppBase() + 0x145BC8C))(this);
	}
	template <typename T = void> T Bind(IHUDWindow* window) {
		return ((T (*)(HUDInventoryPanel*, IHUDWindow*))(Il2CppBase() + 0x145BC94))(this, window);
	}
	template <typename T = void> T OnBeginDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(HUDInventoryPanel*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x145C19C))(this, item, eventData);
	}
	template <typename T = void> T OnDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(HUDInventoryPanel*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x145C1CC))(this, item, eventData);
	}
	template <typename T = void> T OnDrop(IInventoryItem* item) {
		return ((T (*)(HUDInventoryPanel*, IInventoryItem*))(Il2CppBase() + 0x145C3A8))(this, item);
	}
	template <typename T = void> T OnEndDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(HUDInventoryPanel*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x145C3AC))(this, item, eventData);
	}
	template <typename T = void> T OnHold(IInventoryItem* item) {
		return ((T (*)(HUDInventoryPanel*, IInventoryItem*))(Il2CppBase() + 0x145C3C8))(this, item);
	}
	template <typename T = void> T OnRelease(IInventoryItem* item) {
		return ((T (*)(HUDInventoryPanel*, IInventoryItem*))(Il2CppBase() + 0x145C4CC))(this, item);
	}
	template <typename T = void> T OnDoubleClick(IInventoryItem* item) {
		return ((T (*)(HUDInventoryPanel*, IInventoryItem*))(Il2CppBase() + 0x145CB98))(this, item);
	}
	template <typename T = void> T OnSelect(IInventoryItem* item) {
		return ((T (*)(HUDInventoryPanel*, IInventoryItem*))(Il2CppBase() + 0x145CE70))(this, item);
	}
	template <typename T = void> T EquipItem(IInventoryItem* item) {
		return ((T (*)(HUDInventoryPanel*, IInventoryItem*))(Il2CppBase() + 0x145CB9C))(this, item);
	}
	template <typename T = void> T UseItem(IInventoryItem* item) {
		return ((T (*)(HUDInventoryPanel*, IInventoryItem*))(Il2CppBase() + 0x145C6C8))(this, item);
	}
	template <typename T = void> T SetActive(bool isActive) {
		return ((T (*)(HUDInventoryPanel*, bool))(Il2CppBase() + 0x145CE74))(this, isActive);
	}
	template <typename T = void> T InitItems() {
		return ((T (*)(HUDInventoryPanel*))(Il2CppBase() + 0x145BF64))(this);
	}
	template <typename T = void> T CheckItemIsLocked(InventoryItem* item) {
		return ((T (*)(HUDInventoryPanel*, InventoryItem*))(Il2CppBase() + 0x145CED8))(this, item);
	}
	template <typename T = void> T ExpandPanel() {
		return ((T (*)(HUDInventoryPanel*))(Il2CppBase() + 0x145C264))(this);
	}
	template <typename T = void> T CollapsePanael() {
		return ((T (*)(HUDInventoryPanel*))(Il2CppBase() + 0x145C308))(this);
	}
	template <typename T = void> T UpdateInput(float deltaTime) {
		return ((T (*)(HUDInventoryPanel*, float))(Il2CppBase() + 0x145D1C0))(this, deltaTime);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(HUDInventoryPanel*, float))(Il2CppBase() + 0x145D258))(this, deltaTime);
	}

};

