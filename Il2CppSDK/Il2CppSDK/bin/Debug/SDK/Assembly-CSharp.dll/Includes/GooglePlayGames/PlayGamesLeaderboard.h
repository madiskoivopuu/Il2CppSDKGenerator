#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGames {

class PlayGamesLeaderboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "PlayGamesLeaderboard"));
	}

	template <typename T = Il2CppString*> T& mId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mUserScope() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mRange() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mTimeScope() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mFilteredUserIds() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& mLoading() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mLocalUserScore() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& mMaxRange() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mScoreList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& mTitle() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T SetUserFilter(Il2CppArray<uintptr_t>* userIDs) {
		return ((T (*)(PlayGamesLeaderboard*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16FB2E0))(this, userIDs);
	}
	template <typename T = void> T LoadScores(void* callback) {
		return ((T (*)(PlayGamesLeaderboard*, void*))(Il2CppBase() + 0x16FB2E8))(this, callback);
	}
	template <typename T = bool> T get_loading() {
		return ((T (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FB9D4))(this);
	}
	template <typename T = void> T set_loading(bool value) {
		return ((T (*)(PlayGamesLeaderboard*, bool))(Il2CppBase() + 0x16FB9DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_id() {
		return ((T (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FB9E8))(this);
	}
	template <typename T = void> T set_id(Il2CppString* value) {
		return ((T (*)(PlayGamesLeaderboard*, Il2CppString*))(Il2CppBase() + 0x16FB9F0))(this, value);
	}
	template <typename T = uintptr_t> T get_userScope() {
		return ((T (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FB9F8))(this);
	}
	template <typename T = void> T set_userScope(uintptr_t value) {
		return ((T (*)(PlayGamesLeaderboard*, uintptr_t))(Il2CppBase() + 0x16FBA00))(this, value);
	}
	template <typename T = uintptr_t> T get_range() {
		return ((T (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FBA08))(this);
	}
	template <typename T = void> T set_range(uintptr_t value) {
		return ((T (*)(PlayGamesLeaderboard*, uintptr_t))(Il2CppBase() + 0x16FBA10))(this, value);
	}
	template <typename T = uintptr_t> T get_timeScope() {
		return ((T (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FBA18))(this);
	}
	template <typename T = void> T set_timeScope(uintptr_t value) {
		return ((T (*)(PlayGamesLeaderboard*, uintptr_t))(Il2CppBase() + 0x16FBA20))(this, value);
	}
	template <typename T = uintptr_t> T get_localUserScore() {
		return ((T (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FBA28))(this);
	}
	template <typename T = uint32_t> T get_maxRange() {
		return ((T (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FBA30))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_scores() {
		return ((T (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FBA38))(this);
	}
	template <typename T = Il2CppString*> T get_title() {
		return ((T (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FBAD4))(this);
	}
	template <typename T = bool> T SetFromData(uintptr_t data) {
		return ((T (*)(PlayGamesLeaderboard*, uintptr_t))(Il2CppBase() + 0x16FBADC))(this, data);
	}
	template <typename T = void> T SetMaxRange(uint64_t val) {
		return ((T (*)(PlayGamesLeaderboard*, uint64_t))(Il2CppBase() + 0x16FBCF0))(this, val);
	}
	template <typename T = void> T SetTitle(Il2CppString* value) {
		return ((T (*)(PlayGamesLeaderboard*, Il2CppString*))(Il2CppBase() + 0x16FBE54))(this, value);
	}
	template <typename T = void> T SetLocalUserScore(uintptr_t score) {
		return ((T (*)(PlayGamesLeaderboard*, uintptr_t))(Il2CppBase() + 0x16FBE5C))(this, score);
	}
	template <typename T = int32_t> T AddScore(uintptr_t score) {
		return ((T (*)(PlayGamesLeaderboard*, uintptr_t))(Il2CppBase() + 0x16FBCF8))(this, score);
	}
	template <typename T = int32_t> T get_ScoreCount() {
		return ((T (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FBE64))(this);
	}
	template <typename T = bool> T HasAllScores() {
		return ((T (*)(PlayGamesLeaderboard*))(Il2CppBase() + 0x16FBDE8))(this);
	}

};

}
