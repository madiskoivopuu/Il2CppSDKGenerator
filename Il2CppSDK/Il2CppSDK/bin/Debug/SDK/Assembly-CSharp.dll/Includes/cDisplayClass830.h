#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass830
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass83_0"));
	}

	template <typename R = GooglePlayGames::PlayGamesPlatform*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = GooglePlayGames::PlayGamesLeaderboard*> R& board() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Action1<bool>*& callback() {
		return *(Action1<bool>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R HandleLoadingScoresb__0(GooglePlayGamesBasicApi::LeaderboardScoreData* nextScoreData) {
		return ((R (*)(cDisplayClass830*, GooglePlayGamesBasicApi::LeaderboardScoreData*))(Il2CppBase() + 0x10B1838))(this, nextScoreData);
	}

};

