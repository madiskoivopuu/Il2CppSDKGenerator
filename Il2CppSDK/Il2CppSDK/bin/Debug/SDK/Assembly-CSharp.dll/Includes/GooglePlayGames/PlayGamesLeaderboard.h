#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGames {

class PlayGamesLeaderboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "PlayGamesLeaderboard"));
	}

	template <typename R = Il2CppString*> R& mId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& mUserScope() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& mRange() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = uintptr_t> R& mTimeScope() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& mFilteredUserIds() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& mLoading() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& mLocalUserScore() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uint32_t> R& mMaxRange() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Il2CppList<GooglePlayGames::PlayGamesScore*>*& mScoreList() {
		return *(Il2CppList<GooglePlayGames::PlayGamesScore*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& mTitle() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R SetUserFilter(Il2CppArray<Il2CppString*>* userIDs) {
		return ((R (*)(PlayGamesLeaderboard*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x16FB2E0))(this, userIDs);
	}
	template <typename R = void> R LoadScores(Action1bool>* callback) {
		return ((R (*)(PlayGamesLeaderboard*, Action1bool>*))(Il2CppBase() + 0x16FB2E8))(this, callback);
	}
	template <typename R = bool> R get_loading() {
		return ((R (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FB9D4))(this);
	}
	template <typename R = void> R set_loading(bool value) {
		return ((R (*)(PlayGamesLeaderboard*, bool))(Il2CppBase() + 0x16FB9DC))(this, value);
	}
	template <typename R = Il2CppString*> R get_id() {
		return ((R (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FB9E8))(this);
	}
	template <typename R = void> R set_id(Il2CppString* value) {
		return ((R (*)(PlayGamesLeaderboard*, Il2CppString*))(Il2CppBase() + 0x16FB9F0))(this, value);
	}
	template <typename R = uintptr_t> R get_userScope() {
		return ((R (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FB9F8))(this);
	}
	template <typename R = void> R set_userScope(uintptr_t value) {
		return ((R (*)(PlayGamesLeaderboard*, uintptr_t))(Il2CppBase() + 0x16FBA00))(this, value);
	}
	template <typename R = uintptr_t> R get_range() {
		return ((R (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FBA08))(this);
	}
	template <typename R = void> R set_range(uintptr_t value) {
		return ((R (*)(PlayGamesLeaderboard*, uintptr_t))(Il2CppBase() + 0x16FBA10))(this, value);
	}
	template <typename R = uintptr_t> R get_timeScope() {
		return ((R (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FBA18))(this);
	}
	template <typename R = void> R set_timeScope(uintptr_t value) {
		return ((R (*)(PlayGamesLeaderboard*, uintptr_t))(Il2CppBase() + 0x16FBA20))(this, value);
	}
	template <typename R = uintptr_t> R get_localUserScore() {
		return ((R (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FBA28))(this);
	}
	template <typename R = uint32_t> R get_maxRange() {
		return ((R (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FBA30))(this);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R get_scores() {
		return ((R (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FBA38))(this);
	}
	template <typename R = Il2CppString*> R get_title() {
		return ((R (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FBAD4))(this);
	}
	template <typename R = bool> R SetFromData(GooglePlayGamesBasicApi::LeaderboardScoreData* data) {
		return ((R (*)(PlayGamesLeaderboard*, GooglePlayGamesBasicApi::LeaderboardScoreData*))(Il2CppBase() + 0x16FBADC))(this, data);
	}
	template <typename R = void> R SetMaxRange(uint64_t val) {
		return ((R (*)(PlayGamesLeaderboard*, uint64_t))(Il2CppBase() + 0x16FBCF0))(this, val);
	}
	template <typename R = void> R SetTitle(Il2CppString* value) {
		return ((R (*)(PlayGamesLeaderboard*, Il2CppString*))(Il2CppBase() + 0x16FBE54))(this, value);
	}
	template <typename R = void> R SetLocalUserScore(GooglePlayGames::PlayGamesScore* score) {
		return ((R (*)(PlayGamesLeaderboard*, GooglePlayGames::PlayGamesScore*))(Il2CppBase() + 0x16FBE5C))(this, score);
	}
	template <typename R = int32_t> R AddScore(GooglePlayGames::PlayGamesScore* score) {
		return ((R (*)(PlayGamesLeaderboard*, GooglePlayGames::PlayGamesScore*))(Il2CppBase() + 0x16FBCF8))(this, score);
	}
	template <typename R = int32_t> R get_ScoreCount() {
		return ((R (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FBE64))(this);
	}
	template <typename R = bool> R HasAllScores() {
		return ((R (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FBDE8))(this);
	}

};

}
