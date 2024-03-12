#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxHealthCoefEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxHealthCoefEntity"));
	}


	template <typename T = uintptr_t> T get_maxHealthCoef() {
		return ((T (*)(IMaxHealthCoefEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMaxHealthCoef() {
		return ((T (*)(IMaxHealthCoefEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMaxHealthCoef(float newValue) {
		return ((T (*)(IMaxHealthCoefEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceMaxHealthCoef(float newValue) {
		return ((T (*)(IMaxHealthCoefEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveMaxHealthCoef() {
		return ((T (*)(IMaxHealthCoefEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
