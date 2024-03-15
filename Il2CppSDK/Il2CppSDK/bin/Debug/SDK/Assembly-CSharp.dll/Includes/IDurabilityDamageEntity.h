#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDurabilityDamageEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDurabilityDamageEntity"));
	}


	template <typename R = DurabilityDamageComponent*> R get_durabilityDamage() {
		return ((R (*)(IDurabilityDamageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDurabilityDamage() {
		return ((R (*)(IDurabilityDamageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDurabilityDamage(float newValue) {
		return ((R (*)(IDurabilityDamageEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceDurabilityDamage(float newValue) {
		return ((R (*)(IDurabilityDamageEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveDurabilityDamage() {
		return ((R (*)(IDurabilityDamageEntity*))(Il2CppBase() + 0x0))(this);
	}

};

