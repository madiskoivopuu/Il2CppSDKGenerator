#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITenacityCoefEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITenacityCoefEntity"));
	}


	template <typename T = TenacityCoefComponent*> T get_tenacityCoef() {
		return ((T (*)(ITenacityCoefEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTenacityCoef() {
		return ((T (*)(ITenacityCoefEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTenacityCoef(float newValue) {
		return ((T (*)(ITenacityCoefEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceTenacityCoef(float newValue) {
		return ((T (*)(ITenacityCoefEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveTenacityCoef() {
		return ((T (*)(ITenacityCoefEntity*))(Il2CppBase() + 0x0))(this);
	}

};

