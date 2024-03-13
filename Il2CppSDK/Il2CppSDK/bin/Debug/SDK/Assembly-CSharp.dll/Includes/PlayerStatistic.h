#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerStatistic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerStatistic"));
	}

	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& PlayerClass() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Mount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Pet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Weapon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Chest() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& Head() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& Legs() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& Feet() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& Pocket1() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& Pocket2() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& Charm() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Runes() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, float>*> T& ItemsDamage() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, float>*> T& ItemsHeal() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& DamageRecieved() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& DamageDone() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& HealRecieved() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& AliveDuration() {
		return *(T*)((uintptr_t)this + 0x94);
	}


};

