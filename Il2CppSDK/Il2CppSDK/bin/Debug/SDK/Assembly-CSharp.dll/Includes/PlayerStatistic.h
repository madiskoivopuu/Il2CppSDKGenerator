#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerStatistic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerStatistic"));
	}

	template <typename R = int32_t> R& Level() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& PlayerClass() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Mount() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& Pet() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& Weapon() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& Chest() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& Head() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& Legs() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& Feet() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& Pocket1() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppString*> R& Pocket2() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& Charm() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Runes() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	 Il2CppDictionary<Il2CppString*, float>*& ItemsDamage() {
		return *(Il2CppDictionary<Il2CppString*, float>**)((uintptr_t)this + 0x78);
	}
	 Il2CppDictionary<Il2CppString*, float>*& ItemsHeal() {
		return *(Il2CppDictionary<Il2CppString*, float>**)((uintptr_t)this + 0x80);
	}
	template <typename R = float> R& DamageRecieved() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = float> R& DamageDone() {
		return *(R*)((uintptr_t)this + 0x8C);
	}
	template <typename R = float> R& HealRecieved() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = float> R& AliveDuration() {
		return *(R*)((uintptr_t)this + 0x94);
	}


};

