#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITenacityCoefEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITenacityCoefEntity"));
	}


	template <typename R = TenacityCoefComponent*> R get_tenacityCoef() {
		return ((R (*)(ITenacityCoefEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTenacityCoef() {
		return ((R (*)(ITenacityCoefEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTenacityCoef(float newValue) {
		return ((R (*)(ITenacityCoefEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceTenacityCoef(float newValue) {
		return ((R (*)(ITenacityCoefEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveTenacityCoef() {
		return ((R (*)(ITenacityCoefEntity*))(Il2CppBase() + 0x0))(this);
	}

};

