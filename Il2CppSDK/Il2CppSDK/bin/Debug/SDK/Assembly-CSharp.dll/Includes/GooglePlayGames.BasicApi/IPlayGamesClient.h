#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApi {

class IPlayGamesClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApi", "IPlayGamesClient"));
	}


	template <typename T = void> T Authenticate(bool silent, Action1SignInStatus*>* callback) {
		return ((T (*)(IPlayGamesClient*, bool, Action1SignInStatus*>*))(Il2CppBase() + 0x0))(this, silent, callback);
	}
	template <typename T = bool> T IsAuthenticated() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SignOut() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetUserId() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T LoadFriends(Action1bool>* callback) {
		return ((T (*)(IPlayGamesClient*, Action1bool>*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = Il2CppString*> T GetUserDisplayName() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetIdToken() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetServerAuthCode() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T GetAnotherServerAuthCode(bool reAuthenticateIfNeeded, Action1Il2CppString*>* callback) {
		return ((T (*)(IPlayGamesClient*, bool, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, reAuthenticateIfNeeded, callback);
	}
	template <typename T = Il2CppString*> T GetUserEmail() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetUserImageUrl() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T GetPlayerStats(Action2CommonStatusCodes*, PlayerStats*>* callback) {
		return ((T (*)(IPlayGamesClient*, Action2CommonStatusCodes*, PlayerStats*>*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T LoadUsers(Il2CppArray<uintptr_t>* userIds, Action1Il2CppArray<uintptr_t>*>* callback) {
		return ((T (*)(IPlayGamesClient*, Il2CppArray<uintptr_t>*, Action1Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x0))(this, userIds, callback);
	}
	template <typename T = void> T LoadAchievements(Action1Il2CppArray<uintptr_t>*>* callback) {
		return ((T (*)(IPlayGamesClient*, Action1Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T UnlockAchievement(Il2CppString* achievementId, Action1bool>* successOrFailureCalllback) {
		return ((T (*)(IPlayGamesClient*, Il2CppString*, Action1bool>*))(Il2CppBase() + 0x0))(this, achievementId, successOrFailureCalllback);
	}
	template <typename T = void> T RevealAchievement(Il2CppString* achievementId, Action1bool>* successOrFailureCalllback) {
		return ((T (*)(IPlayGamesClient*, Il2CppString*, Action1bool>*))(Il2CppBase() + 0x0))(this, achievementId, successOrFailureCalllback);
	}
	template <typename T = void> T IncrementAchievement(Il2CppString* achievementId, int32_t steps, Action1bool>* successOrFailureCalllback) {
		return ((T (*)(IPlayGamesClient*, Il2CppString*, int32_t, Action1bool>*))(Il2CppBase() + 0x0))(this, achievementId, steps, successOrFailureCalllback);
	}
	template <typename T = void> T SetStepsAtLeast(Il2CppString* achId, int32_t steps, Action1bool>* callback) {
		return ((T (*)(IPlayGamesClient*, Il2CppString*, int32_t, Action1bool>*))(Il2CppBase() + 0x0))(this, achId, steps, callback);
	}
	template <typename T = void> T ShowAchievementsUI(Action1UIStatus*>* callback) {
		return ((T (*)(IPlayGamesClient*, Action1UIStatus*>*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T AskForLoadFriendsResolution(Action1UIStatus*>* callback) {
		return ((T (*)(IPlayGamesClient*, Action1UIStatus*>*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = LoadFriendsStatus*> T GetLastLoadFriendsStatus() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ShowCompareProfileWithAlternativeNameHintsUI(Il2CppString* otherUserId, Il2CppString* otherPlayerInGameName, Il2CppString* currentPlayerInGameName, Action1UIStatus*>* callback) {
		return ((T (*)(IPlayGamesClient*, Il2CppString*, Il2CppString*, Il2CppString*, Action1UIStatus*>*))(Il2CppBase() + 0x0))(this, otherUserId, otherPlayerInGameName, currentPlayerInGameName, callback);
	}
	template <typename T = void> T GetFriendsListVisibility(bool forceReload, Action1FriendsListVisibilityStatus*>* callback) {
		return ((T (*)(IPlayGamesClient*, bool, Action1FriendsListVisibilityStatus*>*))(Il2CppBase() + 0x0))(this, forceReload, callback);
	}
	template <typename T = void> T LoadFriends_1(int32_t pageSize, bool forceReload, Action1LoadFriendsStatus*>* callback) {
		return ((T (*)(IPlayGamesClient*, int32_t, bool, Action1LoadFriendsStatus*>*))(Il2CppBase() + 0x0))(this, pageSize, forceReload, callback);
	}
	template <typename T = void> T LoadMoreFriends(int32_t pageSize, Action1LoadFriendsStatus*>* callback) {
		return ((T (*)(IPlayGamesClient*, int32_t, Action1LoadFriendsStatus*>*))(Il2CppBase() + 0x0))(this, pageSize, callback);
	}
	template <typename T = void> T ShowLeaderboardUI(Il2CppString* leaderboardId, LeaderboardTimeSpan* span, Action1UIStatus*>* callback) {
		return ((T (*)(IPlayGamesClient*, Il2CppString*, LeaderboardTimeSpan*, Action1UIStatus*>*))(Il2CppBase() + 0x0))(this, leaderboardId, span, callback);
	}
	template <typename T = void> T LoadScores(Il2CppString* leaderboardId, LeaderboardStart* start, int32_t rowCount, LeaderboardCollection* collection, LeaderboardTimeSpan* timeSpan, Action1LeaderboardScoreData*>* callback) {
		return ((T (*)(IPlayGamesClient*, Il2CppString*, LeaderboardStart*, int32_t, LeaderboardCollection*, LeaderboardTimeSpan*, Action1LeaderboardScoreData*>*))(Il2CppBase() + 0x0))(this, leaderboardId, start, rowCount, collection, timeSpan, callback);
	}
	template <typename T = void> T LoadMoreScores(ScorePageToken* token, int32_t rowCount, Action1LeaderboardScoreData*>* callback) {
		return ((T (*)(IPlayGamesClient*, ScorePageToken*, int32_t, Action1LeaderboardScoreData*>*))(Il2CppBase() + 0x0))(this, token, rowCount, callback);
	}
	template <typename T = int32_t> T LeaderboardMaxResults() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SubmitScore(Il2CppString* leaderboardId, int64_t score, Action1bool>* successOrFailureCalllback) {
		return ((T (*)(IPlayGamesClient*, Il2CppString*, int64_t, Action1bool>*))(Il2CppBase() + 0x0))(this, leaderboardId, score, successOrFailureCalllback);
	}
	template <typename T = void> T SubmitScore_1(Il2CppString* leaderboardId, int64_t score, Il2CppString* metadata, Action1bool>* successOrFailureCalllback) {
		return ((T (*)(IPlayGamesClient*, Il2CppString*, int64_t, Il2CppString*, Action1bool>*))(Il2CppBase() + 0x0))(this, leaderboardId, score, metadata, successOrFailureCalllback);
	}
	template <typename T = void> T RequestPermissions(Il2CppArray<uintptr_t>* scopes, Action1SignInStatus*>* callback) {
		return ((T (*)(IPlayGamesClient*, Il2CppArray<uintptr_t>*, Action1SignInStatus*>*))(Il2CppBase() + 0x0))(this, scopes, callback);
	}
	template <typename T = bool> T HasPermissions(Il2CppArray<uintptr_t>* scopes) {
		return ((T (*)(IPlayGamesClient*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, scopes);
	}
	template <typename T = ISavedGameClient*> T GetSavedGameClient() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = IEventsClient*> T GetEventsClient() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = IVideoClient*> T GetVideoClient() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFriends() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetGravityForPopups(Gravity* gravity) {
		return ((T (*)(IPlayGamesClient*, Gravity*))(Il2CppBase() + 0x0))(this, gravity);
	}

};

}
