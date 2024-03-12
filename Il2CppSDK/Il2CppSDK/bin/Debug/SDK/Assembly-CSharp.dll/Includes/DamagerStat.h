#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamagerStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamagerStat"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& ClanName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& GuildTag() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Class() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& Killer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& TotalDmg() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, float>*> T& Items() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int64_t> T& Time() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& IsPlayer() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& Power() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& AttackDamage() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& AttackSpeed() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& Armor() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& MoveSpeed() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& Gender() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& Weapon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& Backpack() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& Head() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& Chest() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& Legs() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& Feet() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& Pocket1() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& Pocket2() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& Hair() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& Beard() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& HairColor() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppString*> T& SkinColor() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppString*> T& Face() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppString*> T& Clothes() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppString*> T& Mount() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppString*> T& Pet() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> T& Charm() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppString*> T& CostumeHead() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppString*> T& CostumeChest() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppString*> T& CostumeLegs() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& HideHead() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& HidePet() {
		return *(T*)((uintptr_t)this + 0x121);
	}
	template <typename T = bool> T& HideBag() {
		return *(T*)((uintptr_t)this + 0x122);
	}


};

}
