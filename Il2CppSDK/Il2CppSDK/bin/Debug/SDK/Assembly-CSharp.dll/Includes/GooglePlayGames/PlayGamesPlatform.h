#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGames {

class PlayGamesPlatform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "PlayGamesPlatform"));
	}

	template <typename R = GooglePlayGames::PlayGamesPlatform*> static R& sInstance() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& sNearbyInitializePending() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = GooglePlayGamesBasicApiNearby::INearbyConnectionClient*> static R& sNearbyConnectionClient() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = GooglePlayGamesBasicApi::PlayGamesClientConfiguration> R& mConfiguration() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = GooglePlayGames::PlayGamesLocalUser*> R& mLocalUser() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = GooglePlayGamesBasicApi::IPlayGamesClient*> R& mClient() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& mDefaultLbUi() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Il2CppDictionary<Il2CppString*, Il2CppString*>*& mIdMap() {
		return *(Il2CppDictionary<Il2CppString*, Il2CppString*>**)((uintptr_t)this + 0x48);
	}

	template <typename R = bool> static R get_DebugLogEnabled() {
		return ((R (*)(void *))(Il2CppBase() + 0x16FD454))(0);
	}
	template <typename R = void> static R set_DebugLogEnabled(bool value) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0x16FD4F0))(0, value);
	}
	template <typename R = GooglePlayGames::PlayGamesPlatform*> static R get_Instance() {
		return ((R (*)(void *))(Il2CppBase() + 0x16F924C))(0);
	}
	template <typename R = GooglePlayGamesBasicApiNearby::INearbyConnectionClient*> static R get_Nearby() {
		return ((R (*)(void *))(Il2CppBase() + 0x16FD74C))(0);
	}
	template <typename R = GooglePlayGamesBasicApiSavedGame::ISavedGameClient*> R get_SavedGame() {
		return ((R (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FDA98))(this);
	}
	template <typename R = GooglePlayGamesBasicApiEvents::IEventsClient*> R get_Events() {
		return ((R (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FDB48))(this);
	}
	template <typename R = GooglePlayGamesBasicApiVideo::IVideoClient*> R get_Video() {
		return ((R (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FDBF8))(this);
	}
	template <typename R = uintptr_t> R get_localUser() {
		return ((R (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FDCA8))(this);
	}
	template <typename R = void> static R InitializeInstance(GooglePlayGamesBasicApi::PlayGamesClientConfiguration configuration) {
		return ((R (*)(void *, GooglePlayGamesBasicApi::PlayGamesClientConfiguration))(Il2CppBase() + 0x16FD59C))(0, configuration);
	}
	template <typename R = void> static R InitializeNearby(Action1<GooglePlayGamesBasicApiNearby::INearbyConnectionClient*>* callback) {
		return ((R (*)(void *, Action1<GooglePlayGamesBasicApiNearby::INearbyConnectionClient*>*))(Il2CppBase() + 0x16FD844))(0, callback);
	}
	template <typename R = GooglePlayGames::PlayGamesPlatform*> static R Activate() {
		return ((R (*)(void *))(Il2CppBase() + 0x16FDCB0))(0);
	}
	template <typename R = void> R SetGravityForPopups(GooglePlayGamesBasicApi::Gravity gravity) {
		return ((R (*)(PlayGamesPlatform*, GooglePlayGamesBasicApi::Gravity))(Il2CppBase() + 0x16FDDF4))(this, gravity);
	}
	template <typename R = void> R AddIdMapping(Il2CppString* fromId, Il2CppString* toId) {
		return ((R (*)(PlayGamesPlatform*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16FDEB4))(this, fromId, toId);
	}
	template <typename R = void> R Authenticate(Action1<bool>* callback) {
		return ((R (*)(PlayGamesPlatform*, Action1<bool>*))(Il2CppBase() + 0x16FBFE4))(this, callback);
	}
	template <typename R = void> R Authenticate_1(Action2<bool, Il2CppString*>* callback) {
		return ((R (*)(PlayGamesPlatform*, Action2<bool, Il2CppString*>*))(Il2CppBase() + 0x16FC008))(this, callback);
	}
	template <typename R = void> R Authenticate_2(Action1<bool>* callback, bool silent) {
		return ((R (*)(PlayGamesPlatform*, Action1<bool>*, bool))(Il2CppBase() + 0x16FC02C))(this, callback, silent);
	}
	template <typename R = void> R Authenticate_3(Action2<bool, Il2CppString*>* callback, bool silent) {
		return ((R (*)(PlayGamesPlatform*, Action2<bool, Il2CppString*>*, bool))(Il2CppBase() + 0x16FC12C))(this, callback, silent);
	}
	template <typename R = void> R Authenticate_4(GooglePlayGamesBasicApi::SignInInteractivity signInInteractivity, Action1<GooglePlayGamesBasicApi::SignInStatus>* callback) {
		return ((R (*)(PlayGamesPlatform*, GooglePlayGamesBasicApi::SignInInteractivity, Action1<GooglePlayGamesBasicApi::SignInStatus>*))(Il2CppBase() + 0x16FDF20))(this, signInInteractivity, callback);
	}
	template <typename R = void> R Authenticate_5(uintptr_t unused, Action1<bool>* callback) {
		return ((R (*)(PlayGamesPlatform*, uintptr_t, Action1<bool>*))(Il2CppBase() + 0x16FE3C8))(this, unused, callback);
	}
	template <typename R = void> R Authenticate_6(uintptr_t unused, Action2<bool, Il2CppString*>* callback) {
		return ((R (*)(PlayGamesPlatform*, uintptr_t, Action2<bool, Il2CppString*>*))(Il2CppBase() + 0x16FE3D4))(this, unused, callback);
	}
	template <typename R = bool> R IsAuthenticated() {
		return ((R (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FC610))(this);
	}
	template <typename R = void> R SignOut() {
		return ((R (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FE3E0))(this);
	}
	template <typename R = void> R LoadUsers(Il2CppArray<Il2CppString*>* userIds, Action1<Il2CppArray<uintptr_t>*>* callback) {
		return ((R (*)(PlayGamesPlatform*, Il2CppArray<Il2CppString*>*, Action1<Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x16FE4C4))(this, userIds, callback);
	}
	template <typename R = Il2CppString*> R GetUserId() {
		return ((R (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FC8D8))(this);
	}
	template <typename R = Il2CppString*> R GetIdToken() {
		return ((R (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FC4F0))(this);
	}
	template <typename R = Il2CppString*> R GetServerAuthCode() {
		return ((R (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FE638))(this);
	}
	template <typename R = void> R GetAnotherServerAuthCode(bool reAuthenticateIfNeeded, Action1<Il2CppString*>* callback) {
		return ((R (*)(PlayGamesPlatform*, bool, Action1<Il2CppString*>*))(Il2CppBase() + 0x16FE774))(this, reAuthenticateIfNeeded, callback);
	}
	template <typename R = Il2CppString*> R GetUserEmail() {
		return ((R (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FCE24))(this);
	}
	template <typename R = void> R GetPlayerStats(Action2<GooglePlayGamesBasicApi::CommonStatusCodes, GooglePlayGamesBasicApi::PlayerStats*>* callback) {
		return ((R (*)(PlayGamesPlatform*, Action2<GooglePlayGamesBasicApi::CommonStatusCodes, GooglePlayGamesBasicApi::PlayerStats*>*))(Il2CppBase() + 0x16FD010))(this, callback);
	}
	template <typename R = Il2CppString*> R GetUserDisplayName() {
		return ((R (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FC7A4))(this);
	}
	template <typename R = Il2CppString*> R GetUserImageUrl() {
		return ((R (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FCA04))(this);
	}
	template <typename R = void> R ReportProgress(Il2CppString* achievementID, double progress, Action1<bool>* callback) {
		return ((R (*)(PlayGamesPlatform*, Il2CppString*, double, Action1<bool>*))(Il2CppBase() + 0x16FEA54))(this, achievementID, progress, callback);
	}
	template <typename R = int32_t> static R progressToSteps(double progress, int32_t totalSteps) {
		return ((R (*)(void *, double, int32_t))(Il2CppBase() + 0x16FEFA4))(0, progress, totalSteps);
	}
	template <typename R = void> R RevealAchievement(Il2CppString* achievementID, Action1<bool>* callback) {
		return ((R (*)(PlayGamesPlatform*, Il2CppString*, Action1<bool>*))(Il2CppBase() + 0x16FEFDC))(this, achievementID, callback);
	}
	template <typename R = void> R UnlockAchievement(Il2CppString* achievementID, Action1<bool>* callback) {
		return ((R (*)(PlayGamesPlatform*, Il2CppString*, Action1<bool>*))(Il2CppBase() + 0x16FF1A8))(this, achievementID, callback);
	}
	template <typename R = void> R IncrementAchievement(Il2CppString* achievementID, int32_t steps, Action1<bool>* callback) {
		return ((R (*)(PlayGamesPlatform*, Il2CppString*, int32_t, Action1<bool>*))(Il2CppBase() + 0x16FF374))(this, achievementID, steps, callback);
	}
	template <typename R = void> R SetStepsAtLeast(Il2CppString* achievementID, int32_t steps, Action1<bool>* callback) {
		return ((R (*)(PlayGamesPlatform*, Il2CppString*, int32_t, Action1<bool>*))(Il2CppBase() + 0x16FF578))(this, achievementID, steps, callback);
	}
	template <typename R = void> R LoadAchievementDescriptions(Action1<Il2CppArray<uintptr_t>*>* callback) {
		return ((R (*)(PlayGamesPlatform*, Action1<Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x16FF77C))(this, callback);
	}
	template <typename R = void> R LoadAchievements(Action1<Il2CppArray<uintptr_t>*>* callback) {
		return ((R (*)(PlayGamesPlatform*, Action1<Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x16FF970))(this, callback);
	}
	template <typename R = uintptr_t> R CreateAchievement() {
		return ((R (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FFB54))(this);
	}
	template <typename R = void> R ReportScore(int64_t score, Il2CppString* board, Action1<bool>* callback) {
		return ((R (*)(PlayGamesPlatform*, int64_t, Il2CppString*, Action1<bool>*))(Il2CppBase() + 0x16FFBA8))(this, score, board, callback);
	}
	template <typename R = void> R ReportScore_1(int64_t score, Il2CppString* board, Il2CppString* metadata, Action1<bool>* callback) {
		return ((R (*)(PlayGamesPlatform*, int64_t, Il2CppString*, Il2CppString*, Action1<bool>*))(Il2CppBase() + 0x16FFDAC))(this, score, board, metadata, callback);
	}
	template <typename R = void> R LoadScores(Il2CppString* leaderboardId, Action1<Il2CppArray<uintptr_t>*>* callback) {
		return ((R (*)(PlayGamesPlatform*, Il2CppString*, Action1<Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x1700158))(this, leaderboardId, callback);
	}
	template <typename R = void> R LoadScores_1(Il2CppString* leaderboardId, GooglePlayGamesBasicApi::LeaderboardStart start, int32_t rowCount, GooglePlayGamesBasicApi::LeaderboardCollection collection, GooglePlayGamesBasicApi::LeaderboardTimeSpan timeSpan, Action1<GooglePlayGamesBasicApi::LeaderboardScoreData*>* callback) {
		return ((R (*)(PlayGamesPlatform*, Il2CppString*, GooglePlayGamesBasicApi::LeaderboardStart, int32_t, GooglePlayGamesBasicApi::LeaderboardCollection, GooglePlayGamesBasicApi::LeaderboardTimeSpan, Action1<GooglePlayGamesBasicApi::LeaderboardScoreData*>*))(Il2CppBase() + 0x17002DC))(this, leaderboardId, start, rowCount, collection, timeSpan, callback);
	}
	template <typename R = void> R LoadMoreScores(GooglePlayGamesBasicApi::ScorePageToken* token, int32_t rowCount, Action1<GooglePlayGamesBasicApi::LeaderboardScoreData*>* callback) {
		return ((R (*)(PlayGamesPlatform*, GooglePlayGamesBasicApi::ScorePageToken*, int32_t, Action1<GooglePlayGamesBasicApi::LeaderboardScoreData*>*))(Il2CppBase() + 0x1700498))(this, token, rowCount, callback);
	}
	template <typename R = uintptr_t> R CreateLeaderboard() {
		return ((R (*)(PlayGamesPlatform*))(Il2CppBase() + 0x1700638))(this);
	}
	template <typename R = void> R ShowAchievementsUI() {
		return ((R (*)(PlayGamesPlatform*))(Il2CppBase() + 0x1700698))(this);
	}
	template <typename R = void> R ShowAchievementsUI_1(Action1<GooglePlayGamesBasicApi::UIStatus>* callback) {
		return ((R (*)(PlayGamesPlatform*, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x17006A0))(this, callback);
	}
	template <typename R = void> R ShowLeaderboardUI() {
		return ((R (*)(PlayGamesPlatform*))(Il2CppBase() + 0x170083C))(this);
	}
	template <typename R = void> R ShowLeaderboardUI_1(Il2CppString* leaderboardId) {
		return ((R (*)(PlayGamesPlatform*, Il2CppString*))(Il2CppBase() + 0x17008E0))(this, leaderboardId);
	}
	template <typename R = void> R ShowLeaderboardUI_2(Il2CppString* leaderboardId, Action1<GooglePlayGamesBasicApi::UIStatus>* callback) {
		return ((R (*)(PlayGamesPlatform*, Il2CppString*, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x17008D4))(this, leaderboardId, callback);
	}
	template <typename R = void> R ShowLeaderboardUI_3(Il2CppString* leaderboardId, GooglePlayGamesBasicApi::LeaderboardTimeSpan span, Action1<GooglePlayGamesBasicApi::UIStatus>* callback) {
		return ((R (*)(PlayGamesPlatform*, Il2CppString*, GooglePlayGamesBasicApi::LeaderboardTimeSpan, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x1700918))(this, leaderboardId, span, callback);
	}
	template <typename R = void> R SetDefaultLeaderboardForUI(Il2CppString* lbid) {
		return ((R (*)(PlayGamesPlatform*, Il2CppString*))(Il2CppBase() + 0x1700B2C))(this, lbid);
	}
	template <typename R = void> R LoadFriends(uintptr_t user, Action1<bool>* callback) {
		return ((R (*)(PlayGamesPlatform*, uintptr_t, Action1<bool>*))(Il2CppBase() + 0x16FC234))(this, user, callback);
	}
	template <typename R = void> R LoadScores_2(uintptr_t board, Action1<bool>* callback) {
		return ((R (*)(PlayGamesPlatform*, uintptr_t, Action1<bool>*))(Il2CppBase() + 0x16FB364))(this, board, callback);
	}
	template <typename R = void> R RequestPermission(Il2CppString* scope, Action1<GooglePlayGamesBasicApi::SignInStatus>* callback) {
		return ((R (*)(PlayGamesPlatform*, Il2CppString*, Action1<GooglePlayGamesBasicApi::SignInStatus>*))(Il2CppBase() + 0x1700BF0))(this, scope, callback);
	}
	template <typename R = void> R RequestPermissions(Il2CppArray<Il2CppString*>* scopes, Action1<GooglePlayGamesBasicApi::SignInStatus>* callback) {
		return ((R (*)(PlayGamesPlatform*, Il2CppArray<Il2CppString*>*, Action1<GooglePlayGamesBasicApi::SignInStatus>*))(Il2CppBase() + 0x1700CB0))(this, scopes, callback);
	}
	template <typename R = bool> R HasPermission(Il2CppString* scope) {
		return ((R (*)(PlayGamesPlatform*, Il2CppString*))(Il2CppBase() + 0x1700E04))(this, scope);
	}
	template <typename R = bool> R HasPermissions(Il2CppArray<Il2CppString*>* scopes) {
		return ((R (*)(PlayGamesPlatform*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1700EBC))(this, scopes);
	}
	template <typename R = bool> R GetLoading(uintptr_t board) {
		return ((R (*)(PlayGamesPlatform*, uintptr_t))(Il2CppBase() + 0x1700FE8))(this, board);
	}
	template <typename R = void> R ShowCompareProfileWithAlternativeNameHintsUI(Il2CppString* userId, Il2CppString* otherPlayerInGameName, Il2CppString* currentPlayerInGameName, Action1<GooglePlayGamesBasicApi::UIStatus>* callback) {
		return ((R (*)(PlayGamesPlatform*, Il2CppString*, Il2CppString*, Il2CppString*, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x170109C))(this, userId, otherPlayerInGameName, currentPlayerInGameName, callback);
	}
	template <typename R = void> R GetFriendsListVisibility(bool forceReload, Action1<GooglePlayGamesBasicApi::FriendsListVisibilityStatus>* callback) {
		return ((R (*)(PlayGamesPlatform*, bool, Action1<GooglePlayGamesBasicApi::FriendsListVisibilityStatus>*))(Il2CppBase() + 0x17012D8))(this, forceReload, callback);
	}
	template <typename R = void> R AskForLoadFriendsResolution(Action1<GooglePlayGamesBasicApi::UIStatus>* callback) {
		return ((R (*)(PlayGamesPlatform*, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x17014CC))(this, callback);
	}
	template <typename R = GooglePlayGamesBasicApi::LoadFriendsStatus> R GetLastLoadFriendsStatus() {
		return ((R (*)(PlayGamesPlatform*))(Il2CppBase() + 0x17016B8))(this);
	}
	template <typename R = void> R LoadFriends_1(int32_t pageSize, bool forceReload, Action1<GooglePlayGamesBasicApi::LoadFriendsStatus>* callback) {
		return ((R (*)(PlayGamesPlatform*, int32_t, bool, Action1<GooglePlayGamesBasicApi::LoadFriendsStatus>*))(Il2CppBase() + 0x17017D0))(this, pageSize, forceReload, callback);
	}
	template <typename R = void> R LoadMoreFriends(int32_t pageSize, Action1<GooglePlayGamesBasicApi::LoadFriendsStatus>* callback) {
		return ((R (*)(PlayGamesPlatform*, int32_t, Action1<GooglePlayGamesBasicApi::LoadFriendsStatus>*))(Il2CppBase() + 0x1701960))(this, pageSize, callback);
	}
	template <typename R = void> R HandleLoadingScores(GooglePlayGames::PlayGamesLeaderboard* board, GooglePlayGamesBasicApi::LeaderboardScoreData* scoreData, Action1<bool>* callback) {
		return ((R (*)(PlayGamesPlatform*, GooglePlayGames::PlayGamesLeaderboard*, GooglePlayGamesBasicApi::LeaderboardScoreData*, Action1<bool>*))(Il2CppBase() + 0x1701ADC))(this, board, scoreData, callback);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R GetFriends() {
		return ((R (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FC3A8))(this);
	}
	template <typename R = Il2CppString*> R MapId(Il2CppString* id) {
		return ((R (*)(PlayGamesPlatform*, Il2CppString*))(Il2CppBase() + 0x16FEE7C))(this, id);
	}
	template <typename R = void> static R InvokeCallbackOnGameThread(Action1<uintptr_t>* callback, uintptr_t data) {
		return ((R (*)(void *, Action1<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(0, callback, data);
	}
	 static Action1<uintptr_t>* ToOnGameThread(Action1<uintptr_t>* toConvert) {
		return ((Action1<uintptr_t>* (*)(void *, Action1<uintptr_t>*))(Il2CppBase() + 0x0))(0, toConvert);
	}

};

}
