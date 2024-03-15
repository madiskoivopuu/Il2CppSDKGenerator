#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemDamageStatView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemDamageStatView"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _dmgText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _rarityViews() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = TooltipView*> R& TooltipView() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = ItemEntity*> R& Item() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& _pressedTime() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = TooltipView*> R get_TooltipView() {
		return ((R (*)(ItemDamageStatView*))(Il2CppBase() + 0x10EE3D8))(this);
	}
	template <typename R = void> R set_TooltipView(TooltipView* value) {
		return ((R (*)(ItemDamageStatView*, TooltipView*))(Il2CppBase() + 0x10EE3E0))(this, value);
	}
	template <typename R = ItemEntity*> R get_Item() {
		return ((R (*)(ItemDamageStatView*))(Il2CppBase() + 0x10EE3E8))(this);
	}
	template <typename R = void> R set_Item(ItemEntity* value) {
		return ((R (*)(ItemDamageStatView*, ItemEntity*))(Il2CppBase() + 0x10EE3F0))(this, value);
	}
	template <typename R = void> R Show(ItemEntity* item, int32_t damageValue) {
		return ((R (*)(ItemDamageStatView*, ItemEntity*, int32_t))(Il2CppBase() + 0x10EE3F8))(this, item, damageValue);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(ItemDamageStatView*, uintptr_t))(Il2CppBase() + 0x10EE4F4))(this, eventData);
	}
	template <typename R = void> R Update() {
		return ((R (*)(ItemDamageStatView*))(Il2CppBase() + 0x10EE5C0))(this);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(ItemDamageStatView*, uintptr_t))(Il2CppBase() + 0x10EE788))(this, eventData);
	}
	template <typename R = void> R HideTooltip() {
		return ((R (*)(ItemDamageStatView*))(Il2CppBase() + 0x10EE520))(this);
	}
	template <typename R = void> R ShowTooltip() {
		return ((R (*)(ItemDamageStatView*))(Il2CppBase() + 0x10EE664))(this);
	}

};

