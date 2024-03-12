#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SeasonHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonHelper"));
	}


	template <typename T = void*> static T GetSeasonsData(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x135F8D0))(0, world);
	}
	template <typename T = uintptr_t> static T GetActiveSeason(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x135FBB4))(0, world);
	}
	template <typename T = bool> static T IsActive(uintptr_t seasonEntity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x135FDEC))(0, seasonEntity, world);
	}
	template <typename T = int32_t> static T GetDayIndex(uintptr_t seasonEntity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x135FF4C))(0, seasonEntity, world);
	}
	template <typename T = bool> static T CanClaimReward(uintptr_t seasonEntity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x13600E0))(0, seasonEntity, world);
	}
	template <typename T = bool> static T CanGetSeasonCurrency(uintptr_t world, int64_t playerId, uintptr_t currencyType) {
		return ((T (*)(void *, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x1360318))(0, world, playerId, currencyType);
	}
	template <typename T = Il2CppString*> static T GetSeasonEventName(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x136046C))(0, world);
	}

};

}
