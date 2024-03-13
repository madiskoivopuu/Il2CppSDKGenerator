#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDurabilityCoefEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDurabilityCoefEntity"));
	}


	template <typename T = DurabilityCoefComponent*> T get_durabilityCoef() {
		return ((T (*)(IDurabilityCoefEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDurabilityCoef() {
		return ((T (*)(IDurabilityCoefEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDurabilityCoef(float newValue) {
		return ((T (*)(IDurabilityCoefEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceDurabilityCoef(float newValue) {
		return ((T (*)(IDurabilityCoefEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveDurabilityCoef() {
		return ((T (*)(IDurabilityCoefEntity*))(Il2CppBase() + 0x0))(this);
	}

};

