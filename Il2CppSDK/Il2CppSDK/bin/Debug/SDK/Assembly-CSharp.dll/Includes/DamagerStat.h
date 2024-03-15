#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamagerStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamagerStat"));
	}

	template <typename R = DamageStatType*> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& ClanName() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& GuildTag() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& Class() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int64_t> R& PlayerId() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = bool> R& Killer() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = float> R& TotalDmg() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	 Il2CppDictionary<Il2CppString*, float>*& Items() {
		return *(Il2CppDictionary<Il2CppString*, float>**)((uintptr_t)this + 0x50);
	}
	template <typename R = int64_t> R& Time() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = bool> R& IsPlayer() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = float> R& Power() {
		return *(R*)((uintptr_t)this + 0x64);
	}
	template <typename R = float> R& AttackDamage() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = float> R& AttackSpeed() {
		return *(R*)((uintptr_t)this + 0x6C);
	}
	template <typename R = float> R& Armor() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = float> R& MoveSpeed() {
		return *(R*)((uintptr_t)this + 0x74);
	}
	template <typename R = Gender*> R& Gender() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = Il2CppString*> R& Weapon() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppString*> R& Backpack() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Il2CppString*> R& Head() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = Il2CppString*> R& Chest() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = Il2CppString*> R& Legs() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = Il2CppString*> R& Feet() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = Il2CppString*> R& Pocket1() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = Il2CppString*> R& Pocket2() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = Il2CppString*> R& Hair() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = Il2CppString*> R& Beard() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = Il2CppString*> R& HairColor() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = Il2CppString*> R& SkinColor() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = Il2CppString*> R& Face() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = Il2CppString*> R& Clothes() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = Il2CppString*> R& Mount() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = Il2CppString*> R& Pet() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = Il2CppString*> R& Charm() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = Il2CppString*> R& CostumeHead() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = Il2CppString*> R& CostumeChest() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = Il2CppString*> R& CostumeLegs() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = bool> R& HideHead() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = bool> R& HidePet() {
		return *(R*)((uintptr_t)this + 0x121);
	}
	template <typename R = bool> R& HideBag() {
		return *(R*)((uintptr_t)this + 0x122);
	}


};

