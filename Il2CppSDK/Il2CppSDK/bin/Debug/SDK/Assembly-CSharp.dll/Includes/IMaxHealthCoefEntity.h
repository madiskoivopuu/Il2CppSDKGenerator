#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxHealthCoefEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxHealthCoefEntity"));
	}


	template <typename R = MaxHealthCoefComponent*> R get_maxHealthCoef() {
		return ((R (*)(IMaxHealthCoefEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMaxHealthCoef() {
		return ((R (*)(IMaxHealthCoefEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMaxHealthCoef(float newValue) {
		return ((R (*)(IMaxHealthCoefEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceMaxHealthCoef(float newValue) {
		return ((R (*)(IMaxHealthCoefEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveMaxHealthCoef() {
		return ((R (*)(IMaxHealthCoefEntity*))(Il2CppBase() + 0x0))(this);
	}

};

