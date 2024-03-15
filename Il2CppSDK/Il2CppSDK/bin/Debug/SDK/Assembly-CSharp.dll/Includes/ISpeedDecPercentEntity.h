#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISpeedDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISpeedDecPercentEntity"));
	}


	template <typename R = SpeedDecPercentComponent*> R get_speedDecPercent() {
		return ((R (*)(ISpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSpeedDecPercent() {
		return ((R (*)(ISpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSpeedDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ISpeedDecPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSpeedDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ISpeedDecPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSpeedDecPercent() {
		return ((R (*)(ISpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

