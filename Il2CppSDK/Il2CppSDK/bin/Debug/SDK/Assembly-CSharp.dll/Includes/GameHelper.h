#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameHelper"));
	}


	template <typename T = uintptr_t> static T GetByGradeValue(int32_t grade, Il2CppArray<uintptr_t>* values, uintptr_t fallback) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(0, grade, values, fallback);
	}
	template <typename T = int32_t> static T GetRoundedWithRandom(uintptr_t manager, float value) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x174E260))(0, manager, value);
	}
	template <typename T = bool> static T IsTrophyPedestal(uintptr_t entityData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x174E388))(0, entityData);
	}

};

}
