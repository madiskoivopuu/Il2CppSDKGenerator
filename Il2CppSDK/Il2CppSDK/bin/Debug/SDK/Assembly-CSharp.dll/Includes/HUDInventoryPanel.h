#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDInventoryPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDInventoryPanel"));
	}

	template <typename R = bool> R& _canExpand() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<InventorySlot*>*> R& _slots() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<HUDInventoryItem*>*> R& _items() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _viewPort() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& _collapseOnOtherClick() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& _maxOffsetY() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = float> R& _expandThreshold() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = IHUDWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = UIHotKeysManager*> R& _hotKeyManager() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = TooltipView*> R& _tooltipView() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = bool> R& _isExpanded() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = bool> R& _isPanelChangingSize() {
		return *(R*)((uintptr_t)this + 0x61);
	}
	template <typename R = float> R& startPosition() {
		return *(R*)((uintptr_t)this + 0x64);
	}
	template <typename R = Il2CppString*> R& _hudInventoryPanelTag() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = IInventoryItem*> R& _beginDragItem() {
		return *(R*)((uintptr_t)this + 0x70);
	}

	template <typename R = IItem*> R get_DraggedItem() {
		return ((R (*)(HUDInventoryPanel*))(Il2CppBase() + 0x145BC8C))(this);
	}
	template <typename R = void> R Bind(IHUDWindow* window) {
		return ((R (*)(HUDInventoryPanel*, IHUDWindow*))(Il2CppBase() + 0x145BC94))(this, window);
	}
	template <typename R = void> R OnBeginDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(HUDInventoryPanel*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x145C19C))(this, item, eventData);
	}
	template <typename R = void> R OnDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(HUDInventoryPanel*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x145C1CC))(this, item, eventData);
	}
	template <typename R = void> R OnDrop(IInventoryItem* item) {
		return ((R (*)(HUDInventoryPanel*, IInventoryItem*))(Il2CppBase() + 0x145C3A8))(this, item);
	}
	template <typename R = void> R OnEndDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(HUDInventoryPanel*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x145C3AC))(this, item, eventData);
	}
	template <typename R = void> R OnHold(IInventoryItem* item) {
		return ((R (*)(HUDInventoryPanel*, IInventoryItem*))(Il2CppBase() + 0x145C3C8))(this, item);
	}
	template <typename R = void> R OnRelease(IInventoryItem* item) {
		return ((R (*)(HUDInventoryPanel*, IInventoryItem*))(Il2CppBase() + 0x145C4CC))(this, item);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(HUDInventoryPanel*, IInventoryItem*))(Il2CppBase() + 0x145CB98))(this, item);
	}
	template <typename R = void> R OnSelect(IInventoryItem* item) {
		return ((R (*)(HUDInventoryPanel*, IInventoryItem*))(Il2CppBase() + 0x145CE70))(this, item);
	}
	template <typename R = void> R EquipItem(IInventoryItem* item) {
		return ((R (*)(HUDInventoryPanel*, IInventoryItem*))(Il2CppBase() + 0x145CB9C))(this, item);
	}
	template <typename R = void> R UseItem(IInventoryItem* item) {
		return ((R (*)(HUDInventoryPanel*, IInventoryItem*))(Il2CppBase() + 0x145C6C8))(this, item);
	}
	template <typename R = void> R SetActive(bool isActive) {
		return ((R (*)(HUDInventoryPanel*, bool))(Il2CppBase() + 0x145CE74))(this, isActive);
	}
	template <typename R = void> R InitItems() {
		return ((R (*)(HUDInventoryPanel*))(Il2CppBase() + 0x145BF64))(this);
	}
	template <typename R = void> R CheckItemIsLocked(InventoryItem* item) {
		return ((R (*)(HUDInventoryPanel*, InventoryItem*))(Il2CppBase() + 0x145CED8))(this, item);
	}
	template <typename R = void> R ExpandPanel() {
		return ((R (*)(HUDInventoryPanel*))(Il2CppBase() + 0x145C264))(this);
	}
	template <typename R = void> R CollapsePanael() {
		return ((R (*)(HUDInventoryPanel*))(Il2CppBase() + 0x145C308))(this);
	}
	template <typename R = void> R UpdateInput(float deltaTime) {
		return ((R (*)(HUDInventoryPanel*, float))(Il2CppBase() + 0x145D1C0))(this, deltaTime);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(HUDInventoryPanel*, float))(Il2CppBase() + 0x145D258))(this, deltaTime);
	}

};

