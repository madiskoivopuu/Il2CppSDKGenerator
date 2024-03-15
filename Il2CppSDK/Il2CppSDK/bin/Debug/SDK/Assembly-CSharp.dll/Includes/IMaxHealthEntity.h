#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxHealthEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxHealthEntity"));
	}


	template <typename R = MaxHealthComponent*> R get_maxHealth() {
		return ((R (*)(IMaxHealthEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMaxHealth() {
		return ((R (*)(IMaxHealthEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMaxHealth(float newValue, float newResurrectValue) {
		return ((R (*)(IMaxHealthEntity*, float, float))(Il2CppBase() + 0x0))(this, newValue, newResurrectValue);
	}
	template <typename R = void> R ReplaceMaxHealth(float newValue, float newResurrectValue) {
		return ((R (*)(IMaxHealthEntity*, float, float))(Il2CppBase() + 0x0))(this, newValue, newResurrectValue);
	}
	template <typename R = void> R RemoveMaxHealth() {
		return ((R (*)(IMaxHealthEntity*))(Il2CppBase() + 0x0))(this);
	}

};

