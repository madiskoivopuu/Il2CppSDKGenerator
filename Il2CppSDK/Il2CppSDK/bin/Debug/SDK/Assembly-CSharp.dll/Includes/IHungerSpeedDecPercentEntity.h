#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHungerSpeedDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHungerSpeedDecPercentEntity"));
	}


	template <typename R = HungerSpeedDecPercentComponent*> R get_hungerSpeedDecPercent() {
		return ((R (*)(IHungerSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasHungerSpeedDecPercent() {
		return ((R (*)(IHungerSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddHungerSpeedDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IHungerSpeedDecPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHungerSpeedDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IHungerSpeedDecPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHungerSpeedDecPercent() {
		return ((R (*)(IHungerSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

