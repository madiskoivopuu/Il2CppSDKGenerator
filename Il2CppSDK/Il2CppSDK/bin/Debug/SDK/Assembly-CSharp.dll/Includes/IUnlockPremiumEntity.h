#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnlockPremiumEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnlockPremiumEntity"));
	}


	template <typename R = UnlockPremiumComponent*> R get_unlockPremium() {
		return ((R (*)(IUnlockPremiumEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasUnlockPremium() {
		return ((R (*)(IUnlockPremiumEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddUnlockPremium(Il2CppString* newName, int32_t newSeason, int32_t newCycle) {
		return ((R (*)(IUnlockPremiumEntity*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, newName, newSeason, newCycle);
	}
	template <typename R = void> R ReplaceUnlockPremium(Il2CppString* newName, int32_t newSeason, int32_t newCycle) {
		return ((R (*)(IUnlockPremiumEntity*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, newName, newSeason, newCycle);
	}
	template <typename R = void> R RemoveUnlockPremium() {
		return ((R (*)(IUnlockPremiumEntity*))(Il2CppBase() + 0x0))(this);
	}

};

