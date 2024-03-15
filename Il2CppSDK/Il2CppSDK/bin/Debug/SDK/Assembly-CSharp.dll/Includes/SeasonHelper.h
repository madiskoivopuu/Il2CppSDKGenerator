#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SeasonHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonHelper"));
	}


	 static ValueTuple2<SeasonEntity*, SeasonEntity*>* GetSeasonsData(ICommonContexts* world) {
		return ((ValueTuple2<SeasonEntity*, SeasonEntity*>* (*)(void *, ICommonContexts*))(Il2CppBase() + 0x135F8D0))(0, world);
	}
	template <typename R = SeasonEntity*> static R GetActiveSeason(ICommonContexts* world) {
		return ((R (*)(void *, ICommonContexts*))(Il2CppBase() + 0x135FBB4))(0, world);
	}
	template <typename R = bool> static R IsActive(SeasonEntity* seasonEntity, ICommonContexts* world) {
		return ((R (*)(void *, SeasonEntity*, ICommonContexts*))(Il2CppBase() + 0x135FDEC))(0, seasonEntity, world);
	}
	template <typename R = int32_t> static R GetDayIndex(SeasonEntity* seasonEntity, ICommonContexts* world) {
		return ((R (*)(void *, SeasonEntity*, ICommonContexts*))(Il2CppBase() + 0x135FF4C))(0, seasonEntity, world);
	}
	template <typename R = bool> static R CanClaimReward(SeasonEntity* seasonEntity, ICommonContexts* world) {
		return ((R (*)(void *, SeasonEntity*, ICommonContexts*))(Il2CppBase() + 0x13600E0))(0, seasonEntity, world);
	}
	template <typename R = bool> static R CanGetSeasonCurrency(ICommonContexts* world, int64_t playerId, CurrencyType currencyType) {
		return ((R (*)(void *, ICommonContexts*, int64_t, CurrencyType))(Il2CppBase() + 0x1360318))(0, world, playerId, currencyType);
	}
	template <typename R = Il2CppString*> static R GetSeasonEventName(ICommonContexts* world) {
		return ((R (*)(void *, ICommonContexts*))(Il2CppBase() + 0x136046C))(0, world);
	}

};

