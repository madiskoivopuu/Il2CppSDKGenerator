#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RewardResourceView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RewardResourceView"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _countText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _gradeText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _rarityViews() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _lockMark() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _claimedMark() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _accessible() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _locked() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = bool> T& _claimed() {
		return *(T*)((uintptr_t)this + 0x52);
	}
	template <typename T = float> T& _accessibleOpacity() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& _notEnoughColour() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _cyclicItemMark() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _cyclicItemMarkInstance() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& TooltipView() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& Item() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& ItemName() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& Premium() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& StackCount() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& TooltipWarning() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = void*> T& OnClaimed() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = void*> T& OnClick() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& _pressedTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = uintptr_t> T get_TooltipView() {
		return ((T (*)(RewardResourceView*))(Il2CppBase() + 0x11A03B0))(this);
	}
	template <typename T = void> T set_TooltipView(uintptr_t value) {
		return ((T (*)(RewardResourceView*, uintptr_t))(Il2CppBase() + 0x11A03B8))(this, value);
	}
	template <typename T = bool> T get_Accessible() {
		return ((T (*)(RewardResourceView*))(Il2CppBase() + 0x11A03C0))(this);
	}
	template <typename T = void> T set_Accessible(bool value) {
		return ((T (*)(RewardResourceView*, bool))(Il2CppBase() + 0x11A03C8))(this, value);
	}
	template <typename T = void> T SetAccessible(bool value) {
		return ((T (*)(RewardResourceView*, bool))(Il2CppBase() + 0x11A03E8))(this, value);
	}
	template <typename T = bool> T get_Locked() {
		return ((T (*)(RewardResourceView*))(Il2CppBase() + 0x11A0490))(this);
	}
	template <typename T = void> T set_Locked(bool value) {
		return ((T (*)(RewardResourceView*, bool))(Il2CppBase() + 0x11A0498))(this, value);
	}
	template <typename T = void> T SetLocked(bool value) {
		return ((T (*)(RewardResourceView*, bool))(Il2CppBase() + 0x11A04B8))(this, value);
	}
	template <typename T = bool> T get_Claimed() {
		return ((T (*)(RewardResourceView*))(Il2CppBase() + 0x11A0564))(this);
	}
	template <typename T = void> T set_Claimed(bool value) {
		return ((T (*)(RewardResourceView*, bool))(Il2CppBase() + 0x1199208))(this, value);
	}
	template <typename T = void> T SetClaimed(bool value) {
		return ((T (*)(RewardResourceView*, bool))(Il2CppBase() + 0x11A056C))(this, value);
	}
	template <typename T = bool> T get_IsInterServerMarkEnabled() {
		return ((T (*)(RewardResourceView*))(Il2CppBase() + 0x11A0604))(this);
	}
	template <typename T = void> T SetInterServerMark(bool value, Il2CppString* additionalTooltip) {
		return ((T (*)(RewardResourceView*, bool, Il2CppString*))(Il2CppBase() + 0x11A0670))(this, value, additionalTooltip);
	}
	template <typename T = uintptr_t> T get_Item() {
		return ((T (*)(RewardResourceView*))(Il2CppBase() + 0x11A0D5C))(this);
	}
	template <typename T = void> T set_Item(uintptr_t value) {
		return ((T (*)(RewardResourceView*, uintptr_t))(Il2CppBase() + 0x11A0D64))(this, value);
	}
	template <typename T = Il2CppString*> T get_ItemName() {
		return ((T (*)(RewardResourceView*))(Il2CppBase() + 0x11A0D6C))(this);
	}
	template <typename T = void> T set_ItemName(Il2CppString* value) {
		return ((T (*)(RewardResourceView*, Il2CppString*))(Il2CppBase() + 0x11A0D74))(this, value);
	}
	template <typename T = bool> T get_Premium() {
		return ((T (*)(RewardResourceView*))(Il2CppBase() + 0x11A0D7C))(this);
	}
	template <typename T = void> T set_Premium(bool value) {
		return ((T (*)(RewardResourceView*, bool))(Il2CppBase() + 0x11A0D84))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(RewardResourceView*))(Il2CppBase() + 0x11A0D90))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(RewardResourceView*, int32_t))(Il2CppBase() + 0x11A0D98))(this, value);
	}
	template <typename T = int32_t> T get_StackCount() {
		return ((T (*)(RewardResourceView*))(Il2CppBase() + 0x11A0DA0))(this);
	}
	template <typename T = void> T set_StackCount(int32_t value) {
		return ((T (*)(RewardResourceView*, int32_t))(Il2CppBase() + 0x11A0DA8))(this, value);
	}
	template <typename T = Il2CppString*> T get_TooltipWarning() {
		return ((T (*)(RewardResourceView*))(Il2CppBase() + 0x11A0DB0))(this);
	}
	template <typename T = void> T set_TooltipWarning(Il2CppString* value) {
		return ((T (*)(RewardResourceView*, Il2CppString*))(Il2CppBase() + 0x11A0DB8))(this, value);
	}
	template <typename T = void> T add_OnClaimed(void* value) {
		return ((T (*)(RewardResourceView*, void*))(Il2CppBase() + 0x11A0DC0))(this, value);
	}
	template <typename T = void> T remove_OnClaimed(void* value) {
		return ((T (*)(RewardResourceView*, void*))(Il2CppBase() + 0x11A0E60))(this, value);
	}
	template <typename T = void> T add_OnClick(void* value) {
		return ((T (*)(RewardResourceView*, void*))(Il2CppBase() + 0x11A0F00))(this, value);
	}
	template <typename T = void> T remove_OnClick(void* value) {
		return ((T (*)(RewardResourceView*, void*))(Il2CppBase() + 0x11A0FA0))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RewardResourceView*))(Il2CppBase() + 0x11A1040))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RewardResourceView*))(Il2CppBase() + 0x11A108C))(this);
	}
	template <typename T = void> T UpdateCount() {
		return ((T (*)(RewardResourceView*))(Il2CppBase() + 0x11A1154))(this);
	}
	template <typename T = void> T UpdateGrade() {
		return ((T (*)(RewardResourceView*))(Il2CppBase() + 0x11A13B4))(this);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(RewardResourceView*))(Il2CppBase() + 0x11A1598))(this);
	}
	template <typename T = void> T Show(uintptr_t item, int32_t count, bool premium, uintptr_t tooltipView) {
		return ((T (*)(RewardResourceView*, uintptr_t, int32_t, bool, uintptr_t))(Il2CppBase() + 0x11991BC))(this, item, count, premium, tooltipView);
	}
	template <typename T = void> T Show_1(uintptr_t item, int32_t count, bool premium) {
		return ((T (*)(RewardResourceView*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x119E7C8))(this, item, count, premium);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(RewardResourceView*, uintptr_t))(Il2CppBase() + 0x11A17A0))(this, eventData);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RewardResourceView*))(Il2CppBase() + 0x11A17CC))(this);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(RewardResourceView*, uintptr_t))(Il2CppBase() + 0x11A1990))(this, eventData);
	}
	template <typename T = bool> T HideTooltip() {
		return ((T (*)(RewardResourceView*))(Il2CppBase() + 0x11A1090))(this);
	}
	template <typename T = void> T ShowTooltip() {
		return ((T (*)(RewardResourceView*))(Il2CppBase() + 0x11A1870))(this);
	}
	template <typename T = void> T SetCount(int32_t count) {
		return ((T (*)(RewardResourceView*, int32_t))(Il2CppBase() + 0x11A1A20))(this, count);
	}

};

}
