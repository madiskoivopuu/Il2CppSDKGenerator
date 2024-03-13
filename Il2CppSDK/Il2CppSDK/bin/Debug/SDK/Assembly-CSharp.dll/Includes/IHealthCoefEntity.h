#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHealthCoefEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHealthCoefEntity"));
	}


	template <typename T = HealthCoefComponent*> T get_healthCoef() {
		return ((T (*)(IHealthCoefEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasHealthCoef() {
		return ((T (*)(IHealthCoefEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddHealthCoef(float newValue) {
		return ((T (*)(IHealthCoefEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceHealthCoef(float newValue) {
		return ((T (*)(IHealthCoefEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveHealthCoef() {
		return ((T (*)(IHealthCoefEntity*))(Il2CppBase() + 0x0))(this);
	}

};

