#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyTavernComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyTavernComponent"));
	}

	template <typename R = Il2CppArray<float>*> R& RewardCoefs() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = float> R GetRewardCoef(int32_t grade) {
		return ((R (*)(DailyTavernComponent*, int32_t))(Il2CppBase() + 0x164A60C))(this, grade);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(DailyTavernComponent*, Il2CppObject*))(Il2CppBase() + 0x164A65C))(this, target);
	}

};

