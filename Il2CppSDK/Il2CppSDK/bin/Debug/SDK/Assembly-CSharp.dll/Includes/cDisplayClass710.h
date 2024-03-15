#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass710
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass71_0"));
	}

	template <typename R = GooglePlayGames::PlayGamesPlatform*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& board() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Action1bool>*& callback() {
		return *(Action1bool>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R LoadScoresb__0(GooglePlayGamesBasicApi::LeaderboardScoreData* scoreData) {
		return ((R (*)(cDisplayClass710*, GooglePlayGamesBasicApi::LeaderboardScoreData*))(Il2CppBase() + 0x10B178C))(this, scoreData);
	}

};

