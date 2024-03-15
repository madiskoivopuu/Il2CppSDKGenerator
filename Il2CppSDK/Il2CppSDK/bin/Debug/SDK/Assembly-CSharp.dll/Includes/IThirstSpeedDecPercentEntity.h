#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IThirstSpeedDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IThirstSpeedDecPercentEntity"));
	}


	template <typename R = ThirstSpeedDecPercentComponent*> R get_thirstSpeedDecPercent() {
		return ((R (*)(IThirstSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasThirstSpeedDecPercent() {
		return ((R (*)(IThirstSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddThirstSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IThirstSpeedDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceThirstSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IThirstSpeedDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveThirstSpeedDecPercent() {
		return ((R (*)(IThirstSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

