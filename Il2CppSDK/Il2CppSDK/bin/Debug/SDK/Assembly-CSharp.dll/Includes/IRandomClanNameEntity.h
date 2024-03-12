#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRandomClanNameEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRandomClanNameEntity"));
	}


	template <typename T = uintptr_t> T get_randomClanName() {
		return ((T (*)(IRandomClanNameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRandomClanName() {
		return ((T (*)(IRandomClanNameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRandomClanName(uintptr_t newRule, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IRandomClanNameEntity*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newRule, newNames);
	}
	template <typename T = void> T ReplaceRandomClanName(uintptr_t newRule, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IRandomClanNameEntity*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newRule, newNames);
	}
	template <typename T = void> T RemoveRandomClanName() {
		return ((T (*)(IRandomClanNameEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
