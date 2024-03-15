#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApi {

class DummyClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApi", "DummyClient"));
	}


	template <typename R = void> R Authenticate(bool silent, Action1<GooglePlayGamesBasicApi::SignInStatus>* callback) {
		return ((R (*)(DummyClient*, bool, Action1<GooglePlayGamesBasicApi::SignInStatus>*))(Il2CppBase() + 0x13057CC))(this, silent, callback);
	}
	template <typename R = bool> R IsAuthenticated() {
		return ((R (*)(DummyClient*))(Il2CppBase() + 0x13058A4))(this);
	}
	template <typename R = void> R SignOut() {
		return ((R (*)(DummyClient*))(Il2CppBase() + 0x13058BC))(this);
	}
	template <typename R = Il2CppString*> R GetIdToken() {
		return ((R (*)(DummyClient*))(Il2CppBase() + 0x13058C0))(this);
	}
	template <typename R = Il2CppString*> R GetUserId() {
		return ((R (*)(DummyClient*))(Il2CppBase() + 0x13058D8))(this);
	}
	template <typename R = Il2CppString*> R GetServerAuthCode() {
		return ((R (*)(DummyClient*))(Il2CppBase() + 0x1305920))(this);
	}
	template <typename R = void> R GetAnotherServerAuthCode(bool reAuthenticateIfNeeded, Action1<Il2CppString*>* callback) {
		return ((R (*)(DummyClient*, bool, Action1<Il2CppString*>*))(Il2CppBase() + 0x1305938))(this, reAuthenticateIfNeeded, callback);
	}
	template <typename R = Il2CppString*> R GetUserEmail() {
		return ((R (*)(DummyClient*))(Il2CppBase() + 0x1305994))(this);
	}
	template <typename R = void> R GetPlayerStats(Action2<GooglePlayGamesBasicApi::CommonStatusCodes, GooglePlayGamesBasicApi::PlayerStats*>* callback) {
		return ((R (*)(DummyClient*, Action2<GooglePlayGamesBasicApi::CommonStatusCodes, GooglePlayGamesBasicApi::PlayerStats*>*))(Il2CppBase() + 0x13059E0))(this, callback);
	}
	template <typename R = Il2CppString*> R GetUserDisplayName() {
		return ((R (*)(DummyClient*))(Il2CppBase() + 0x1305A68))(this);
	}
	template <typename R = Il2CppString*> R GetUserImageUrl() {
		return ((R (*)(DummyClient*))(Il2CppBase() + 0x1305AB0))(this);
	}
	template <typename R = void> R LoadUsers(Il2CppArray<Il2CppString*>* userIds, Action1<Il2CppArray<uintptr_t>*>* callback) {
		return ((R (*)(DummyClient*, Il2CppArray<Il2CppString*>*, Action1<Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x1305AC8))(this, userIds, callback);
	}
	template <typename R = void> R LoadAchievements(Action1<Il2CppArray<GooglePlayGamesBasicApi::Achievement*>*>* callback) {
		return ((R (*)(DummyClient*, Action1<Il2CppArray<GooglePlayGamesBasicApi::Achievement*>*>*))(Il2CppBase() + 0x1305B2C))(this, callback);
	}
	template <typename R = void> R UnlockAchievement(Il2CppString* achId, Action1<bool>* callback) {
		return ((R (*)(DummyClient*, Il2CppString*, Action1<bool>*))(Il2CppBase() + 0x1305B90))(this, achId, callback);
	}
	template <typename R = void> R RevealAchievement(Il2CppString* achId, Action1<bool>* callback) {
		return ((R (*)(DummyClient*, Il2CppString*, Action1<bool>*))(Il2CppBase() + 0x1305BF4))(this, achId, callback);
	}
	template <typename R = void> R IncrementAchievement(Il2CppString* achId, int32_t steps, Action1<bool>* callback) {
		return ((R (*)(DummyClient*, Il2CppString*, int32_t, Action1<bool>*))(Il2CppBase() + 0x1305C58))(this, achId, steps, callback);
	}
	template <typename R = void> R SetStepsAtLeast(Il2CppString* achId, int32_t steps, Action1<bool>* callback) {
		return ((R (*)(DummyClient*, Il2CppString*, int32_t, Action1<bool>*))(Il2CppBase() + 0x1305CBC))(this, achId, steps, callback);
	}
	template <typename R = void> R ShowAchievementsUI(Action1<GooglePlayGamesBasicApi::UIStatus>* callback) {
		return ((R (*)(DummyClient*, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x1305D20))(this, callback);
	}
	template <typename R = void> R AskForLoadFriendsResolution(Action1<GooglePlayGamesBasicApi::UIStatus>* callback) {
		return ((R (*)(DummyClient*, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x1305D84))(this, callback);
	}
	template <typename R = GooglePlayGamesBasicApi::LoadFriendsStatus> R GetLastLoadFriendsStatus() {
		return ((R (*)(DummyClient*))(Il2CppBase() + 0x1305DE8))(this);
	}
	template <typename R = void> R LoadFriends(int32_t pageSize, bool forceReload, Action1<GooglePlayGamesBasicApi::LoadFriendsStatus>* callback) {
		return ((R (*)(DummyClient*, int32_t, bool, Action1<GooglePlayGamesBasicApi::LoadFriendsStatus>*))(Il2CppBase() + 0x1305E00))(this, pageSize, forceReload, callback);
	}
	template <typename R = void> R LoadMoreFriends(int32_t pageSize, Action1<GooglePlayGamesBasicApi::LoadFriendsStatus>* callback) {
		return ((R (*)(DummyClient*, int32_t, Action1<GooglePlayGamesBasicApi::LoadFriendsStatus>*))(Il2CppBase() + 0x1305E64))(this, pageSize, callback);
	}
	template <typename R = void> R ShowCompareProfileWithAlternativeNameHintsUI(Il2CppString* userId, Il2CppString* otherPlayerInGameName, Il2CppString* currentPlayerInGameName, Action1<GooglePlayGamesBasicApi::UIStatus>* callback) {
		return ((R (*)(DummyClient*, Il2CppString*, Il2CppString*, Il2CppString*, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x1305EC8))(this, userId, otherPlayerInGameName, currentPlayerInGameName, callback);
	}
	template <typename R = void> R GetFriendsListVisibility(bool forceReload, Action1<GooglePlayGamesBasicApi::FriendsListVisibilityStatus>* callback) {
		return ((R (*)(DummyClient*, bool, Action1<GooglePlayGamesBasicApi::FriendsListVisibilityStatus>*))(Il2CppBase() + 0x1305F2C))(this, forceReload, callback);
	}
	template <typename R = void> R ShowLeaderboardUI(Il2CppString* leaderboardId, GooglePlayGamesBasicApi::LeaderboardTimeSpan span, Action1<GooglePlayGamesBasicApi::UIStatus>* callback) {
		return ((R (*)(DummyClient*, Il2CppString*, GooglePlayGamesBasicApi::LeaderboardTimeSpan, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x1305F90))(this, leaderboardId, span, callback);
	}
	template <typename R = int32_t> R LeaderboardMaxResults() {
		return ((R (*)(DummyClient*))(Il2CppBase() + 0x1305FF4))(this);
	}
	template <typename R = void> R LoadScores(Il2CppString* leaderboardId, GooglePlayGamesBasicApi::LeaderboardStart start, int32_t rowCount, GooglePlayGamesBasicApi::LeaderboardCollection collection, GooglePlayGamesBasicApi::LeaderboardTimeSpan timeSpan, Action1<GooglePlayGamesBasicApi::LeaderboardScoreData*>* callback) {
		return ((R (*)(DummyClient*, Il2CppString*, GooglePlayGamesBasicApi::LeaderboardStart, int32_t, GooglePlayGamesBasicApi::LeaderboardCollection, GooglePlayGamesBasicApi::LeaderboardTimeSpan, Action1<GooglePlayGamesBasicApi::LeaderboardScoreData*>*))(Il2CppBase() + 0x1305FFC))(this, leaderboardId, start, rowCount, collection, timeSpan, callback);
	}
	template <typename R = void> R LoadMoreScores(GooglePlayGamesBasicApi::ScorePageToken* token, int32_t rowCount, Action1<GooglePlayGamesBasicApi::LeaderboardScoreData*>* callback) {
		return ((R (*)(DummyClient*, GooglePlayGamesBasicApi::ScorePageToken*, int32_t, Action1<GooglePlayGamesBasicApi::LeaderboardScoreData*>*))(Il2CppBase() + 0x13060A0))(this, token, rowCount, callback);
	}
	template <typename R = void> R SubmitScore(Il2CppString* leaderboardId, int64_t score, Action1<bool>* callback) {
		return ((R (*)(DummyClient*, Il2CppString*, int64_t, Action1<bool>*))(Il2CppBase() + 0x1306150))(this, leaderboardId, score, callback);
	}
	template <typename R = void> R SubmitScore_1(Il2CppString* leaderboardId, int64_t score, Il2CppString* metadata, Action1<bool>* callback) {
		return ((R (*)(DummyClient*, Il2CppString*, int64_t, Il2CppString*, Action1<bool>*))(Il2CppBase() + 0x13061B4))(this, leaderboardId, score, metadata, callback);
	}
	template <typename R = void> R RequestPermissions(Il2CppArray<Il2CppString*>* scopes, Action1<GooglePlayGamesBasicApi::SignInStatus>* callback) {
		return ((R (*)(DummyClient*, Il2CppArray<Il2CppString*>*, Action1<GooglePlayGamesBasicApi::SignInStatus>*))(Il2CppBase() + 0x1306218))(this, scopes, callback);
	}
	template <typename R = bool> R HasPermissions(Il2CppArray<Il2CppString*>* scopes) {
		return ((R (*)(DummyClient*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x130627C))(this, scopes);
	}
	template <typename R = GooglePlayGamesBasicApiSavedGame::ISavedGameClient*> R GetSavedGameClient() {
		return ((R (*)(DummyClient*))(Il2CppBase() + 0x1306294))(this);
	}
	template <typename R = GooglePlayGamesBasicApiEvents::IEventsClient*> R GetEventsClient() {
		return ((R (*)(DummyClient*))(Il2CppBase() + 0x13062AC))(this);
	}
	template <typename R = GooglePlayGamesBasicApiVideo::IVideoClient*> R GetVideoClient() {
		return ((R (*)(DummyClient*))(Il2CppBase() + 0x13062C4))(this);
	}
	template <typename R = void> R LoadFriends_1(Action1<bool>* callback) {
		return ((R (*)(DummyClient*, Action1<bool>*))(Il2CppBase() + 0x13062DC))(this, callback);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R GetFriends() {
		return ((R (*)(DummyClient*))(Il2CppBase() + 0x1306338))(this);
	}
	template <typename R = void> R SetGravityForPopups(GooglePlayGamesBasicApi::Gravity gravity) {
		return ((R (*)(DummyClient*, GooglePlayGamesBasicApi::Gravity))(Il2CppBase() + 0x1306384))(this, gravity);
	}
	template <typename R = void> static R LogUsage() {
		return ((R (*)(void *))(Il2CppBase() + 0x1305830))(0);
	}

};

}
