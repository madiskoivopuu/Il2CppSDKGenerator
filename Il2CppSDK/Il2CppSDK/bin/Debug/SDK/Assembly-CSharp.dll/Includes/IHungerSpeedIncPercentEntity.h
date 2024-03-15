#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHungerSpeedIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHungerSpeedIncPercentEntity"));
	}


	template <typename R = HungerSpeedIncPercentComponent*> R get_hungerSpeedIncPercent() {
		return ((R (*)(IHungerSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasHungerSpeedIncPercent() {
		return ((R (*)(IHungerSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddHungerSpeedIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IHungerSpeedIncPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHungerSpeedIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IHungerSpeedIncPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHungerSpeedIncPercent() {
		return ((R (*)(IHungerSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

