#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyShopSlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyShopSlot"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _countText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _rarityViews() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _canvasGroup() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _back() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _normalColor() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _selectedColor() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _selectedFrame() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _lockedPanel() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _soldPanel() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _lockedText() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _pricePanel() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _priceText() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _enoughColor() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _notEnoughColor() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = TooltipView*> R& TooltipView() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = ItemEntity*> R& Item() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	 Action1DailyShopSlot*>*& ClickEvent() {
		return *(Action1DailyShopSlot*>**)((uintptr_t)this + 0xD0);
	}
	template <typename R = bool> R& _selected() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = int32_t> R& _price() {
		return *(R*)((uintptr_t)this + 0xDC);
	}
	template <typename R = int32_t> R& _slotId() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = Il2CppString*> R& _itemName() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = int32_t> R& _count() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	 Nullable1bool>*& _sold() {
		return *(Nullable1bool>**)((uintptr_t)this + 0xF4);
	}
	template <typename R = int32_t> R& _requiredLevel() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = float> R& _pressedTime() {
		return *(R*)((uintptr_t)this + 0xFC);
	}

	template <typename R = TooltipView*> R get_TooltipView() {
		return ((R (*)(DailyShopSlot*))(Il2CppBase() + 0x1647988))(this);
	}
	template <typename R = void> R set_TooltipView(TooltipView* value) {
		return ((R (*)(DailyShopSlot*, TooltipView*))(Il2CppBase() + 0x1647990))(this, value);
	}
	template <typename R = ItemEntity*> R get_Item() {
		return ((R (*)(DailyShopSlot*))(Il2CppBase() + 0x1647998))(this);
	}
	template <typename R = void> R set_Item(ItemEntity* value) {
		return ((R (*)(DailyShopSlot*, ItemEntity*))(Il2CppBase() + 0x16479A0))(this, value);
	}
	template <typename R = void> R add_ClickEvent(Action1DailyShopSlot*>* value) {
		return ((R (*)(DailyShopSlot*, Action1DailyShopSlot*>*))(Il2CppBase() + 0x16479A8))(this, value);
	}
	template <typename R = void> R remove_ClickEvent(Action1DailyShopSlot*>* value) {
		return ((R (*)(DailyShopSlot*, Action1DailyShopSlot*>*))(Il2CppBase() + 0x1647A48))(this, value);
	}
	template <typename R = bool> R get_Selected() {
		return ((R (*)(DailyShopSlot*))(Il2CppBase() + 0x1647AE8))(this);
	}
	template <typename R = void> R set_Selected(bool value) {
		return ((R (*)(DailyShopSlot*, bool))(Il2CppBase() + 0x1647AF0))(this, value);
	}
	template <typename R = int32_t> R get_Price() {
		return ((R (*)(DailyShopSlot*))(Il2CppBase() + 0x1647B9C))(this);
	}
	template <typename R = void> R SetSelected(bool selected) {
		return ((R (*)(DailyShopSlot*, bool))(Il2CppBase() + 0x1647B10))(this, selected);
	}
	template <typename R = bool> R get_Locked() {
		return ((R (*)(DailyShopSlot*))(Il2CppBase() + 0x1647BA4))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(DailyShopSlot*))(Il2CppBase() + 0x1647BB4))(this);
	}
	template <typename R = void> R Init(TooltipView* tooltip) {
		return ((R (*)(DailyShopSlot*, TooltipView*))(Il2CppBase() + 0x1647C50))(this, tooltip);
	}
	template <typename R = void> R UpdateView(AccountEntity* account, InventorySlotEntity* slotEntity, bool sold, float tax, int32_t requiredLevel, int32_t slotIndex, int64_t resetTime) {
		return ((R (*)(DailyShopSlot*, AccountEntity*, InventorySlotEntity*, bool, float, int32_t, int32_t, int64_t))(Il2CppBase() + 0x1647CA0))(this, account, slotEntity, sold, tax, requiredLevel, slotIndex, resetTime);
	}
	template <typename R = void> R Update() {
		return ((R (*)(DailyShopSlot*))(Il2CppBase() + 0x1648404))(this);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(DailyShopSlot*, uintptr_t))(Il2CppBase() + 0x16485C8))(this, eventData);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(DailyShopSlot*, uintptr_t))(Il2CppBase() + 0x1648694))(this, eventData);
	}
	template <typename R = void> R HideTooltip() {
		return ((R (*)(DailyShopSlot*))(Il2CppBase() + 0x16485F4))(this);
	}
	template <typename R = void> R ShowTooltip() {
		return ((R (*)(DailyShopSlot*))(Il2CppBase() + 0x16484A8))(this);
	}
	template <typename R = void> R Awakeb__43_0() {
		return ((R (*)(DailyShopSlot*))(Il2CppBase() + 0x1648708))(this);
	}

};

