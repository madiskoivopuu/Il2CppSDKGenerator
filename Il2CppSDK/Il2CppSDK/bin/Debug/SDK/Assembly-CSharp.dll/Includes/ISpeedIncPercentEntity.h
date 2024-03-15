#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISpeedIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISpeedIncPercentEntity"));
	}


	template <typename R = SpeedIncPercentComponent*> R get_speedIncPercent() {
		return ((R (*)(ISpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSpeedIncPercent() {
		return ((R (*)(ISpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(ISpeedIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(ISpeedIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSpeedIncPercent() {
		return ((R (*)(ISpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

