#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAIPocketsStateEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAIPocketsStateEntity"));
	}


	template <typename T = uintptr_t> T get_aIPocketsState() {
		return ((T (*)(IAIPocketsStateEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAIPocketsState() {
		return ((T (*)(IAIPocketsStateEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAIPocketsState(uintptr_t newPocket1, uintptr_t newPocket2, uintptr_t newPocket3, uintptr_t newSkill1, uintptr_t newSkill2, uintptr_t newSkill3, uintptr_t newSkill4, uintptr_t newSkill5) {
		return ((T (*)(IAIPocketsStateEntity*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, newPocket1, newPocket2, newPocket3, newSkill1, newSkill2, newSkill3, newSkill4, newSkill5);
	}
	template <typename T = void> T ReplaceAIPocketsState(uintptr_t newPocket1, uintptr_t newPocket2, uintptr_t newPocket3, uintptr_t newSkill1, uintptr_t newSkill2, uintptr_t newSkill3, uintptr_t newSkill4, uintptr_t newSkill5) {
		return ((T (*)(IAIPocketsStateEntity*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, newPocket1, newPocket2, newPocket3, newSkill1, newSkill2, newSkill3, newSkill4, newSkill5);
	}
	template <typename T = void> T RemoveAIPocketsState() {
		return ((T (*)(IAIPocketsStateEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
