#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHealthCoefEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHealthCoefEntity"));
	}


	template <typename R = HealthCoefComponent*> R get_healthCoef() {
		return ((R (*)(IHealthCoefEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasHealthCoef() {
		return ((R (*)(IHealthCoefEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddHealthCoef(float newValue) {
		return ((R (*)(IHealthCoefEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceHealthCoef(float newValue) {
		return ((R (*)(IHealthCoefEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveHealthCoef() {
		return ((R (*)(IHealthCoefEntity*))(Il2CppBase() + 0x0))(this);
	}

};

