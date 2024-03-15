#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IExpGainIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IExpGainIncPercentEntity"));
	}


	template <typename R = ExpGainIncPercentComponent*> R get_expGainIncPercent() {
		return ((R (*)(IExpGainIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasExpGainIncPercent() {
		return ((R (*)(IExpGainIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddExpGainIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IExpGainIncPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceExpGainIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IExpGainIncPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveExpGainIncPercent() {
		return ((R (*)(IExpGainIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

