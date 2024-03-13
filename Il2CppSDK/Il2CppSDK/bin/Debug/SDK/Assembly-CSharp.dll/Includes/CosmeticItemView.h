#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CosmeticItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CosmeticItemView"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _panel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _rarityViews() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _lockMark() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _currentMark() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _selectedMark() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _newMark() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _locked() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& _current() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = bool> T& _selected() {
		return *(T*)((uintptr_t)this + 0x5A);
	}
	template <typename T = bool> T& _isNew() {
		return *(T*)((uintptr_t)this + 0x5B);
	}
	template <typename T = TooltipView*> T& TooltipView() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = ItemEntity*> T& Item() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& ItemName() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Action1CosmeticItemView*>*> T& OnClick() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& _pressedTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = TooltipView*> T get_TooltipView() {
		return ((T (*)(CosmeticItemView*))(Il2CppBase() + 0x133E93C))(this);
	}
	template <typename T = void> T set_TooltipView(TooltipView* value) {
		return ((T (*)(CosmeticItemView*, TooltipView*))(Il2CppBase() + 0x133E944))(this, value);
	}
	template <typename T = uintptr_t> T get_Button() {
		return ((T (*)(CosmeticItemView*))(Il2CppBase() + 0x133E94C))(this);
	}
	template <typename T = ItemEntity*> T get_Item() {
		return ((T (*)(CosmeticItemView*))(Il2CppBase() + 0x133E954))(this);
	}
	template <typename T = void> T set_Item(ItemEntity* value) {
		return ((T (*)(CosmeticItemView*, ItemEntity*))(Il2CppBase() + 0x133E95C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ItemName() {
		return ((T (*)(CosmeticItemView*))(Il2CppBase() + 0x133E964))(this);
	}
	template <typename T = void> T set_ItemName(Il2CppString* value) {
		return ((T (*)(CosmeticItemView*, Il2CppString*))(Il2CppBase() + 0x133E96C))(this, value);
	}
	template <typename T = bool> T get_Locked() {
		return ((T (*)(CosmeticItemView*))(Il2CppBase() + 0x133E974))(this);
	}
	template <typename T = void> T set_Locked(bool value) {
		return ((T (*)(CosmeticItemView*, bool))(Il2CppBase() + 0x133E97C))(this, value);
	}
	template <typename T = void> T SetLocked(bool value) {
		return ((T (*)(CosmeticItemView*, bool))(Il2CppBase() + 0x133E99C))(this, value);
	}
	template <typename T = bool> T get_Current() {
		return ((T (*)(CosmeticItemView*))(Il2CppBase() + 0x133EA60))(this);
	}
	template <typename T = void> T set_Current(bool value) {
		return ((T (*)(CosmeticItemView*, bool))(Il2CppBase() + 0x133EA68))(this, value);
	}
	template <typename T = void> T SetCurrent(bool value) {
		return ((T (*)(CosmeticItemView*, bool))(Il2CppBase() + 0x133EA88))(this, value);
	}
	template <typename T = bool> T get_Selected() {
		return ((T (*)(CosmeticItemView*))(Il2CppBase() + 0x133EB4C))(this);
	}
	template <typename T = void> T set_Selected(bool value) {
		return ((T (*)(CosmeticItemView*, bool))(Il2CppBase() + 0x133EB54))(this, value);
	}
	template <typename T = void> T SetSelected(bool value) {
		return ((T (*)(CosmeticItemView*, bool))(Il2CppBase() + 0x133EB74))(this, value);
	}
	template <typename T = bool> T get_IsNew() {
		return ((T (*)(CosmeticItemView*))(Il2CppBase() + 0x133EC38))(this);
	}
	template <typename T = void> T set_IsNew(bool value) {
		return ((T (*)(CosmeticItemView*, bool))(Il2CppBase() + 0x133EC40))(this, value);
	}
	template <typename T = void> T SetNew(bool value) {
		return ((T (*)(CosmeticItemView*, bool))(Il2CppBase() + 0x133EC60))(this, value);
	}
	template <typename T = void> T add_OnClick(Action1CosmeticItemView*>* value) {
		return ((T (*)(CosmeticItemView*, Action1CosmeticItemView*>*))(Il2CppBase() + 0x133ED30))(this, value);
	}
	template <typename T = void> T remove_OnClick(Action1CosmeticItemView*>* value) {
		return ((T (*)(CosmeticItemView*, Action1CosmeticItemView*>*))(Il2CppBase() + 0x133EDD0))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CosmeticItemView*))(Il2CppBase() + 0x133EE70))(this);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(CosmeticItemView*))(Il2CppBase() + 0x133EEB4))(this);
	}
	template <typename T = void> T Show(ItemEntity* item) {
		return ((T (*)(CosmeticItemView*, ItemEntity*))(Il2CppBase() + 0x133EF0C))(this, item);
	}
	template <typename T = void> T UpdateLocked(Il2CppDictionary<Il2CppString*, bool>* availableCosmetics) {
		return ((T (*)(CosmeticItemView*, Il2CppDictionary<Il2CppString*, bool>*))(Il2CppBase() + 0x133F054))(this, availableCosmetics);
	}
	template <typename T = void> T UpdateIsNew(Il2CppDictionary<Il2CppString*, bool>* availableCosmetics) {
		return ((T (*)(CosmeticItemView*, Il2CppDictionary<Il2CppString*, bool>*))(Il2CppBase() + 0x133F114))(this, availableCosmetics);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(CosmeticItemView*, uintptr_t))(Il2CppBase() + 0x133F1D0))(this, eventData);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CosmeticItemView*))(Il2CppBase() + 0x133F2E0))(this);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(CosmeticItemView*, uintptr_t))(Il2CppBase() + 0x133F4B8))(this, eventData);
	}
	template <typename T = bool> T HideTooltip() {
		return ((T (*)(CosmeticItemView*))(Il2CppBase() + 0x133F21C))(this);
	}
	template <typename T = void> T ShowTooltip() {
		return ((T (*)(CosmeticItemView*))(Il2CppBase() + 0x133F398))(this);
	}

};

