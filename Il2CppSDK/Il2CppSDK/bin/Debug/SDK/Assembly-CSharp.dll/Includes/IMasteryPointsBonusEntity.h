#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMasteryPointsBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMasteryPointsBonusEntity"));
	}


	template <typename T = uintptr_t> T get_masteryPointsBonus() {
		return ((T (*)(IMasteryPointsBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMasteryPointsBonus() {
		return ((T (*)(IMasteryPointsBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMasteryPointsBonus(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMasteryPointsBonusEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMasteryPointsBonus(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMasteryPointsBonusEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMasteryPointsBonus() {
		return ((T (*)(IMasteryPointsBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
