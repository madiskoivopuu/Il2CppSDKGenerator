#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RewardResourceView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RewardResourceView"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _countText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _gradeText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _rarityViews() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _lockMark() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _claimedMark() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = bool> R& _accessible() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = bool> R& _locked() {
		return *(R*)((uintptr_t)this + 0x51);
	}
	template <typename R = bool> R& _claimed() {
		return *(R*)((uintptr_t)this + 0x52);
	}
	template <typename R = float> R& _accessibleOpacity() {
		return *(R*)((uintptr_t)this + 0x54);
	}
	template <typename R = uintptr_t> R& _notEnoughColour() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = UIFXRarityController*> R& _cyclicItemMark() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = UIFXRarityController*> R& _cyclicItemMarkInstance() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = TooltipView*> R& TooltipView() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = ItemEntity*> R& Item() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppString*> R& ItemName() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = bool> R& Premium() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x94);
	}
	template <typename R = int32_t> R& StackCount() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = Il2CppString*> R& TooltipWarning() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	 Action3Il2CppString*, int32_t, bool>*& OnClaimed() {
		return *(Action3Il2CppString*, int32_t, bool>**)((uintptr_t)this + 0xA8);
	}
	 Action1Il2CppString*>*& OnClick() {
		return *(Action1Il2CppString*>**)((uintptr_t)this + 0xB0);
	}
	template <typename R = float> R& _pressedTime() {
		return *(R*)((uintptr_t)this + 0xB8);
	}

	template <typename R = TooltipView*> R get_TooltipView() {
		return ((R (*)(RewardResourceView*))(Il2CppBase() + 0x11A03B0))(this);
	}
	template <typename R = void> R set_TooltipView(TooltipView* value) {
		return ((R (*)(RewardResourceView*, TooltipView*))(Il2CppBase() + 0x11A03B8))(this, value);
	}
	template <typename R = bool> R get_Accessible() {
		return ((R (*)(RewardResourceView*))(Il2CppBase() + 0x11A03C0))(this);
	}
	template <typename R = void> R set_Accessible(bool value) {
		return ((R (*)(RewardResourceView*, bool))(Il2CppBase() + 0x11A03C8))(this, value);
	}
	template <typename R = void> R SetAccessible(bool value) {
		return ((R (*)(RewardResourceView*, bool))(Il2CppBase() + 0x11A03E8))(this, value);
	}
	template <typename R = bool> R get_Locked() {
		return ((R (*)(RewardResourceView*))(Il2CppBase() + 0x11A0490))(this);
	}
	template <typename R = void> R set_Locked(bool value) {
		return ((R (*)(RewardResourceView*, bool))(Il2CppBase() + 0x11A0498))(this, value);
	}
	template <typename R = void> R SetLocked(bool value) {
		return ((R (*)(RewardResourceView*, bool))(Il2CppBase() + 0x11A04B8))(this, value);
	}
	template <typename R = bool> R get_Claimed() {
		return ((R (*)(RewardResourceView*))(Il2CppBase() + 0x11A0564))(this);
	}
	template <typename R = void> R set_Claimed(bool value) {
		return ((R (*)(RewardResourceView*, bool))(Il2CppBase() + 0x1199208))(this, value);
	}
	template <typename R = void> R SetClaimed(bool value) {
		return ((R (*)(RewardResourceView*, bool))(Il2CppBase() + 0x11A056C))(this, value);
	}
	template <typename R = bool> R get_IsInterServerMarkEnabled() {
		return ((R (*)(RewardResourceView*))(Il2CppBase() + 0x11A0604))(this);
	}
	template <typename R = void> R SetInterServerMark(bool value, Il2CppString* additionalTooltip) {
		return ((R (*)(RewardResourceView*, bool, Il2CppString*))(Il2CppBase() + 0x11A0670))(this, value, additionalTooltip);
	}
	template <typename R = ItemEntity*> R get_Item() {
		return ((R (*)(RewardResourceView*))(Il2CppBase() + 0x11A0D5C))(this);
	}
	template <typename R = void> R set_Item(ItemEntity* value) {
		return ((R (*)(RewardResourceView*, ItemEntity*))(Il2CppBase() + 0x11A0D64))(this, value);
	}
	template <typename R = Il2CppString*> R get_ItemName() {
		return ((R (*)(RewardResourceView*))(Il2CppBase() + 0x11A0D6C))(this);
	}
	template <typename R = void> R set_ItemName(Il2CppString* value) {
		return ((R (*)(RewardResourceView*, Il2CppString*))(Il2CppBase() + 0x11A0D74))(this, value);
	}
	template <typename R = bool> R get_Premium() {
		return ((R (*)(RewardResourceView*))(Il2CppBase() + 0x11A0D7C))(this);
	}
	template <typename R = void> R set_Premium(bool value) {
		return ((R (*)(RewardResourceView*, bool))(Il2CppBase() + 0x11A0D84))(this, value);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(RewardResourceView*))(Il2CppBase() + 0x11A0D90))(this);
	}
	template <typename R = void> R set_Count(int32_t value) {
		return ((R (*)(RewardResourceView*, int32_t))(Il2CppBase() + 0x11A0D98))(this, value);
	}
	template <typename R = int32_t> R get_StackCount() {
		return ((R (*)(RewardResourceView*))(Il2CppBase() + 0x11A0DA0))(this);
	}
	template <typename R = void> R set_StackCount(int32_t value) {
		return ((R (*)(RewardResourceView*, int32_t))(Il2CppBase() + 0x11A0DA8))(this, value);
	}
	template <typename R = Il2CppString*> R get_TooltipWarning() {
		return ((R (*)(RewardResourceView*))(Il2CppBase() + 0x11A0DB0))(this);
	}
	template <typename R = void> R set_TooltipWarning(Il2CppString* value) {
		return ((R (*)(RewardResourceView*, Il2CppString*))(Il2CppBase() + 0x11A0DB8))(this, value);
	}
	template <typename R = void> R add_OnClaimed(Action3Il2CppString*, int32_t, bool>* value) {
		return ((R (*)(RewardResourceView*, Action3Il2CppString*, int32_t, bool>*))(Il2CppBase() + 0x11A0DC0))(this, value);
	}
	template <typename R = void> R remove_OnClaimed(Action3Il2CppString*, int32_t, bool>* value) {
		return ((R (*)(RewardResourceView*, Action3Il2CppString*, int32_t, bool>*))(Il2CppBase() + 0x11A0E60))(this, value);
	}
	template <typename R = void> R add_OnClick(Action1Il2CppString*>* value) {
		return ((R (*)(RewardResourceView*, Action1Il2CppString*>*))(Il2CppBase() + 0x11A0F00))(this, value);
	}
	template <typename R = void> R remove_OnClick(Action1Il2CppString*>* value) {
		return ((R (*)(RewardResourceView*, Action1Il2CppString*>*))(Il2CppBase() + 0x11A0FA0))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(RewardResourceView*))(Il2CppBase() + 0x11A1040))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(RewardResourceView*))(Il2CppBase() + 0x11A108C))(this);
	}
	template <typename R = void> R UpdateCount() {
		return ((R (*)(RewardResourceView*))(Il2CppBase() + 0x11A1154))(this);
	}
	template <typename R = void> R UpdateGrade() {
		return ((R (*)(RewardResourceView*))(Il2CppBase() + 0x11A13B4))(this);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(RewardResourceView*))(Il2CppBase() + 0x11A1598))(this);
	}
	template <typename R = void> R Show(ItemEntity* item, int32_t count, bool premium, TooltipView* tooltipView) {
		return ((R (*)(RewardResourceView*, ItemEntity*, int32_t, bool, TooltipView*))(Il2CppBase() + 0x11991BC))(this, item, count, premium, tooltipView);
	}
	template <typename R = void> R Show_1(ItemEntity* item, int32_t count, bool premium) {
		return ((R (*)(RewardResourceView*, ItemEntity*, int32_t, bool))(Il2CppBase() + 0x119E7C8))(this, item, count, premium);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(RewardResourceView*, uintptr_t))(Il2CppBase() + 0x11A17A0))(this, eventData);
	}
	template <typename R = void> R Update() {
		return ((R (*)(RewardResourceView*))(Il2CppBase() + 0x11A17CC))(this);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(RewardResourceView*, uintptr_t))(Il2CppBase() + 0x11A1990))(this, eventData);
	}
	template <typename R = bool> R HideTooltip() {
		return ((R (*)(RewardResourceView*))(Il2CppBase() + 0x11A1090))(this);
	}
	template <typename R = void> R ShowTooltip() {
		return ((R (*)(RewardResourceView*))(Il2CppBase() + 0x11A1870))(this);
	}
	template <typename R = void> R SetCount(int32_t count) {
		return ((R (*)(RewardResourceView*, int32_t))(Il2CppBase() + 0x11A1A20))(this, count);
	}

};

