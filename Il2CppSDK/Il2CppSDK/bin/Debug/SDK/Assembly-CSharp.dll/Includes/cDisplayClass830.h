#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass830
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass83_0"));
	}

	template <typename T = PlayGamesPlatform*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = PlayGamesLeaderboard*> T& board() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Action1bool>*> T& callback() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T HandleLoadingScoresb__0(LeaderboardScoreData* nextScoreData) {
		return ((T (*)(cDisplayClass830*, LeaderboardScoreData*))(Il2CppBase() + 0x10B1838))(this, nextScoreData);
	}

};

