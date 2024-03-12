#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesAndroid {

class AndroidClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesAndroid", "AndroidClient"));
	}

	template <typename T = uintptr_t> T& GameServicesLock() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& AuthStateLock() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mConfiguration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mSavedGameClient() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mEventsClient() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mVideoClient() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mTokenClient() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& mUser() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& mAuthState() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mFriends() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& mLastLoadFriendsStatus() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& mGamesClass() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> static T& TasksClassName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mFriendsResolutionException() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& mLeaderboardMaxResults() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& mFriendsMaxResults() {
		return *(T*)((uintptr_t)this + 0x94);
	}

	template <typename T = void> T Authenticate(bool silent, void* callback) {
		return ((T (*)(AndroidClient*, bool, void*))(Il2CppBase() + 0x12A9068))(this, silent, callback);
	}
	template <typename T = void*> static T AsOnGameThreadCallback(void* callback) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, callback);
	}
	template <typename T = void> static T InvokeCallbackOnGameThread(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12A9668))(0, callback);
	}
	template <typename T = void> static T InvokeCallbackOnGameThread_1(void* callback, uintptr_t data) {
		return ((T (*)(void *, void*, uintptr_t))(Il2CppBase() + 0x0))(0, callback, data);
	}
	template <typename T = void*> static T AsOnGameThreadCallback_1(void* toInvokeOnGameThread) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, toInvokeOnGameThread);
	}
	template <typename T = void> static T InvokeCallbackOnGameThread_2(void* callback, uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, callback, t1, t2);
	}
	template <typename T = void> T InitializeGameServices() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12A9774))(this);
	}
	template <typename T = void> T InitializeTokenClient() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12A9338))(this);
	}
	template <typename T = Il2CppString*> T GetUserEmail() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12A97AC))(this);
	}
	template <typename T = Il2CppString*> T GetIdToken() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12A9928))(this);
	}
	template <typename T = Il2CppString*> T GetServerAuthCode() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12A99CC))(this);
	}
	template <typename T = void> T GetAnotherServerAuthCode(bool reAuthenticateIfNeeded, void* callback) {
		return ((T (*)(AndroidClient*, bool, void*))(Il2CppBase() + 0x12A9A70))(this, reAuthenticateIfNeeded, callback);
	}
	template <typename T = bool> T IsAuthenticated() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12A9850))(this);
	}
	template <typename T = void> T LoadFriends(void* callback) {
		return ((T (*)(AndroidClient*, void*))(Il2CppBase() + 0x12A9B1C))(this, callback);
	}
	template <typename T = void> T LoadAllFriends(int32_t pageSize, bool forceReload, bool loadMore, void* callback) {
		return ((T (*)(AndroidClient*, int32_t, bool, bool, void*))(Il2CppBase() + 0x12A9B34))(this, pageSize, forceReload, loadMore, callback);
	}
	template <typename T = void> T LoadFriends_1(int32_t pageSize, bool forceReload, void* callback) {
		return ((T (*)(AndroidClient*, int32_t, bool, void*))(Il2CppBase() + 0x12AA1A8))(this, pageSize, forceReload, callback);
	}
	template <typename T = void> T LoadMoreFriends(int32_t pageSize, void* callback) {
		return ((T (*)(AndroidClient*, int32_t, void*))(Il2CppBase() + 0x12AA1B8))(this, pageSize, callback);
	}
	template <typename T = void> T LoadFriendsPaginated(int32_t pageSize, bool isLoadMore, bool forceReload, void* callback) {
		return ((T (*)(AndroidClient*, int32_t, bool, bool, void*))(Il2CppBase() + 0x12A9C44))(this, pageSize, isLoadMore, forceReload, callback);
	}
	template <typename T = uintptr_t> T GetLastLoadFriendsStatus() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12AA300))(this);
	}
	template <typename T = void> T AskForLoadFriendsResolution(void* callback) {
		return ((T (*)(AndroidClient*, void*))(Il2CppBase() + 0x12AA308))(this, callback);
	}
	template <typename T = void> T ShowCompareProfileWithAlternativeNameHintsUI(Il2CppString* playerId, Il2CppString* otherPlayerInGameName, Il2CppString* currentPlayerInGameName, void* callback) {
		return ((T (*)(AndroidClient*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x12AACA0))(this, playerId, otherPlayerInGameName, currentPlayerInGameName, callback);
	}
	template <typename T = void> T GetFriendsListVisibility(bool forceReload, void* callback) {
		return ((T (*)(AndroidClient*, bool, void*))(Il2CppBase() + 0x12AB314))(this, forceReload, callback);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFriends() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12AB714))(this);
	}
	template <typename T = void> T SignOut() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12AB71C))(this);
	}
	template <typename T = void> T SignOut_1(uintptr_t uiCallback) {
		return ((T (*)(AndroidClient*, uintptr_t))(Il2CppBase() + 0x12AB724))(this, uiCallback);
	}
	template <typename T = Il2CppString*> T GetUserId() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12AB8E4))(this);
	}
	template <typename T = Il2CppString*> T GetUserDisplayName() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12AB928))(this);
	}
	template <typename T = Il2CppString*> T GetUserImageUrl() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12AB96C))(this);
	}
	template <typename T = void> T SetGravityForPopups(uintptr_t gravity) {
		return ((T (*)(AndroidClient*, uintptr_t))(Il2CppBase() + 0x12AB9B0))(this, gravity);
	}
	template <typename T = void> T GetPlayerStats(void* callback) {
		return ((T (*)(AndroidClient*, void*))(Il2CppBase() + 0x12ABDE0))(this, callback);
	}
	template <typename T = void> T LoadUsers(Il2CppArray<uintptr_t>* userIds, void* callback) {
		return ((T (*)(AndroidClient*, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x12AC418))(this, userIds, callback);
	}
	template <typename T = void> T LoadAchievements(void* callback) {
		return ((T (*)(AndroidClient*, void*))(Il2CppBase() + 0x12ACA88))(this, callback);
	}
	template <typename T = void> T UnlockAchievement(Il2CppString* achId, void* callback) {
		return ((T (*)(AndroidClient*, Il2CppString*, void*))(Il2CppBase() + 0x12ACFBC))(this, achId, callback);
	}
	template <typename T = void> T RevealAchievement(Il2CppString* achId, void* callback) {
		return ((T (*)(AndroidClient*, Il2CppString*, void*))(Il2CppBase() + 0x12AD234))(this, achId, callback);
	}
	template <typename T = void> T IncrementAchievement(Il2CppString* achId, int32_t steps, void* callback) {
		return ((T (*)(AndroidClient*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x12AD4AC))(this, achId, steps, callback);
	}
	template <typename T = void> T SetStepsAtLeast(Il2CppString* achId, int32_t steps, void* callback) {
		return ((T (*)(AndroidClient*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x12AD7A8))(this, achId, steps, callback);
	}
	template <typename T = void> T ShowAchievementsUI(void* callback) {
		return ((T (*)(AndroidClient*, void*))(Il2CppBase() + 0x12ADAA4))(this, callback);
	}
	template <typename T = int32_t> T LeaderboardMaxResults() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12ADF54))(this);
	}
	template <typename T = void> T ShowLeaderboardUI(Il2CppString* leaderboardId, uintptr_t span, void* callback) {
		return ((T (*)(AndroidClient*, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x12ADF5C))(this, leaderboardId, span, callback);
	}
	template <typename T = void> T AddOnFailureListenerWithSignOut(uintptr_t task, void* callback) {
		return ((T (*)(AndroidClient*, uintptr_t, void*))(Il2CppBase() + 0x12AC324))(this, task, callback);
	}
	template <typename T = void*> T GetUiSignOutCallbackOnGameThread(void* callback) {
		return ((T (*)(AndroidClient*, void*))(Il2CppBase() + 0x12AACE4))(this, callback);
	}
	template <typename T = void> T LoadScores(Il2CppString* leaderboardId, uintptr_t start, int32_t rowCount, uintptr_t collection, uintptr_t timeSpan, void* callback) {
		return ((T (*)(AndroidClient*, Il2CppString*, uintptr_t, int32_t, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x12AE950))(this, leaderboardId, start, rowCount, collection, timeSpan, callback);
	}
	template <typename T = void> T LoadMoreScores(uintptr_t token, int32_t rowCount, void* callback) {
		return ((T (*)(AndroidClient*, uintptr_t, int32_t, void*))(Il2CppBase() + 0x12AF044))(this, token, rowCount, callback);
	}
	template <typename T = uintptr_t> T CreateLeaderboardScoreData(Il2CppString* leaderboardId, uintptr_t collection, uintptr_t timespan, uintptr_t status, uintptr_t leaderboardScoresJava) {
		return ((T (*)(AndroidClient*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x12AF57C))(this, leaderboardId, collection, timespan, status, leaderboardScoresJava);
	}
	template <typename T = void> T SubmitScore(Il2CppString* leaderboardId, int64_t score, void* callback) {
		return ((T (*)(AndroidClient*, Il2CppString*, int64_t, void*))(Il2CppBase() + 0x12B0AF4))(this, leaderboardId, score, callback);
	}
	template <typename T = void> T SubmitScore_1(Il2CppString* leaderboardId, int64_t score, Il2CppString* metadata, void* callback) {
		return ((T (*)(AndroidClient*, Il2CppString*, int64_t, Il2CppString*, void*))(Il2CppBase() + 0x12B0DEC))(this, leaderboardId, score, metadata, callback);
	}
	template <typename T = void> T RequestPermissions(Il2CppArray<uintptr_t>* scopes, void* callback) {
		return ((T (*)(AndroidClient*, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x12B1138))(this, scopes, callback);
	}
	template <typename T = void> T UpdateClients() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12B12A8))(this);
	}
	template <typename T = bool> T HasPermissions(Il2CppArray<uintptr_t>* scopes) {
		return ((T (*)(AndroidClient*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12B1A48))(this, scopes);
	}
	template <typename T = uintptr_t> T GetSavedGameClient() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12B1A80))(this);
	}
	template <typename T = uintptr_t> T GetEventsClient() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12B1B50))(this);
	}
	template <typename T = uintptr_t> T GetVideoClient() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12B1C20))(this);
	}
	template <typename T = uintptr_t> T getAchievementsClient() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12ACE84))(this);
	}
	template <typename T = uintptr_t> T getGamesClient() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12ABCA8))(this);
	}
	template <typename T = uintptr_t> T getPlayersClient() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12AA1C8))(this);
	}
	template <typename T = uintptr_t> T getLeaderboardsClient() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12AEEE8))(this);
	}
	template <typename T = uintptr_t> T getPlayerStatsClient() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12AC1EC))(this);
	}
	template <typename T = uintptr_t> T getVideosClient() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x12B1E98))(this);
	}

};

}
