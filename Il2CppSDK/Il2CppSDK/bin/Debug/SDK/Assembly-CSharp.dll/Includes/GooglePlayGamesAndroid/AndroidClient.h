#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesAndroid {

class AndroidClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesAndroid", "AndroidClient"));
	}

	template <typename R = Il2CppObject*> R& GameServicesLock() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& AuthStateLock() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = GooglePlayGamesBasicApi::PlayGamesClientConfiguration> R& mConfiguration() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = GooglePlayGamesBasicApiSavedGame::ISavedGameClient*> R& mSavedGameClient() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = GooglePlayGamesBasicApiEvents::IEventsClient*> R& mEventsClient() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = GooglePlayGamesBasicApiVideo::IVideoClient*> R& mVideoClient() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = GooglePlayGamesAndroid::AndroidTokenClient*> R& mTokenClient() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = GooglePlayGamesBasicApi::Player*> R& mUser() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = AuthState> R& mAuthState() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& mFriends() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = GooglePlayGamesBasicApi::LoadFriendsStatus> R& mLastLoadFriendsStatus() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& mGamesClass() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppString*> static R& TasksClassName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& mFriendsResolutionException() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = int32_t> R& mLeaderboardMaxResults() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int32_t> R& mFriendsMaxResults() {
		return *(R*)((uintptr_t)this + 0x94);
	}

	template <typename R = void> R Authenticate(bool silent, Action1<GooglePlayGamesBasicApi::SignInStatus>* callback) {
		return ((R (*)(AndroidClient*, bool, Action1<GooglePlayGamesBasicApi::SignInStatus>*))(Il2CppBase() + 0x12A9068))(this, silent, callback);
	}
	 static Action1<uintptr_t>* AsOnGameThreadCallback(Action1<uintptr_t>* callback) {
		return ((Action1<uintptr_t>* (*)(void *, Action1<uintptr_t>*))(Il2CppBase() + 0x0))(0, callback);
	}
	template <typename R = void> static R InvokeCallbackOnGameThread(uintptr_t callback) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x12A9668))(0, callback);
	}
	template <typename R = void> static R InvokeCallbackOnGameThread_1(Action1<uintptr_t>* callback, uintptr_t data) {
		return ((R (*)(void *, Action1<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(0, callback, data);
	}
	 static Action2<uintptr_t, uintptr_t>* AsOnGameThreadCallback_1(Action2<uintptr_t, uintptr_t>* toInvokeOnGameThread) {
		return ((Action2<uintptr_t, uintptr_t>* (*)(void *, Action2<uintptr_t, uintptr_t>*))(Il2CppBase() + 0x0))(0, toInvokeOnGameThread);
	}
	template <typename R = void> static R InvokeCallbackOnGameThread_2(Action2<uintptr_t, uintptr_t>* callback, uintptr_t t1, uintptr_t t2) {
		return ((R (*)(void *, Action2<uintptr_t, uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, callback, t1, t2);
	}
	template <typename R = void> R InitializeGameServices() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12A9774))(this);
	}
	template <typename R = void> R InitializeTokenClient() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12A9338))(this);
	}
	template <typename R = Il2CppString*> R GetUserEmail() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12A97AC))(this);
	}
	template <typename R = Il2CppString*> R GetIdToken() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12A9928))(this);
	}
	template <typename R = Il2CppString*> R GetServerAuthCode() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12A99CC))(this);
	}
	template <typename R = void> R GetAnotherServerAuthCode(bool reAuthenticateIfNeeded, Action1<Il2CppString*>* callback) {
		return ((R (*)(AndroidClient*, bool, Action1<Il2CppString*>*))(Il2CppBase() + 0x12A9A70))(this, reAuthenticateIfNeeded, callback);
	}
	template <typename R = bool> R IsAuthenticated() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12A9850))(this);
	}
	template <typename R = void> R LoadFriends(Action1<bool>* callback) {
		return ((R (*)(AndroidClient*, Action1<bool>*))(Il2CppBase() + 0x12A9B1C))(this, callback);
	}
	template <typename R = void> R LoadAllFriends(int32_t pageSize, bool forceReload, bool loadMore, Action1<bool>* callback) {
		return ((R (*)(AndroidClient*, int32_t, bool, bool, Action1<bool>*))(Il2CppBase() + 0x12A9B34))(this, pageSize, forceReload, loadMore, callback);
	}
	template <typename R = void> R LoadFriends_1(int32_t pageSize, bool forceReload, Action1<GooglePlayGamesBasicApi::LoadFriendsStatus>* callback) {
		return ((R (*)(AndroidClient*, int32_t, bool, Action1<GooglePlayGamesBasicApi::LoadFriendsStatus>*))(Il2CppBase() + 0x12AA1A8))(this, pageSize, forceReload, callback);
	}
	template <typename R = void> R LoadMoreFriends(int32_t pageSize, Action1<GooglePlayGamesBasicApi::LoadFriendsStatus>* callback) {
		return ((R (*)(AndroidClient*, int32_t, Action1<GooglePlayGamesBasicApi::LoadFriendsStatus>*))(Il2CppBase() + 0x12AA1B8))(this, pageSize, callback);
	}
	template <typename R = void> R LoadFriendsPaginated(int32_t pageSize, bool isLoadMore, bool forceReload, Action1<GooglePlayGamesBasicApi::LoadFriendsStatus>* callback) {
		return ((R (*)(AndroidClient*, int32_t, bool, bool, Action1<GooglePlayGamesBasicApi::LoadFriendsStatus>*))(Il2CppBase() + 0x12A9C44))(this, pageSize, isLoadMore, forceReload, callback);
	}
	template <typename R = GooglePlayGamesBasicApi::LoadFriendsStatus> R GetLastLoadFriendsStatus() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12AA300))(this);
	}
	template <typename R = void> R AskForLoadFriendsResolution(Action1<GooglePlayGamesBasicApi::UIStatus>* callback) {
		return ((R (*)(AndroidClient*, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x12AA308))(this, callback);
	}
	template <typename R = void> R ShowCompareProfileWithAlternativeNameHintsUI(Il2CppString* playerId, Il2CppString* otherPlayerInGameName, Il2CppString* currentPlayerInGameName, Action1<GooglePlayGamesBasicApi::UIStatus>* callback) {
		return ((R (*)(AndroidClient*, Il2CppString*, Il2CppString*, Il2CppString*, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x12AACA0))(this, playerId, otherPlayerInGameName, currentPlayerInGameName, callback);
	}
	template <typename R = void> R GetFriendsListVisibility(bool forceReload, Action1<GooglePlayGamesBasicApi::FriendsListVisibilityStatus>* callback) {
		return ((R (*)(AndroidClient*, bool, Action1<GooglePlayGamesBasicApi::FriendsListVisibilityStatus>*))(Il2CppBase() + 0x12AB314))(this, forceReload, callback);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R GetFriends() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12AB714))(this);
	}
	template <typename R = void> R SignOut() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12AB71C))(this);
	}
	template <typename R = void> R SignOut_1(uintptr_t uiCallback) {
		return ((R (*)(AndroidClient*, uintptr_t))(Il2CppBase() + 0x12AB724))(this, uiCallback);
	}
	template <typename R = Il2CppString*> R GetUserId() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12AB8E4))(this);
	}
	template <typename R = Il2CppString*> R GetUserDisplayName() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12AB928))(this);
	}
	template <typename R = Il2CppString*> R GetUserImageUrl() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12AB96C))(this);
	}
	template <typename R = void> R SetGravityForPopups(GooglePlayGamesBasicApi::Gravity gravity) {
		return ((R (*)(AndroidClient*, GooglePlayGamesBasicApi::Gravity))(Il2CppBase() + 0x12AB9B0))(this, gravity);
	}
	template <typename R = void> R GetPlayerStats(Action2<GooglePlayGamesBasicApi::CommonStatusCodes, GooglePlayGamesBasicApi::PlayerStats*>* callback) {
		return ((R (*)(AndroidClient*, Action2<GooglePlayGamesBasicApi::CommonStatusCodes, GooglePlayGamesBasicApi::PlayerStats*>*))(Il2CppBase() + 0x12ABDE0))(this, callback);
	}
	template <typename R = void> R LoadUsers(Il2CppArray<Il2CppString*>* userIds, Action1<Il2CppArray<uintptr_t>*>* callback) {
		return ((R (*)(AndroidClient*, Il2CppArray<Il2CppString*>*, Action1<Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x12AC418))(this, userIds, callback);
	}
	template <typename R = void> R LoadAchievements(Action1<Il2CppArray<GooglePlayGamesBasicApi::Achievement*>*>* callback) {
		return ((R (*)(AndroidClient*, Action1<Il2CppArray<GooglePlayGamesBasicApi::Achievement*>*>*))(Il2CppBase() + 0x12ACA88))(this, callback);
	}
	template <typename R = void> R UnlockAchievement(Il2CppString* achId, Action1<bool>* callback) {
		return ((R (*)(AndroidClient*, Il2CppString*, Action1<bool>*))(Il2CppBase() + 0x12ACFBC))(this, achId, callback);
	}
	template <typename R = void> R RevealAchievement(Il2CppString* achId, Action1<bool>* callback) {
		return ((R (*)(AndroidClient*, Il2CppString*, Action1<bool>*))(Il2CppBase() + 0x12AD234))(this, achId, callback);
	}
	template <typename R = void> R IncrementAchievement(Il2CppString* achId, int32_t steps, Action1<bool>* callback) {
		return ((R (*)(AndroidClient*, Il2CppString*, int32_t, Action1<bool>*))(Il2CppBase() + 0x12AD4AC))(this, achId, steps, callback);
	}
	template <typename R = void> R SetStepsAtLeast(Il2CppString* achId, int32_t steps, Action1<bool>* callback) {
		return ((R (*)(AndroidClient*, Il2CppString*, int32_t, Action1<bool>*))(Il2CppBase() + 0x12AD7A8))(this, achId, steps, callback);
	}
	template <typename R = void> R ShowAchievementsUI(Action1<GooglePlayGamesBasicApi::UIStatus>* callback) {
		return ((R (*)(AndroidClient*, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x12ADAA4))(this, callback);
	}
	template <typename R = int32_t> R LeaderboardMaxResults() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12ADF54))(this);
	}
	template <typename R = void> R ShowLeaderboardUI(Il2CppString* leaderboardId, GooglePlayGamesBasicApi::LeaderboardTimeSpan span, Action1<GooglePlayGamesBasicApi::UIStatus>* callback) {
		return ((R (*)(AndroidClient*, Il2CppString*, GooglePlayGamesBasicApi::LeaderboardTimeSpan, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x12ADF5C))(this, leaderboardId, span, callback);
	}
	template <typename R = void> R AddOnFailureListenerWithSignOut(uintptr_t task, Action1<uintptr_t>* callback) {
		return ((R (*)(AndroidClient*, uintptr_t, Action1<uintptr_t>*))(Il2CppBase() + 0x12AC324))(this, task, callback);
	}
	 Action1<GooglePlayGamesBasicApi::UIStatus>* GetUiSignOutCallbackOnGameThread(Action1<GooglePlayGamesBasicApi::UIStatus>* callback) {
		return ((Action1<GooglePlayGamesBasicApi::UIStatus>* (*)(AndroidClient*, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x12AACE4))(this, callback);
	}
	template <typename R = void> R LoadScores(Il2CppString* leaderboardId, GooglePlayGamesBasicApi::LeaderboardStart start, int32_t rowCount, GooglePlayGamesBasicApi::LeaderboardCollection collection, GooglePlayGamesBasicApi::LeaderboardTimeSpan timeSpan, Action1<GooglePlayGamesBasicApi::LeaderboardScoreData*>* callback) {
		return ((R (*)(AndroidClient*, Il2CppString*, GooglePlayGamesBasicApi::LeaderboardStart, int32_t, GooglePlayGamesBasicApi::LeaderboardCollection, GooglePlayGamesBasicApi::LeaderboardTimeSpan, Action1<GooglePlayGamesBasicApi::LeaderboardScoreData*>*))(Il2CppBase() + 0x12AE950))(this, leaderboardId, start, rowCount, collection, timeSpan, callback);
	}
	template <typename R = void> R LoadMoreScores(GooglePlayGamesBasicApi::ScorePageToken* token, int32_t rowCount, Action1<GooglePlayGamesBasicApi::LeaderboardScoreData*>* callback) {
		return ((R (*)(AndroidClient*, GooglePlayGamesBasicApi::ScorePageToken*, int32_t, Action1<GooglePlayGamesBasicApi::LeaderboardScoreData*>*))(Il2CppBase() + 0x12AF044))(this, token, rowCount, callback);
	}
	template <typename R = GooglePlayGamesBasicApi::LeaderboardScoreData*> R CreateLeaderboardScoreData(Il2CppString* leaderboardId, GooglePlayGamesBasicApi::LeaderboardCollection collection, GooglePlayGamesBasicApi::LeaderboardTimeSpan timespan, GooglePlayGamesBasicApi::ResponseStatus status, uintptr_t leaderboardScoresJava) {
		return ((R (*)(AndroidClient*, Il2CppString*, GooglePlayGamesBasicApi::LeaderboardCollection, GooglePlayGamesBasicApi::LeaderboardTimeSpan, GooglePlayGamesBasicApi::ResponseStatus, uintptr_t))(Il2CppBase() + 0x12AF57C))(this, leaderboardId, collection, timespan, status, leaderboardScoresJava);
	}
	template <typename R = void> R SubmitScore(Il2CppString* leaderboardId, int64_t score, Action1<bool>* callback) {
		return ((R (*)(AndroidClient*, Il2CppString*, int64_t, Action1<bool>*))(Il2CppBase() + 0x12B0AF4))(this, leaderboardId, score, callback);
	}
	template <typename R = void> R SubmitScore_1(Il2CppString* leaderboardId, int64_t score, Il2CppString* metadata, Action1<bool>* callback) {
		return ((R (*)(AndroidClient*, Il2CppString*, int64_t, Il2CppString*, Action1<bool>*))(Il2CppBase() + 0x12B0DEC))(this, leaderboardId, score, metadata, callback);
	}
	template <typename R = void> R RequestPermissions(Il2CppArray<Il2CppString*>* scopes, Action1<GooglePlayGamesBasicApi::SignInStatus>* callback) {
		return ((R (*)(AndroidClient*, Il2CppArray<Il2CppString*>*, Action1<GooglePlayGamesBasicApi::SignInStatus>*))(Il2CppBase() + 0x12B1138))(this, scopes, callback);
	}
	template <typename R = void> R UpdateClients() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12B12A8))(this);
	}
	template <typename R = bool> R HasPermissions(Il2CppArray<Il2CppString*>* scopes) {
		return ((R (*)(AndroidClient*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x12B1A48))(this, scopes);
	}
	template <typename R = GooglePlayGamesBasicApiSavedGame::ISavedGameClient*> R GetSavedGameClient() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12B1A80))(this);
	}
	template <typename R = GooglePlayGamesBasicApiEvents::IEventsClient*> R GetEventsClient() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12B1B50))(this);
	}
	template <typename R = GooglePlayGamesBasicApiVideo::IVideoClient*> R GetVideoClient() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12B1C20))(this);
	}
	template <typename R = uintptr_t> R getAchievementsClient() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12ACE84))(this);
	}
	template <typename R = uintptr_t> R getGamesClient() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12ABCA8))(this);
	}
	template <typename R = uintptr_t> R getPlayersClient() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12AA1C8))(this);
	}
	template <typename R = uintptr_t> R getLeaderboardsClient() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12AEEE8))(this);
	}
	template <typename R = uintptr_t> R getPlayerStatsClient() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12AC1EC))(this);
	}
	template <typename R = uintptr_t> R getVideosClient() {
		return ((R (*)(AndroidClient*))(Il2CppBase() + 0x12B1E98))(this);
	}

};

}
