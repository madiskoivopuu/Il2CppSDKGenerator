#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApi {

class DummyClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApi", "DummyClient"));
	}


	template <typename T = void> T Authenticate(bool silent, Action1SignInStatus*>* callback) {
		return ((T (*)(DummyClient*, bool, Action1SignInStatus*>*))(Il2CppBase() + 0x13057CC))(this, silent, callback);
	}
	template <typename T = bool> T IsAuthenticated() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x13058A4))(this);
	}
	template <typename T = void> T SignOut() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x13058BC))(this);
	}
	template <typename T = Il2CppString*> T GetIdToken() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x13058C0))(this);
	}
	template <typename T = Il2CppString*> T GetUserId() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x13058D8))(this);
	}
	template <typename T = Il2CppString*> T GetServerAuthCode() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x1305920))(this);
	}
	template <typename T = void> T GetAnotherServerAuthCode(bool reAuthenticateIfNeeded, Action1Il2CppString*>* callback) {
		return ((T (*)(DummyClient*, bool, Action1Il2CppString*>*))(Il2CppBase() + 0x1305938))(this, reAuthenticateIfNeeded, callback);
	}
	template <typename T = Il2CppString*> T GetUserEmail() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x1305994))(this);
	}
	template <typename T = void> T GetPlayerStats(Action2CommonStatusCodes*, PlayerStats*>* callback) {
		return ((T (*)(DummyClient*, Action2CommonStatusCodes*, PlayerStats*>*))(Il2CppBase() + 0x13059E0))(this, callback);
	}
	template <typename T = Il2CppString*> T GetUserDisplayName() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x1305A68))(this);
	}
	template <typename T = Il2CppString*> T GetUserImageUrl() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x1305AB0))(this);
	}
	template <typename T = void> T LoadUsers(Il2CppArray<uintptr_t>* userIds, Action1Il2CppArray<uintptr_t>*>* callback) {
		return ((T (*)(DummyClient*, Il2CppArray<uintptr_t>*, Action1Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x1305AC8))(this, userIds, callback);
	}
	template <typename T = void> T LoadAchievements(Action1Il2CppArray<uintptr_t>*>* callback) {
		return ((T (*)(DummyClient*, Action1Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x1305B2C))(this, callback);
	}
	template <typename T = void> T UnlockAchievement(Il2CppString* achId, Action1bool>* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, Action1bool>*))(Il2CppBase() + 0x1305B90))(this, achId, callback);
	}
	template <typename T = void> T RevealAchievement(Il2CppString* achId, Action1bool>* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, Action1bool>*))(Il2CppBase() + 0x1305BF4))(this, achId, callback);
	}
	template <typename T = void> T IncrementAchievement(Il2CppString* achId, int32_t steps, Action1bool>* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, int32_t, Action1bool>*))(Il2CppBase() + 0x1305C58))(this, achId, steps, callback);
	}
	template <typename T = void> T SetStepsAtLeast(Il2CppString* achId, int32_t steps, Action1bool>* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, int32_t, Action1bool>*))(Il2CppBase() + 0x1305CBC))(this, achId, steps, callback);
	}
	template <typename T = void> T ShowAchievementsUI(Action1UIStatus*>* callback) {
		return ((T (*)(DummyClient*, Action1UIStatus*>*))(Il2CppBase() + 0x1305D20))(this, callback);
	}
	template <typename T = void> T AskForLoadFriendsResolution(Action1UIStatus*>* callback) {
		return ((T (*)(DummyClient*, Action1UIStatus*>*))(Il2CppBase() + 0x1305D84))(this, callback);
	}
	template <typename T = LoadFriendsStatus*> T GetLastLoadFriendsStatus() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x1305DE8))(this);
	}
	template <typename T = void> T LoadFriends(int32_t pageSize, bool forceReload, Action1LoadFriendsStatus*>* callback) {
		return ((T (*)(DummyClient*, int32_t, bool, Action1LoadFriendsStatus*>*))(Il2CppBase() + 0x1305E00))(this, pageSize, forceReload, callback);
	}
	template <typename T = void> T LoadMoreFriends(int32_t pageSize, Action1LoadFriendsStatus*>* callback) {
		return ((T (*)(DummyClient*, int32_t, Action1LoadFriendsStatus*>*))(Il2CppBase() + 0x1305E64))(this, pageSize, callback);
	}
	template <typename T = void> T ShowCompareProfileWithAlternativeNameHintsUI(Il2CppString* userId, Il2CppString* otherPlayerInGameName, Il2CppString* currentPlayerInGameName, Action1UIStatus*>* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, Il2CppString*, Il2CppString*, Action1UIStatus*>*))(Il2CppBase() + 0x1305EC8))(this, userId, otherPlayerInGameName, currentPlayerInGameName, callback);
	}
	template <typename T = void> T GetFriendsListVisibility(bool forceReload, Action1FriendsListVisibilityStatus*>* callback) {
		return ((T (*)(DummyClient*, bool, Action1FriendsListVisibilityStatus*>*))(Il2CppBase() + 0x1305F2C))(this, forceReload, callback);
	}
	template <typename T = void> T ShowLeaderboardUI(Il2CppString* leaderboardId, LeaderboardTimeSpan* span, Action1UIStatus*>* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, LeaderboardTimeSpan*, Action1UIStatus*>*))(Il2CppBase() + 0x1305F90))(this, leaderboardId, span, callback);
	}
	template <typename T = int32_t> T LeaderboardMaxResults() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x1305FF4))(this);
	}
	template <typename T = void> T LoadScores(Il2CppString* leaderboardId, LeaderboardStart* start, int32_t rowCount, LeaderboardCollection* collection, LeaderboardTimeSpan* timeSpan, Action1LeaderboardScoreData*>* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, LeaderboardStart*, int32_t, LeaderboardCollection*, LeaderboardTimeSpan*, Action1LeaderboardScoreData*>*))(Il2CppBase() + 0x1305FFC))(this, leaderboardId, start, rowCount, collection, timeSpan, callback);
	}
	template <typename T = void> T LoadMoreScores(ScorePageToken* token, int32_t rowCount, Action1LeaderboardScoreData*>* callback) {
		return ((T (*)(DummyClient*, ScorePageToken*, int32_t, Action1LeaderboardScoreData*>*))(Il2CppBase() + 0x13060A0))(this, token, rowCount, callback);
	}
	template <typename T = void> T SubmitScore(Il2CppString* leaderboardId, int64_t score, Action1bool>* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, int64_t, Action1bool>*))(Il2CppBase() + 0x1306150))(this, leaderboardId, score, callback);
	}
	template <typename T = void> T SubmitScore_1(Il2CppString* leaderboardId, int64_t score, Il2CppString* metadata, Action1bool>* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, int64_t, Il2CppString*, Action1bool>*))(Il2CppBase() + 0x13061B4))(this, leaderboardId, score, metadata, callback);
	}
	template <typename T = void> T RequestPermissions(Il2CppArray<uintptr_t>* scopes, Action1SignInStatus*>* callback) {
		return ((T (*)(DummyClient*, Il2CppArray<uintptr_t>*, Action1SignInStatus*>*))(Il2CppBase() + 0x1306218))(this, scopes, callback);
	}
	template <typename T = bool> T HasPermissions(Il2CppArray<uintptr_t>* scopes) {
		return ((T (*)(DummyClient*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x130627C))(this, scopes);
	}
	template <typename T = ISavedGameClient*> T GetSavedGameClient() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x1306294))(this);
	}
	template <typename T = IEventsClient*> T GetEventsClient() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x13062AC))(this);
	}
	template <typename T = IVideoClient*> T GetVideoClient() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x13062C4))(this);
	}
	template <typename T = void> T LoadFriends_1(Action1bool>* callback) {
		return ((T (*)(DummyClient*, Action1bool>*))(Il2CppBase() + 0x13062DC))(this, callback);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFriends() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x1306338))(this);
	}
	template <typename T = void> T SetGravityForPopups(Gravity* gravity) {
		return ((T (*)(DummyClient*, Gravity*))(Il2CppBase() + 0x1306384))(this, gravity);
	}
	template <typename T = void> static T LogUsage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1305830))(0);
	}

};

}
