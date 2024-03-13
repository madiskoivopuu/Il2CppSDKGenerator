#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxHealthEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxHealthEntity"));
	}


	template <typename T = MaxHealthComponent*> T get_maxHealth() {
		return ((T (*)(IMaxHealthEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMaxHealth() {
		return ((T (*)(IMaxHealthEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMaxHealth(float newValue, float newResurrectValue) {
		return ((T (*)(IMaxHealthEntity*, float, float))(Il2CppBase() + 0x0))(this, newValue, newResurrectValue);
	}
	template <typename T = void> T ReplaceMaxHealth(float newValue, float newResurrectValue) {
		return ((T (*)(IMaxHealthEntity*, float, float))(Il2CppBase() + 0x0))(this, newValue, newResurrectValue);
	}
	template <typename T = void> T RemoveMaxHealth() {
		return ((T (*)(IMaxHealthEntity*))(Il2CppBase() + 0x0))(this);
	}

};

