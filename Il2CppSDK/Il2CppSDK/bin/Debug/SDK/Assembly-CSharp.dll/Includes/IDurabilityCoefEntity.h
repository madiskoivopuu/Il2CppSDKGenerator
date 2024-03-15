#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDurabilityCoefEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDurabilityCoefEntity"));
	}


	template <typename R = DurabilityCoefComponent*> R get_durabilityCoef() {
		return ((R (*)(IDurabilityCoefEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDurabilityCoef() {
		return ((R (*)(IDurabilityCoefEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDurabilityCoef(float newValue) {
		return ((R (*)(IDurabilityCoefEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceDurabilityCoef(float newValue) {
		return ((R (*)(IDurabilityCoefEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveDurabilityCoef() {
		return ((R (*)(IDurabilityCoefEntity*))(Il2CppBase() + 0x0))(this);
	}

};

