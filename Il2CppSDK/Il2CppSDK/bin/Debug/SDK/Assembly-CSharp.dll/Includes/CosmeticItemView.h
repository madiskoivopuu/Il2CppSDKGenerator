#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CosmeticItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CosmeticItemView"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _panel() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _rarityViews() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _lockMark() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _currentMark() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _selectedMark() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _newMark() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = bool> R& _locked() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = bool> R& _current() {
		return *(R*)((uintptr_t)this + 0x59);
	}
	template <typename R = bool> R& _selected() {
		return *(R*)((uintptr_t)this + 0x5A);
	}
	template <typename R = bool> R& _isNew() {
		return *(R*)((uintptr_t)this + 0x5B);
	}
	template <typename R = TooltipView*> R& TooltipView() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = ItemEntity*> R& Item() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppString*> R& ItemName() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	 Action1<CosmeticItemView*>*& OnClick() {
		return *(Action1<CosmeticItemView*>**)((uintptr_t)this + 0x78);
	}
	template <typename R = float> R& _pressedTime() {
		return *(R*)((uintptr_t)this + 0x80);
	}

	template <typename R = TooltipView*> R get_TooltipView() {
		return ((R (*)(CosmeticItemView*))(Il2CppBase() + 0x133E93C))(this);
	}
	template <typename R = void> R set_TooltipView(TooltipView* value) {
		return ((R (*)(CosmeticItemView*, TooltipView*))(Il2CppBase() + 0x133E944))(this, value);
	}
	template <typename R = uintptr_t> R get_Button() {
		return ((R (*)(CosmeticItemView*))(Il2CppBase() + 0x133E94C))(this);
	}
	template <typename R = ItemEntity*> R get_Item() {
		return ((R (*)(CosmeticItemView*))(Il2CppBase() + 0x133E954))(this);
	}
	template <typename R = void> R set_Item(ItemEntity* value) {
		return ((R (*)(CosmeticItemView*, ItemEntity*))(Il2CppBase() + 0x133E95C))(this, value);
	}
	template <typename R = Il2CppString*> R get_ItemName() {
		return ((R (*)(CosmeticItemView*))(Il2CppBase() + 0x133E964))(this);
	}
	template <typename R = void> R set_ItemName(Il2CppString* value) {
		return ((R (*)(CosmeticItemView*, Il2CppString*))(Il2CppBase() + 0x133E96C))(this, value);
	}
	template <typename R = bool> R get_Locked() {
		return ((R (*)(CosmeticItemView*))(Il2CppBase() + 0x133E974))(this);
	}
	template <typename R = void> R set_Locked(bool value) {
		return ((R (*)(CosmeticItemView*, bool))(Il2CppBase() + 0x133E97C))(this, value);
	}
	template <typename R = void> R SetLocked(bool value) {
		return ((R (*)(CosmeticItemView*, bool))(Il2CppBase() + 0x133E99C))(this, value);
	}
	template <typename R = bool> R get_Current() {
		return ((R (*)(CosmeticItemView*))(Il2CppBase() + 0x133EA60))(this);
	}
	template <typename R = void> R set_Current(bool value) {
		return ((R (*)(CosmeticItemView*, bool))(Il2CppBase() + 0x133EA68))(this, value);
	}
	template <typename R = void> R SetCurrent(bool value) {
		return ((R (*)(CosmeticItemView*, bool))(Il2CppBase() + 0x133EA88))(this, value);
	}
	template <typename R = bool> R get_Selected() {
		return ((R (*)(CosmeticItemView*))(Il2CppBase() + 0x133EB4C))(this);
	}
	template <typename R = void> R set_Selected(bool value) {
		return ((R (*)(CosmeticItemView*, bool))(Il2CppBase() + 0x133EB54))(this, value);
	}
	template <typename R = void> R SetSelected(bool value) {
		return ((R (*)(CosmeticItemView*, bool))(Il2CppBase() + 0x133EB74))(this, value);
	}
	template <typename R = bool> R get_IsNew() {
		return ((R (*)(CosmeticItemView*))(Il2CppBase() + 0x133EC38))(this);
	}
	template <typename R = void> R set_IsNew(bool value) {
		return ((R (*)(CosmeticItemView*, bool))(Il2CppBase() + 0x133EC40))(this, value);
	}
	template <typename R = void> R SetNew(bool value) {
		return ((R (*)(CosmeticItemView*, bool))(Il2CppBase() + 0x133EC60))(this, value);
	}
	template <typename R = void> R add_OnClick(Action1<CosmeticItemView*>* value) {
		return ((R (*)(CosmeticItemView*, Action1<CosmeticItemView*>*))(Il2CppBase() + 0x133ED30))(this, value);
	}
	template <typename R = void> R remove_OnClick(Action1<CosmeticItemView*>* value) {
		return ((R (*)(CosmeticItemView*, Action1<CosmeticItemView*>*))(Il2CppBase() + 0x133EDD0))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(CosmeticItemView*))(Il2CppBase() + 0x133EE70))(this);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(CosmeticItemView*))(Il2CppBase() + 0x133EEB4))(this);
	}
	template <typename R = void> R Show(ItemEntity* item) {
		return ((R (*)(CosmeticItemView*, ItemEntity*))(Il2CppBase() + 0x133EF0C))(this, item);
	}
	template <typename R = void> R UpdateLocked(Il2CppDictionary<Il2CppString*, bool>* availableCosmetics) {
		return ((R (*)(CosmeticItemView*, Il2CppDictionary<Il2CppString*, bool>*))(Il2CppBase() + 0x133F054))(this, availableCosmetics);
	}
	template <typename R = void> R UpdateIsNew(Il2CppDictionary<Il2CppString*, bool>* availableCosmetics) {
		return ((R (*)(CosmeticItemView*, Il2CppDictionary<Il2CppString*, bool>*))(Il2CppBase() + 0x133F114))(this, availableCosmetics);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(CosmeticItemView*, uintptr_t))(Il2CppBase() + 0x133F1D0))(this, eventData);
	}
	template <typename R = void> R Update() {
		return ((R (*)(CosmeticItemView*))(Il2CppBase() + 0x133F2E0))(this);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(CosmeticItemView*, uintptr_t))(Il2CppBase() + 0x133F4B8))(this, eventData);
	}
	template <typename R = bool> R HideTooltip() {
		return ((R (*)(CosmeticItemView*))(Il2CppBase() + 0x133F21C))(this);
	}
	template <typename R = void> R ShowTooltip() {
		return ((R (*)(CosmeticItemView*))(Il2CppBase() + 0x133F398))(this);
	}

};

