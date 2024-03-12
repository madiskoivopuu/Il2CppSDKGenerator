#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILifeStealEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILifeStealEntity"));
	}


	template <typename T = uintptr_t> T get_lifeSteal() {
		return ((T (*)(ILifeStealEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasLifeSteal() {
		return ((T (*)(ILifeStealEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddLifeSteal(float newValue, uintptr_t newGroup) {
		return ((T (*)(ILifeStealEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceLifeSteal(float newValue, uintptr_t newGroup) {
		return ((T (*)(ILifeStealEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveLifeSteal() {
		return ((T (*)(ILifeStealEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
