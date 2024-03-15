#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass590
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass59_0"));
	}

	 Action1<GooglePlayGamesBasicApi::LeaderboardScoreData*>*& callback() {
		return *(Action1<GooglePlayGamesBasicApi::LeaderboardScoreData*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = GooglePlayGamesAndroid::AndroidClient*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& leaderboardId() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = GooglePlayGamesBasicApi::LeaderboardCollection> R& collection() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = GooglePlayGamesBasicApi::LeaderboardTimeSpan> R& timeSpan() {
		return *(R*)((uintptr_t)this + 0x2C);
	}

	template <typename R = void> R LoadScoresb__0(uintptr_t annotatedData) {
		return ((R (*)(cDisplayClass590*, uintptr_t))(Il2CppBase() + 0x113F154))(this, annotatedData);
	}
	template <typename R = void> R LoadScoresb__1(uintptr_t exception) {
		return ((R (*)(cDisplayClass590*, uintptr_t))(Il2CppBase() + 0x113F574))(this, exception);
	}

};

