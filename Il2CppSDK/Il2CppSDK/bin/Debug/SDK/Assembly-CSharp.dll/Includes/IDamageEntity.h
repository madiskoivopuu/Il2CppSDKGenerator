#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageEntity"));
	}


	template <typename T = DamageComponent*> T get_damage() {
		return ((T (*)(IDamageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDamage() {
		return ((T (*)(IDamageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDamage(float newValue) {
		return ((T (*)(IDamageEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceDamage(float newValue) {
		return ((T (*)(IDamageEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveDamage() {
		return ((T (*)(IDamageEntity*))(Il2CppBase() + 0x0))(this);
	}

};

