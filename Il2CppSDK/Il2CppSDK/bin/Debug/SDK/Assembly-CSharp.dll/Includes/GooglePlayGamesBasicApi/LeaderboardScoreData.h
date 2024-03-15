#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApi {

class LeaderboardScoreData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApi", "LeaderboardScoreData"));
	}

	template <typename R = Il2CppString*> R& mId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = GooglePlayGamesBasicApi::ResponseStatus> R& mStatus() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uint64_t> R& mApproxCount() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& mTitle() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& mPlayerScore() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = GooglePlayGamesBasicApi::ScorePageToken*> R& mPrevPage() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = GooglePlayGamesBasicApi::ScorePageToken*> R& mNextPage() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Il2CppList<GooglePlayGames::PlayGamesScore*>*& mScores() {
		return *(Il2CppList<GooglePlayGames::PlayGamesScore*>**)((uintptr_t)this + 0x48);
	}

	template <typename R = bool> R get_Valid() {
		return ((R (*)(LeaderboardScoreData*))(Il2CppBase() + 0x1429CC4))(this);
	}
	template <typename R = GooglePlayGamesBasicApi::ResponseStatus> R get_Status() {
		return ((R (*)(LeaderboardScoreData*))(Il2CppBase() + 0x1429CD8))(this);
	}
	template <typename R = void> R set_Status(GooglePlayGamesBasicApi::ResponseStatus value) {
		return ((R (*)(LeaderboardScoreData*, GooglePlayGamesBasicApi::ResponseStatus))(Il2CppBase() + 0x1429CE0))(this, value);
	}
	template <typename R = uint64_t> R get_ApproximateCount() {
		return ((R (*)(LeaderboardScoreData*))(Il2CppBase() + 0x1429CE8))(this);
	}
	template <typename R = void> R set_ApproximateCount(uint64_t value) {
		return ((R (*)(LeaderboardScoreData*, uint64_t))(Il2CppBase() + 0x1429CF0))(this, value);
	}
	template <typename R = Il2CppString*> R get_Title() {
		return ((R (*)(LeaderboardScoreData*))(Il2CppBase() + 0x1429CF8))(this);
	}
	template <typename R = void> R set_Title(Il2CppString* value) {
		return ((R (*)(LeaderboardScoreData*, Il2CppString*))(Il2CppBase() + 0x1429D00))(this, value);
	}
	template <typename R = Il2CppString*> R get_Id() {
		return ((R (*)(LeaderboardScoreData*))(Il2CppBase() + 0x1429D08))(this);
	}
	template <typename R = void> R set_Id(Il2CppString* value) {
		return ((R (*)(LeaderboardScoreData*, Il2CppString*))(Il2CppBase() + 0x1429D10))(this, value);
	}
	template <typename R = uintptr_t> R get_PlayerScore() {
		return ((R (*)(LeaderboardScoreData*))(Il2CppBase() + 0x1429D18))(this);
	}
	template <typename R = void> R set_PlayerScore(uintptr_t value) {
		return ((R (*)(LeaderboardScoreData*, uintptr_t))(Il2CppBase() + 0x1429D20))(this, value);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R get_Scores() {
		return ((R (*)(LeaderboardScoreData*))(Il2CppBase() + 0x1429D28))(this);
	}
	template <typename R = int32_t> R AddScore(GooglePlayGames::PlayGamesScore* score) {
		return ((R (*)(LeaderboardScoreData*, GooglePlayGames::PlayGamesScore*))(Il2CppBase() + 0x1429D7C))(this, score);
	}
	template <typename R = GooglePlayGamesBasicApi::ScorePageToken*> R get_PrevPageToken() {
		return ((R (*)(LeaderboardScoreData*))(Il2CppBase() + 0x1429DFC))(this);
	}
	template <typename R = void> R set_PrevPageToken(GooglePlayGamesBasicApi::ScorePageToken* value) {
		return ((R (*)(LeaderboardScoreData*, GooglePlayGamesBasicApi::ScorePageToken*))(Il2CppBase() + 0x1429E04))(this, value);
	}
	template <typename R = GooglePlayGamesBasicApi::ScorePageToken*> R get_NextPageToken() {
		return ((R (*)(LeaderboardScoreData*))(Il2CppBase() + 0x1429E0C))(this);
	}
	template <typename R = void> R set_NextPageToken(GooglePlayGamesBasicApi::ScorePageToken* value) {
		return ((R (*)(LeaderboardScoreData*, GooglePlayGamesBasicApi::ScorePageToken*))(Il2CppBase() + 0x1429E14))(this, value);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(LeaderboardScoreData*))(Il2CppBase() + 0x1429E1C))(this);
	}

};

}
