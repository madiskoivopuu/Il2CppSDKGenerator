#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesAndroid {

class AndroidJavaConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesAndroid", "AndroidJavaConverter"));
	}


	template <typename R = uintptr_t> static R ToDateTime(int64_t milliseconds) {
		return ((R (*)(void *, int64_t))(Il2CppBase() + 0x12B0A94))(0, milliseconds);
	}
	template <typename R = int32_t> static R ToLeaderboardVariantTimeSpan(GooglePlayGamesBasicApi::LeaderboardTimeSpan span) {
		return ((R (*)(void *, GooglePlayGamesBasicApi::LeaderboardTimeSpan))(Il2CppBase() + 0x12AF020))(0, span);
	}
	template <typename R = int32_t> static R ToLeaderboardVariantCollection(GooglePlayGamesBasicApi::LeaderboardCollection collection) {
		return ((R (*)(void *, GooglePlayGamesBasicApi::LeaderboardCollection))(Il2CppBase() + 0x12AF034))(0, collection);
	}
	template <typename R = int32_t> static R ToPageDirection(GooglePlayGamesBasicApi::ScorePageDirection direction) {
		return ((R (*)(void *, GooglePlayGamesBasicApi::ScorePageDirection))(Il2CppBase() + 0x12AF55C))(0, direction);
	}
	template <typename R = GooglePlayGamesBasicApi::Player*> static R ToPlayer(uintptr_t player) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x12B3AAC))(0, player);
	}
	template <typename R = GooglePlayGamesBasicApi::PlayerProfile*> static R ToPlayerProfile(uintptr_t player) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x12B3D58))(0, player);
	}
	 static Il2CppList<Il2CppString*>* ToStringList(uintptr_t stringList) {
		return ((Il2CppList<Il2CppString*>* (*)(void *, uintptr_t))(Il2CppBase() + 0x12B419C))(0, stringList);
	}
	template <typename R = uintptr_t> static R ToJavaStringList(Il2CppList<Il2CppString*>* list) {
		return ((R (*)(void *, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x12B4464))(0, list);
	}
	template <typename R = GooglePlayGamesBasicApi::FriendsListVisibilityStatus> static R ToFriendsListVisibilityStatus(int32_t playerListVisibility) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x12B469C))(0, playerListVisibility);
	}
	template <typename R = Il2CppArray<uintptr_t>*> static R playersBufferToArray(uintptr_t playersBuffer) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x12B46AC))(0, playersBuffer);
	}

};

}
