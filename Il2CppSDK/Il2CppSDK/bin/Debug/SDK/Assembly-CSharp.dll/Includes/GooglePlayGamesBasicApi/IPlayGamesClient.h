#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApi {

class IPlayGamesClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApi", "IPlayGamesClient"));
	}


	template <typename R = void> R Authenticate(bool silent, Action1<GooglePlayGamesBasicApi::SignInStatus>* callback) {
		return ((R (*)(IPlayGamesClient*, bool, Action1<GooglePlayGamesBasicApi::SignInStatus>*))(Il2CppBase() + 0x0))(this, silent, callback);
	}
	template <typename R = bool> R IsAuthenticated() {
		return ((R (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R SignOut() {
		return ((R (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R GetUserId() {
		return ((R (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R LoadFriends(Action1<bool>* callback) {
		return ((R (*)(IPlayGamesClient*, Action1<bool>*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename R = Il2CppString*> R GetUserDisplayName() {
		return ((R (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R GetIdToken() {
		return ((R (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R GetServerAuthCode() {
		return ((R (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R GetAnotherServerAuthCode(bool reAuthenticateIfNeeded, Action1<Il2CppString*>* callback) {
		return ((R (*)(IPlayGamesClient*, bool, Action1<Il2CppString*>*))(Il2CppBase() + 0x0))(this, reAuthenticateIfNeeded, callback);
	}
	template <typename R = Il2CppString*> R GetUserEmail() {
		return ((R (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R GetUserImageUrl() {
		return ((R (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R GetPlayerStats(Action2<GooglePlayGamesBasicApi::CommonStatusCodes, GooglePlayGamesBasicApi::PlayerStats*>* callback) {
		return ((R (*)(IPlayGamesClient*, Action2<GooglePlayGamesBasicApi::CommonStatusCodes, GooglePlayGamesBasicApi::PlayerStats*>*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename R = void> R LoadUsers(Il2CppArray<Il2CppString*>* userIds, Action1<Il2CppArray<uintptr_t>*>* callback) {
		return ((R (*)(IPlayGamesClient*, Il2CppArray<Il2CppString*>*, Action1<Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x0))(this, userIds, callback);
	}
	template <typename R = void> R LoadAchievements(Action1<Il2CppArray<GooglePlayGamesBasicApi::Achievement*>*>* callback) {
		return ((R (*)(IPlayGamesClient*, Action1<Il2CppArray<GooglePlayGamesBasicApi::Achievement*>*>*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename R = void> R UnlockAchievement(Il2CppString* achievementId, Action1<bool>* successOrFailureCalllback) {
		return ((R (*)(IPlayGamesClient*, Il2CppString*, Action1<bool>*))(Il2CppBase() + 0x0))(this, achievementId, successOrFailureCalllback);
	}
	template <typename R = void> R RevealAchievement(Il2CppString* achievementId, Action1<bool>* successOrFailureCalllback) {
		return ((R (*)(IPlayGamesClient*, Il2CppString*, Action1<bool>*))(Il2CppBase() + 0x0))(this, achievementId, successOrFailureCalllback);
	}
	template <typename R = void> R IncrementAchievement(Il2CppString* achievementId, int32_t steps, Action1<bool>* successOrFailureCalllback) {
		return ((R (*)(IPlayGamesClient*, Il2CppString*, int32_t, Action1<bool>*))(Il2CppBase() + 0x0))(this, achievementId, steps, successOrFailureCalllback);
	}
	template <typename R = void> R SetStepsAtLeast(Il2CppString* achId, int32_t steps, Action1<bool>* callback) {
		return ((R (*)(IPlayGamesClient*, Il2CppString*, int32_t, Action1<bool>*))(Il2CppBase() + 0x0))(this, achId, steps, callback);
	}
	template <typename R = void> R ShowAchievementsUI(Action1<GooglePlayGamesBasicApi::UIStatus>* callback) {
		return ((R (*)(IPlayGamesClient*, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename R = void> R AskForLoadFriendsResolution(Action1<GooglePlayGamesBasicApi::UIStatus>* callback) {
		return ((R (*)(IPlayGamesClient*, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename R = GooglePlayGamesBasicApi::LoadFriendsStatus> R GetLastLoadFriendsStatus() {
		return ((R (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R ShowCompareProfileWithAlternativeNameHintsUI(Il2CppString* otherUserId, Il2CppString* otherPlayerInGameName, Il2CppString* currentPlayerInGameName, Action1<GooglePlayGamesBasicApi::UIStatus>* callback) {
		return ((R (*)(IPlayGamesClient*, Il2CppString*, Il2CppString*, Il2CppString*, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x0))(this, otherUserId, otherPlayerInGameName, currentPlayerInGameName, callback);
	}
	template <typename R = void> R GetFriendsListVisibility(bool forceReload, Action1<GooglePlayGamesBasicApi::FriendsListVisibilityStatus>* callback) {
		return ((R (*)(IPlayGamesClient*, bool, Action1<GooglePlayGamesBasicApi::FriendsListVisibilityStatus>*))(Il2CppBase() + 0x0))(this, forceReload, callback);
	}
	template <typename R = void> R LoadFriends_1(int32_t pageSize, bool forceReload, Action1<GooglePlayGamesBasicApi::LoadFriendsStatus>* callback) {
		return ((R (*)(IPlayGamesClient*, int32_t, bool, Action1<GooglePlayGamesBasicApi::LoadFriendsStatus>*))(Il2CppBase() + 0x0))(this, pageSize, forceReload, callback);
	}
	template <typename R = void> R LoadMoreFriends(int32_t pageSize, Action1<GooglePlayGamesBasicApi::LoadFriendsStatus>* callback) {
		return ((R (*)(IPlayGamesClient*, int32_t, Action1<GooglePlayGamesBasicApi::LoadFriendsStatus>*))(Il2CppBase() + 0x0))(this, pageSize, callback);
	}
	template <typename R = void> R ShowLeaderboardUI(Il2CppString* leaderboardId, GooglePlayGamesBasicApi::LeaderboardTimeSpan span, Action1<GooglePlayGamesBasicApi::UIStatus>* callback) {
		return ((R (*)(IPlayGamesClient*, Il2CppString*, GooglePlayGamesBasicApi::LeaderboardTimeSpan, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x0))(this, leaderboardId, span, callback);
	}
	template <typename R = void> R LoadScores(Il2CppString* leaderboardId, GooglePlayGamesBasicApi::LeaderboardStart start, int32_t rowCount, GooglePlayGamesBasicApi::LeaderboardCollection collection, GooglePlayGamesBasicApi::LeaderboardTimeSpan timeSpan, Action1<GooglePlayGamesBasicApi::LeaderboardScoreData*>* callback) {
		return ((R (*)(IPlayGamesClient*, Il2CppString*, GooglePlayGamesBasicApi::LeaderboardStart, int32_t, GooglePlayGamesBasicApi::LeaderboardCollection, GooglePlayGamesBasicApi::LeaderboardTimeSpan, Action1<GooglePlayGamesBasicApi::LeaderboardScoreData*>*))(Il2CppBase() + 0x0))(this, leaderboardId, start, rowCount, collection, timeSpan, callback);
	}
	template <typename R = void> R LoadMoreScores(GooglePlayGamesBasicApi::ScorePageToken* token, int32_t rowCount, Action1<GooglePlayGamesBasicApi::LeaderboardScoreData*>* callback) {
		return ((R (*)(IPlayGamesClient*, GooglePlayGamesBasicApi::ScorePageToken*, int32_t, Action1<GooglePlayGamesBasicApi::LeaderboardScoreData*>*))(Il2CppBase() + 0x0))(this, token, rowCount, callback);
	}
	template <typename R = int32_t> R LeaderboardMaxResults() {
		return ((R (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R SubmitScore(Il2CppString* leaderboardId, int64_t score, Action1<bool>* successOrFailureCalllback) {
		return ((R (*)(IPlayGamesClient*, Il2CppString*, int64_t, Action1<bool>*))(Il2CppBase() + 0x0))(this, leaderboardId, score, successOrFailureCalllback);
	}
	template <typename R = void> R SubmitScore_1(Il2CppString* leaderboardId, int64_t score, Il2CppString* metadata, Action1<bool>* successOrFailureCalllback) {
		return ((R (*)(IPlayGamesClient*, Il2CppString*, int64_t, Il2CppString*, Action1<bool>*))(Il2CppBase() + 0x0))(this, leaderboardId, score, metadata, successOrFailureCalllback);
	}
	template <typename R = void> R RequestPermissions(Il2CppArray<Il2CppString*>* scopes, Action1<GooglePlayGamesBasicApi::SignInStatus>* callback) {
		return ((R (*)(IPlayGamesClient*, Il2CppArray<Il2CppString*>*, Action1<GooglePlayGamesBasicApi::SignInStatus>*))(Il2CppBase() + 0x0))(this, scopes, callback);
	}
	template <typename R = bool> R HasPermissions(Il2CppArray<Il2CppString*>* scopes) {
		return ((R (*)(IPlayGamesClient*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, scopes);
	}
	template <typename R = GooglePlayGamesBasicApiSavedGame::ISavedGameClient*> R GetSavedGameClient() {
		return ((R (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = GooglePlayGamesBasicApiEvents::IEventsClient*> R GetEventsClient() {
		return ((R (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = GooglePlayGamesBasicApiVideo::IVideoClient*> R GetVideoClient() {
		return ((R (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R GetFriends() {
		return ((R (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R SetGravityForPopups(GooglePlayGamesBasicApi::Gravity gravity) {
		return ((R (*)(IPlayGamesClient*, GooglePlayGamesBasicApi::Gravity))(Il2CppBase() + 0x0))(this, gravity);
	}

};

}
