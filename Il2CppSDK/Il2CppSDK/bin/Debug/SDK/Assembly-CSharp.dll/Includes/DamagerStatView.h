#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamagerStatView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamagerStatView"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _name() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& _showClanName() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _totalDmg() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _killerMark() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _selectedMark() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _classIcon() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppArray<ItemDamageStatView*>*> R& _items() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	 Action1<DamagerStatView*>*& ClickEvent() {
		return *(Action1<DamagerStatView*>**)((uintptr_t)this + 0x58);
	}
	template <typename R = TooltipView*> R& TooltipView() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& Key() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	template <typename R = bool> R get_Selected() {
		return ((R (*)(DamagerStatView*))(Il2CppBase() + 0x164CA60))(this);
	}
	template <typename R = void> R set_Selected(bool value) {
		return ((R (*)(DamagerStatView*, bool))(Il2CppBase() + 0x164CA7C))(this, value);
	}
	template <typename R = void> R add_ClickEvent(Action1<DamagerStatView*>* value) {
		return ((R (*)(DamagerStatView*, Action1<DamagerStatView*>*))(Il2CppBase() + 0x164CAD4))(this, value);
	}
	template <typename R = void> R remove_ClickEvent(Action1<DamagerStatView*>* value) {
		return ((R (*)(DamagerStatView*, Action1<DamagerStatView*>*))(Il2CppBase() + 0x164CB74))(this, value);
	}
	template <typename R = TooltipView*> R get_TooltipView() {
		return ((R (*)(DamagerStatView*))(Il2CppBase() + 0x164CC14))(this);
	}
	template <typename R = void> R set_TooltipView(TooltipView* value) {
		return ((R (*)(DamagerStatView*, TooltipView*))(Il2CppBase() + 0x164CC1C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Key() {
		return ((R (*)(DamagerStatView*))(Il2CppBase() + 0x164CC24))(this);
	}
	template <typename R = void> R set_Key(Il2CppString* value) {
		return ((R (*)(DamagerStatView*, Il2CppString*))(Il2CppBase() + 0x164CC2C))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(DamagerStatView*))(Il2CppBase() + 0x164CC34))(this);
	}
	template <typename R = void> R Show(Il2CppString* key, DamagerStat* damagerStat) {
		return ((R (*)(DamagerStatView*, Il2CppString*, DamagerStat*))(Il2CppBase() + 0x164CCD0))(this, key, damagerStat);
	}
	template <typename R = void> R Awakeb__23_0() {
		return ((R (*)(DamagerStatView*))(Il2CppBase() + 0x164D890))(this);
	}

};

