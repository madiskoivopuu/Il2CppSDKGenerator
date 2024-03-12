#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnlockPremiumEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnlockPremiumEntity"));
	}


	template <typename T = uintptr_t> T get_unlockPremium() {
		return ((T (*)(IUnlockPremiumEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasUnlockPremium() {
		return ((T (*)(IUnlockPremiumEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddUnlockPremium(Il2CppString* newName, int32_t newSeason, int32_t newCycle) {
		return ((T (*)(IUnlockPremiumEntity*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, newName, newSeason, newCycle);
	}
	template <typename T = void> T ReplaceUnlockPremium(Il2CppString* newName, int32_t newSeason, int32_t newCycle) {
		return ((T (*)(IUnlockPremiumEntity*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, newName, newSeason, newCycle);
	}
	template <typename T = void> T RemoveUnlockPremium() {
		return ((T (*)(IUnlockPremiumEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
