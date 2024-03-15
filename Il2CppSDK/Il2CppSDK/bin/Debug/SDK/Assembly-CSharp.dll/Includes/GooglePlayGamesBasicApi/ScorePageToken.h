#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApi {

class ScorePageToken
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApi", "ScorePageToken"));
	}

	template <typename R = Il2CppString*> R& mId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& mInternalObject() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = GooglePlayGamesBasicApi::LeaderboardCollection*> R& mCollection() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = GooglePlayGamesBasicApi::LeaderboardTimeSpan*> R& mTimespan() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = GooglePlayGamesBasicApi::ScorePageDirection*> R& mDirection() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = GooglePlayGamesBasicApi::LeaderboardCollection*> R get_Collection() {
		return ((R (*)(ScorePageToken*))(Il2CppBase() + 0x13578D0))(this);
	}
	template <typename R = GooglePlayGamesBasicApi::LeaderboardTimeSpan*> R get_TimeSpan() {
		return ((R (*)(ScorePageToken*))(Il2CppBase() + 0x13578D8))(this);
	}
	template <typename R = GooglePlayGamesBasicApi::ScorePageDirection*> R get_Direction() {
		return ((R (*)(ScorePageToken*))(Il2CppBase() + 0x13578E0))(this);
	}
	template <typename R = Il2CppString*> R get_LeaderboardId() {
		return ((R (*)(ScorePageToken*))(Il2CppBase() + 0x13578E8))(this);
	}
	template <typename R = Il2CppObject*> R get_InternalObject() {
		return ((R (*)(ScorePageToken*))(Il2CppBase() + 0x13578F0))(this);
	}

};

}
