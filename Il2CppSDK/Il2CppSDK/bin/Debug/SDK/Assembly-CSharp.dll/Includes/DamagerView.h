#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamagerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamagerView"));
	}

	template <typename T = uintptr_t> T& _puppetRenderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _clanName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _statsPanel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _powerText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _attackSpeedText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _armorText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _attackDamageText() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _moveSpeedText() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _slotsPanel() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _headSlot() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _chestSlot() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _legsSlot() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _feetSlot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _weaponSlot() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _backPackSlot() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _pocket1Slot() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _pocket2Slot() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _charmSlot() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _classSlot() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _petSlot() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T Init(uintptr_t tooltip) {
		return ((T (*)(DamagerView*, uintptr_t))(Il2CppBase() + 0x164D8F0))(this, tooltip);
	}
	template <typename T = void> T Show(uintptr_t damager) {
		return ((T (*)(DamagerView*, uintptr_t))(Il2CppBase() + 0x164DA60))(this, damager);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(DamagerView*))(Il2CppBase() + 0x164E910))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DamagerView*))(Il2CppBase() + 0x164E978))(this);
	}

};

}
