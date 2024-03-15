#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemView"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _bgIcon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _countPanel() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _countText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _rarityViews() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _rarityColorIcon() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> R& _minCountShow() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _gradeText() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = TooltipView*> R& TooltipView() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = ItemEntity*> R& Item() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	 Action1<ItemView*>*& ClickEvent() {
		return *(Action1<ItemView*>**)((uintptr_t)this + 0x70);
	}
	template <typename R = float> R& _pressedTime() {
		return *(R*)((uintptr_t)this + 0x78);
	}

	template <typename R = TooltipView*> R get_TooltipView() {
		return ((R (*)(ItemView*))(Il2CppBase() + 0x14E0AFC))(this);
	}
	template <typename R = void> R set_TooltipView(TooltipView* value) {
		return ((R (*)(ItemView*, TooltipView*))(Il2CppBase() + 0x14E0B04))(this, value);
	}
	template <typename R = ItemEntity*> R get_Item() {
		return ((R (*)(ItemView*))(Il2CppBase() + 0x14E0B0C))(this);
	}
	template <typename R = void> R set_Item(ItemEntity* value) {
		return ((R (*)(ItemView*, ItemEntity*))(Il2CppBase() + 0x14E0B14))(this, value);
	}
	template <typename R = void> R add_ClickEvent(Action1<ItemView*>* value) {
		return ((R (*)(ItemView*, Action1<ItemView*>*))(Il2CppBase() + 0x14E0B1C))(this, value);
	}
	template <typename R = void> R remove_ClickEvent(Action1<ItemView*>* value) {
		return ((R (*)(ItemView*, Action1<ItemView*>*))(Il2CppBase() + 0x14E0BBC))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(ItemView*))(Il2CppBase() + 0x14E0C5C))(this);
	}
	template <typename R = void> R Show(ItemEntity* item, int32_t count) {
		return ((R (*)(ItemView*, ItemEntity*, int32_t))(Il2CppBase() + 0x14E0D4C))(this, item, count);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(ItemView*, uintptr_t))(Il2CppBase() + 0x14E11EC))(this, eventData);
	}
	template <typename R = void> R Update() {
		return ((R (*)(ItemView*))(Il2CppBase() + 0x14E12B8))(this);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(ItemView*, uintptr_t))(Il2CppBase() + 0x14E147C))(this, eventData);
	}
	template <typename R = void> R HideTooltip() {
		return ((R (*)(ItemView*))(Il2CppBase() + 0x14E1218))(this);
	}
	template <typename R = void> R ShowTooltip() {
		return ((R (*)(ItemView*))(Il2CppBase() + 0x14E135C))(this);
	}
	template <typename R = void> R Awakeb__20_0() {
		return ((R (*)(ItemView*))(Il2CppBase() + 0x14E1494))(this);
	}

};

