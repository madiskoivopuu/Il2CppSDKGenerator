#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMasteryPointsBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMasteryPointsBonusEntity"));
	}


	template <typename R = MasteryPointsBonusComponent*> R get_masteryPointsBonus() {
		return ((R (*)(IMasteryPointsBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMasteryPointsBonus() {
		return ((R (*)(IMasteryPointsBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMasteryPointsBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IMasteryPointsBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMasteryPointsBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IMasteryPointsBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMasteryPointsBonus() {
		return ((R (*)(IMasteryPointsBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

