#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameHelper"));
	}


	 static uintptr_t GetByGradeValue(int32_t grade, Il2CppArray<uintptr_t>* values, uintptr_t fallback) {
		return ((uintptr_t (*)(void *, int32_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(0, grade, values, fallback);
	}
	template <typename R = int32_t> static R GetRoundedWithRandom(IRandomManager* manager, float value) {
		return ((R (*)(void *, IRandomManager*, float))(Il2CppBase() + 0x174E260))(0, manager, value);
	}
	template <typename R = bool> static R IsTrophyPedestal(GameDataEntity* entityData) {
		return ((R (*)(void *, GameDataEntity*))(Il2CppBase() + 0x174E388))(0, entityData);
	}

};

