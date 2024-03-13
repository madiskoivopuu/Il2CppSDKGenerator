#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemView"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _bgIcon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _countPanel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _countText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _rarityViews() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _rarityColorIcon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _minCountShow() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _gradeText() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = TooltipView*> T& TooltipView() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = ItemEntity*> T& Item() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Action1ItemView*>*> T& ClickEvent() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& _pressedTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = TooltipView*> T get_TooltipView() {
		return ((T (*)(ItemView*))(Il2CppBase() + 0x14E0AFC))(this);
	}
	template <typename T = void> T set_TooltipView(TooltipView* value) {
		return ((T (*)(ItemView*, TooltipView*))(Il2CppBase() + 0x14E0B04))(this, value);
	}
	template <typename T = ItemEntity*> T get_Item() {
		return ((T (*)(ItemView*))(Il2CppBase() + 0x14E0B0C))(this);
	}
	template <typename T = void> T set_Item(ItemEntity* value) {
		return ((T (*)(ItemView*, ItemEntity*))(Il2CppBase() + 0x14E0B14))(this, value);
	}
	template <typename T = void> T add_ClickEvent(Action1ItemView*>* value) {
		return ((T (*)(ItemView*, Action1ItemView*>*))(Il2CppBase() + 0x14E0B1C))(this, value);
	}
	template <typename T = void> T remove_ClickEvent(Action1ItemView*>* value) {
		return ((T (*)(ItemView*, Action1ItemView*>*))(Il2CppBase() + 0x14E0BBC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ItemView*))(Il2CppBase() + 0x14E0C5C))(this);
	}
	template <typename T = void> T Show(ItemEntity* item, int32_t count) {
		return ((T (*)(ItemView*, ItemEntity*, int32_t))(Il2CppBase() + 0x14E0D4C))(this, item, count);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(ItemView*, uintptr_t))(Il2CppBase() + 0x14E11EC))(this, eventData);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ItemView*))(Il2CppBase() + 0x14E12B8))(this);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(ItemView*, uintptr_t))(Il2CppBase() + 0x14E147C))(this, eventData);
	}
	template <typename T = void> T HideTooltip() {
		return ((T (*)(ItemView*))(Il2CppBase() + 0x14E1218))(this);
	}
	template <typename T = void> T ShowTooltip() {
		return ((T (*)(ItemView*))(Il2CppBase() + 0x14E135C))(this);
	}
	template <typename T = void> T Awakeb__20_0() {
		return ((T (*)(ItemView*))(Il2CppBase() + 0x14E1494))(this);
	}

};

