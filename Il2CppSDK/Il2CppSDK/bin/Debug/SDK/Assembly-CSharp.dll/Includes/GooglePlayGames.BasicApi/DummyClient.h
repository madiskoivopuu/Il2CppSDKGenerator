#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApi {

class DummyClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApi", "DummyClient"));
	}


	template <typename T = void> T Authenticate(bool silent, void* callback) {
		return ((T (*)(DummyClient*, bool, void*))(Il2CppBase() + 0x13057CC))(this, silent, callback);
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
	template <typename T = void> T GetAnotherServerAuthCode(bool reAuthenticateIfNeeded, void* callback) {
		return ((T (*)(DummyClient*, bool, void*))(Il2CppBase() + 0x1305938))(this, reAuthenticateIfNeeded, callback);
	}
	template <typename T = Il2CppString*> T GetUserEmail() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x1305994))(this);
	}
	template <typename T = void> T GetPlayerStats(void* callback) {
		return ((T (*)(DummyClient*, void*))(Il2CppBase() + 0x13059E0))(this, callback);
	}
	template <typename T = Il2CppString*> T GetUserDisplayName() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x1305A68))(this);
	}
	template <typename T = Il2CppString*> T GetUserImageUrl() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x1305AB0))(this);
	}
	template <typename T = void> T LoadUsers(Il2CppArray<uintptr_t>* userIds, void* callback) {
		return ((T (*)(DummyClient*, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x1305AC8))(this, userIds, callback);
	}
	template <typename T = void> T LoadAchievements(void* callback) {
		return ((T (*)(DummyClient*, void*))(Il2CppBase() + 0x1305B2C))(this, callback);
	}
	template <typename T = void> T UnlockAchievement(Il2CppString* achId, void* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, void*))(Il2CppBase() + 0x1305B90))(this, achId, callback);
	}
	template <typename T = void> T RevealAchievement(Il2CppString* achId, void* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, void*))(Il2CppBase() + 0x1305BF4))(this, achId, callback);
	}
	template <typename T = void> T IncrementAchievement(Il2CppString* achId, int32_t steps, void* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x1305C58))(this, achId, steps, callback);
	}
	template <typename T = void> T SetStepsAtLeast(Il2CppString* achId, int32_t steps, void* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x1305CBC))(this, achId, steps, callback);
	}
	template <typename T = void> T ShowAchievementsUI(void* callback) {
		return ((T (*)(DummyClient*, void*))(Il2CppBase() + 0x1305D20))(this, callback);
	}
	template <typename T = void> T AskForLoadFriendsResolution(void* callback) {
		return ((T (*)(DummyClient*, void*))(Il2CppBase() + 0x1305D84))(this, callback);
	}
	template <typename T = uintptr_t> T GetLastLoadFriendsStatus() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x1305DE8))(this);
	}
	template <typename T = void> T LoadFriends(int32_t pageSize, bool forceReload, void* callback) {
		return ((T (*)(DummyClient*, int32_t, bool, void*))(Il2CppBase() + 0x1305E00))(this, pageSize, forceReload, callback);
	}
	template <typename T = void> T LoadMoreFriends(int32_t pageSize, void* callback) {
		return ((T (*)(DummyClient*, int32_t, void*))(Il2CppBase() + 0x1305E64))(this, pageSize, callback);
	}
	template <typename T = void> T ShowCompareProfileWithAlternativeNameHintsUI(Il2CppString* userId, Il2CppString* otherPlayerInGameName, Il2CppString* currentPlayerInGameName, void* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x1305EC8))(this, userId, otherPlayerInGameName, currentPlayerInGameName, callback);
	}
	template <typename T = void> T GetFriendsListVisibility(bool forceReload, void* callback) {
		return ((T (*)(DummyClient*, bool, void*))(Il2CppBase() + 0x1305F2C))(this, forceReload, callback);
	}
	template <typename T = void> T ShowLeaderboardUI(Il2CppString* leaderboardId, uintptr_t span, void* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x1305F90))(this, leaderboardId, span, callback);
	}
	template <typename T = int32_t> T LeaderboardMaxResults() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x1305FF4))(this);
	}
	template <typename T = void> T LoadScores(Il2CppString* leaderboardId, uintptr_t start, int32_t rowCount, uintptr_t collection, uintptr_t timeSpan, void* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, uintptr_t, int32_t, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x1305FFC))(this, leaderboardId, start, rowCount, collection, timeSpan, callback);
	}
	template <typename T = void> T LoadMoreScores(uintptr_t token, int32_t rowCount, void* callback) {
		return ((T (*)(DummyClient*, uintptr_t, int32_t, void*))(Il2CppBase() + 0x13060A0))(this, token, rowCount, callback);
	}
	template <typename T = void> T SubmitScore(Il2CppString* leaderboardId, int64_t score, void* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, int64_t, void*))(Il2CppBase() + 0x1306150))(this, leaderboardId, score, callback);
	}
	template <typename T = void> T SubmitScore_1(Il2CppString* leaderboardId, int64_t score, Il2CppString* metadata, void* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, int64_t, Il2CppString*, void*))(Il2CppBase() + 0x13061B4))(this, leaderboardId, score, metadata, callback);
	}
	template <typename T = void> T RequestPermissions(Il2CppArray<uintptr_t>* scopes, void* callback) {
		return ((T (*)(DummyClient*, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x1306218))(this, scopes, callback);
	}
	template <typename T = bool> T HasPermissions(Il2CppArray<uintptr_t>* scopes) {
		return ((T (*)(DummyClient*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x130627C))(this, scopes);
	}
	template <typename T = uintptr_t> T GetSavedGameClient() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x1306294))(this);
	}
	template <typename T = uintptr_t> T GetEventsClient() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x13062AC))(this);
	}
	template <typename T = uintptr_t> T GetVideoClient() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x13062C4))(this);
	}
	template <typename T = void> T LoadFriends_1(void* callback) {
		return ((T (*)(DummyClient*, void*))(Il2CppBase() + 0x13062DC))(this, callback);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFriends() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x1306338))(this);
	}
	template <typename T = void> T SetGravityForPopups(uintptr_t gravity) {
		return ((T (*)(DummyClient*, uintptr_t))(Il2CppBase() + 0x1306384))(this, gravity);
	}
	template <typename T = void> static T LogUsage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1305830))(0);
	}

};

}
