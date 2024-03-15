#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IThirstSpeedIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IThirstSpeedIncPercentEntity"));
	}


	template <typename R = ThirstSpeedIncPercentComponent*> R get_thirstSpeedIncPercent() {
		return ((R (*)(IThirstSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasThirstSpeedIncPercent() {
		return ((R (*)(IThirstSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddThirstSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IThirstSpeedIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceThirstSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IThirstSpeedIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveThirstSpeedIncPercent() {
		return ((R (*)(IThirstSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

