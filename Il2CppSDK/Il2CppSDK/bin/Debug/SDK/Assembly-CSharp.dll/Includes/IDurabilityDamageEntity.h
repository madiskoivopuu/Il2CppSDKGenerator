#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDurabilityDamageEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDurabilityDamageEntity"));
	}


	template <typename T = DurabilityDamageComponent*> T get_durabilityDamage() {
		return ((T (*)(IDurabilityDamageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDurabilityDamage() {
		return ((T (*)(IDurabilityDamageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDurabilityDamage(float newValue) {
		return ((T (*)(IDurabilityDamageEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceDurabilityDamage(float newValue) {
		return ((T (*)(IDurabilityDamageEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveDurabilityDamage() {
		return ((T (*)(IDurabilityDamageEntity*))(Il2CppBase() + 0x0))(this);
	}

};

