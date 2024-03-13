#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyShopSlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyShopSlot"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _countText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _rarityViews() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _back() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _normalColor() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _selectedColor() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _selectedFrame() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _lockedPanel() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _soldPanel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _lockedText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _pricePanel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _priceText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _enoughColor() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _notEnoughColor() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = TooltipView*> T& TooltipView() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = ItemEntity*> T& Item() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Action1DailyShopSlot*>*> T& ClickEvent() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& _selected() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& _price() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = int32_t> T& _slotId() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppString*> T& _itemName() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Nullable1bool>*> T& _sold() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& _requiredLevel() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& _pressedTime() {
		return *(T*)((uintptr_t)this + 0xFC);
	}

	template <typename T = TooltipView*> T get_TooltipView() {
		return ((T (*)(DailyShopSlot*))(Il2CppBase() + 0x1647988))(this);
	}
	template <typename T = void> T set_TooltipView(TooltipView* value) {
		return ((T (*)(DailyShopSlot*, TooltipView*))(Il2CppBase() + 0x1647990))(this, value);
	}
	template <typename T = ItemEntity*> T get_Item() {
		return ((T (*)(DailyShopSlot*))(Il2CppBase() + 0x1647998))(this);
	}
	template <typename T = void> T set_Item(ItemEntity* value) {
		return ((T (*)(DailyShopSlot*, ItemEntity*))(Il2CppBase() + 0x16479A0))(this, value);
	}
	template <typename T = void> T add_ClickEvent(Action1DailyShopSlot*>* value) {
		return ((T (*)(DailyShopSlot*, Action1DailyShopSlot*>*))(Il2CppBase() + 0x16479A8))(this, value);
	}
	template <typename T = void> T remove_ClickEvent(Action1DailyShopSlot*>* value) {
		return ((T (*)(DailyShopSlot*, Action1DailyShopSlot*>*))(Il2CppBase() + 0x1647A48))(this, value);
	}
	template <typename T = bool> T get_Selected() {
		return ((T (*)(DailyShopSlot*))(Il2CppBase() + 0x1647AE8))(this);
	}
	template <typename T = void> T set_Selected(bool value) {
		return ((T (*)(DailyShopSlot*, bool))(Il2CppBase() + 0x1647AF0))(this, value);
	}
	template <typename T = int32_t> T get_Price() {
		return ((T (*)(DailyShopSlot*))(Il2CppBase() + 0x1647B9C))(this);
	}
	template <typename T = void> T SetSelected(bool selected) {
		return ((T (*)(DailyShopSlot*, bool))(Il2CppBase() + 0x1647B10))(this, selected);
	}
	template <typename T = bool> T get_Locked() {
		return ((T (*)(DailyShopSlot*))(Il2CppBase() + 0x1647BA4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DailyShopSlot*))(Il2CppBase() + 0x1647BB4))(this);
	}
	template <typename T = void> T Init(TooltipView* tooltip) {
		return ((T (*)(DailyShopSlot*, TooltipView*))(Il2CppBase() + 0x1647C50))(this, tooltip);
	}
	template <typename T = void> T UpdateView(AccountEntity* account, InventorySlotEntity* slotEntity, bool sold, float tax, int32_t requiredLevel, int32_t slotIndex, int64_t resetTime) {
		return ((T (*)(DailyShopSlot*, AccountEntity*, InventorySlotEntity*, bool, float, int32_t, int32_t, int64_t))(Il2CppBase() + 0x1647CA0))(this, account, slotEntity, sold, tax, requiredLevel, slotIndex, resetTime);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DailyShopSlot*))(Il2CppBase() + 0x1648404))(this);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(DailyShopSlot*, uintptr_t))(Il2CppBase() + 0x16485C8))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(DailyShopSlot*, uintptr_t))(Il2CppBase() + 0x1648694))(this, eventData);
	}
	template <typename T = void> T HideTooltip() {
		return ((T (*)(DailyShopSlot*))(Il2CppBase() + 0x16485F4))(this);
	}
	template <typename T = void> T ShowTooltip() {
		return ((T (*)(DailyShopSlot*))(Il2CppBase() + 0x16484A8))(this);
	}
	template <typename T = void> T Awakeb__43_0() {
		return ((T (*)(DailyShopSlot*))(Il2CppBase() + 0x1648708))(this);
	}

};

