#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass280
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass28_0"));
	}

	template <typename R = GooglePlayGames::PlayGamesLocalUser*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Action2GooglePlayGamesBasicApi::CommonStatusCodes*, GooglePlayGamesBasicApi::PlayerStats*>*& callback() {
		return *(Action2GooglePlayGamesBasicApi::CommonStatusCodes*, GooglePlayGamesBasicApi::PlayerStats*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R GetStatsb__0(GooglePlayGamesBasicApi::CommonStatusCodes* rc, GooglePlayGamesBasicApi::PlayerStats* stats) {
		return ((R (*)(cDisplayClass280*, GooglePlayGamesBasicApi::CommonStatusCodes*, GooglePlayGamesBasicApi::PlayerStats*))(Il2CppBase() + 0x10B0464))(this, rc, stats);
	}

};

