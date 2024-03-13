#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IExpGainIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IExpGainIncPercentEntity"));
	}


	template <typename T = ExpGainIncPercentComponent*> T get_expGainIncPercent() {
		return ((T (*)(IExpGainIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasExpGainIncPercent() {
		return ((T (*)(IExpGainIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddExpGainIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IExpGainIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceExpGainIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IExpGainIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveExpGainIncPercent() {
		return ((T (*)(IExpGainIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

