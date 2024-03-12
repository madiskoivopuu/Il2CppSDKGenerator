#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemDamageStatView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemDamageStatView"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _dmgText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _rarityViews() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& TooltipView() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Item() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& _pressedTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> T get_TooltipView() {
		return ((T (*)(ItemDamageStatView*))(Il2CppBase() + 0x10EE3D8))(this);
	}
	template <typename T = void> T set_TooltipView(uintptr_t value) {
		return ((T (*)(ItemDamageStatView*, uintptr_t))(Il2CppBase() + 0x10EE3E0))(this, value);
	}
	template <typename T = uintptr_t> T get_Item() {
		return ((T (*)(ItemDamageStatView*))(Il2CppBase() + 0x10EE3E8))(this);
	}
	template <typename T = void> T set_Item(uintptr_t value) {
		return ((T (*)(ItemDamageStatView*, uintptr_t))(Il2CppBase() + 0x10EE3F0))(this, value);
	}
	template <typename T = void> T Show(uintptr_t item, int32_t damageValue) {
		return ((T (*)(ItemDamageStatView*, uintptr_t, int32_t))(Il2CppBase() + 0x10EE3F8))(this, item, damageValue);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(ItemDamageStatView*, uintptr_t))(Il2CppBase() + 0x10EE4F4))(this, eventData);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ItemDamageStatView*))(Il2CppBase() + 0x10EE5C0))(this);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(ItemDamageStatView*, uintptr_t))(Il2CppBase() + 0x10EE788))(this, eventData);
	}
	template <typename T = void> T HideTooltip() {
		return ((T (*)(ItemDamageStatView*))(Il2CppBase() + 0x10EE520))(this);
	}
	template <typename T = void> T ShowTooltip() {
		return ((T (*)(ItemDamageStatView*))(Il2CppBase() + 0x10EE664))(this);
	}

};

}
