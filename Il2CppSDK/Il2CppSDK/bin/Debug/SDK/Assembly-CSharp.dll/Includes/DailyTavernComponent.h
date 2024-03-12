#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyTavernComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyTavernComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& RewardCoefs() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = float> T GetRewardCoef(int32_t grade) {
		return ((T (*)(DailyTavernComponent*, int32_t))(Il2CppBase() + 0x164A60C))(this, grade);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(DailyTavernComponent*, uintptr_t))(Il2CppBase() + 0x164A65C))(this, target);
	}

};

}
