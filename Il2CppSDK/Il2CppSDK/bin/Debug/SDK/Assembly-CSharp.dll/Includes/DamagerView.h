#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamagerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamagerView"));
	}

	template <typename R = PuppetRendererController*> R& _puppetRenderer() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _name() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _clanName() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _statsPanel() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _powerText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _attackSpeedText() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _armorText() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _attackDamageText() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _moveSpeedText() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _slotsPanel() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = ItemView*> R& _headSlot() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = ItemView*> R& _chestSlot() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = ItemView*> R& _legsSlot() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = ItemView*> R& _feetSlot() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = ItemView*> R& _weaponSlot() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = ItemView*> R& _backPackSlot() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = ItemView*> R& _pocket1Slot() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = ItemView*> R& _pocket2Slot() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = ItemView*> R& _charmSlot() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = ItemView*> R& _classSlot() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = ItemView*> R& _petSlot() {
		return *(R*)((uintptr_t)this + 0xB8);
	}

	template <typename R = void> R Init(TooltipView* tooltip) {
		return ((R (*)(DamagerView*, TooltipView*))(Il2CppBase() + 0x164D8F0))(this, tooltip);
	}
	template <typename R = void> R Show(DamagerStat* damager) {
		return ((R (*)(DamagerView*, DamagerStat*))(Il2CppBase() + 0x164DA60))(this, damager);
	}
	template <typename R = void> R Hide() {
		return ((R (*)(DamagerView*))(Il2CppBase() + 0x164E910))(this);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(DamagerView*))(Il2CppBase() + 0x164E978))(this);
	}

};

