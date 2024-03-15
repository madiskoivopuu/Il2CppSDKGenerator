#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHealEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHealEntity"));
	}


	template <typename R = HealComponent*> R get_heal() {
		return ((R (*)(IHealEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasHeal() {
		return ((R (*)(IHealEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddHeal(float newValue) {
		return ((R (*)(IHealEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceHeal(float newValue) {
		return ((R (*)(IHealEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveHeal() {
		return ((R (*)(IHealEntity*))(Il2CppBase() + 0x0))(this);
	}

};

