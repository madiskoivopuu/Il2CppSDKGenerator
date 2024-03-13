#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SeasonHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonHelper"));
	}


	template <typename T = ValueTuple2SeasonEntity*, SeasonEntity*>*> static T GetSeasonsData(ICommonContexts* world) {
		return ((T (*)(void *, ICommonContexts*))(Il2CppBase() + 0x135F8D0))(0, world);
	}
	template <typename T = SeasonEntity*> static T GetActiveSeason(ICommonContexts* world) {
		return ((T (*)(void *, ICommonContexts*))(Il2CppBase() + 0x135FBB4))(0, world);
	}
	template <typename T = bool> static T IsActive(SeasonEntity* seasonEntity, ICommonContexts* world) {
		return ((T (*)(void *, SeasonEntity*, ICommonContexts*))(Il2CppBase() + 0x135FDEC))(0, seasonEntity, world);
	}
	template <typename T = int32_t> static T GetDayIndex(SeasonEntity* seasonEntity, ICommonContexts* world) {
		return ((T (*)(void *, SeasonEntity*, ICommonContexts*))(Il2CppBase() + 0x135FF4C))(0, seasonEntity, world);
	}
	template <typename T = bool> static T CanClaimReward(SeasonEntity* seasonEntity, ICommonContexts* world) {
		return ((T (*)(void *, SeasonEntity*, ICommonContexts*))(Il2CppBase() + 0x13600E0))(0, seasonEntity, world);
	}
	template <typename T = bool> static T CanGetSeasonCurrency(ICommonContexts* world, int64_t playerId, CurrencyType* currencyType) {
		return ((T (*)(void *, ICommonContexts*, int64_t, CurrencyType*))(Il2CppBase() + 0x1360318))(0, world, playerId, currencyType);
	}
	template <typename T = Il2CppString*> static T GetSeasonEventName(ICommonContexts* world) {
		return ((T (*)(void *, ICommonContexts*))(Il2CppBase() + 0x136046C))(0, world);
	}

};

