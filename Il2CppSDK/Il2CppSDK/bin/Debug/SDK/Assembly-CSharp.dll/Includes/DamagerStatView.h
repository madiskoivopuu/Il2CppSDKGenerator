#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamagerStatView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamagerStatView"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _showClanName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _totalDmg() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _killerMark() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _selectedMark() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _classIcon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _items() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& ClickEvent() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& TooltipView() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& Key() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = bool> T get_Selected() {
		return ((T (*)(DamagerStatView*))(Il2CppBase() + 0x164CA60))(this);
	}
	template <typename T = void> T set_Selected(bool value) {
		return ((T (*)(DamagerStatView*, bool))(Il2CppBase() + 0x164CA7C))(this, value);
	}
	template <typename T = void> T add_ClickEvent(void* value) {
		return ((T (*)(DamagerStatView*, void*))(Il2CppBase() + 0x164CAD4))(this, value);
	}
	template <typename T = void> T remove_ClickEvent(void* value) {
		return ((T (*)(DamagerStatView*, void*))(Il2CppBase() + 0x164CB74))(this, value);
	}
	template <typename T = uintptr_t> T get_TooltipView() {
		return ((T (*)(DamagerStatView*))(Il2CppBase() + 0x164CC14))(this);
	}
	template <typename T = void> T set_TooltipView(uintptr_t value) {
		return ((T (*)(DamagerStatView*, uintptr_t))(Il2CppBase() + 0x164CC1C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Key() {
		return ((T (*)(DamagerStatView*))(Il2CppBase() + 0x164CC24))(this);
	}
	template <typename T = void> T set_Key(Il2CppString* value) {
		return ((T (*)(DamagerStatView*, Il2CppString*))(Il2CppBase() + 0x164CC2C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DamagerStatView*))(Il2CppBase() + 0x164CC34))(this);
	}
	template <typename T = void> T Show(Il2CppString* key, uintptr_t damagerStat) {
		return ((T (*)(DamagerStatView*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x164CCD0))(this, key, damagerStat);
	}
	template <typename T = void> T Awakeb__23_0() {
		return ((T (*)(DamagerStatView*))(Il2CppBase() + 0x164D890))(this);
	}

};

}
