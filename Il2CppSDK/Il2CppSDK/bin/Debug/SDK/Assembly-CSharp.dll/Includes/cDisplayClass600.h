#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass600
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass60_0"));
	}

	 Action1GooglePlayGamesBasicApi::LeaderboardScoreData*>*& callback() {
		return *(Action1GooglePlayGamesBasicApi::LeaderboardScoreData*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = GooglePlayGamesAndroid::AndroidClient*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = GooglePlayGamesBasicApi::ScorePageToken*> R& token() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R LoadMoreScoresb__0(uintptr_t annotatedData) {
		return ((R (*)(cDisplayClass600*, uintptr_t))(Il2CppBase() + 0x113FA40))(this, annotatedData);
	}
	template <typename R = void> R LoadMoreScoresb__1(uintptr_t exception) {
		return ((R (*)(cDisplayClass600*, uintptr_t))(Il2CppBase() + 0x113FE70))(this, exception);
	}

};

