#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGames {

class PlayGamesPlatform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "PlayGamesPlatform"));
	}

	template <typename T = uintptr_t> static T& sInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& sNearbyInitializePending() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& sNearbyConnectionClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> T& mConfiguration() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mLocalUser() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mClient() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& mDefaultLbUi() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& mIdMap() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = bool> static T get_DebugLogEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x16FD454))(0);
	}
	template <typename T = void> static T set_DebugLogEnabled(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x16FD4F0))(0, value);
	}
	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x16F924C))(0);
	}
	template <typename T = uintptr_t> static T get_Nearby() {
		return ((T (*)(void *))(Il2CppBase() + 0x16FD74C))(0);
	}
	template <typename T = uintptr_t> T get_SavedGame() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FDA98))(this);
	}
	template <typename T = uintptr_t> T get_Events() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FDB48))(this);
	}
	template <typename T = uintptr_t> T get_Video() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FDBF8))(this);
	}
	template <typename T = uintptr_t> T get_localUser() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FDCA8))(this);
	}
	template <typename T = void> static T InitializeInstance(uintptr_t configuration) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16FD59C))(0, configuration);
	}
	template <typename T = void> static T InitializeNearby(void* callback) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x16FD844))(0, callback);
	}
	template <typename T = uintptr_t> static T Activate() {
		return ((T (*)(void *))(Il2CppBase() + 0x16FDCB0))(0);
	}
	template <typename T = void> T SetGravityForPopups(uintptr_t gravity) {
		return ((T (*)(PlayGamesPlatform*, uintptr_t))(Il2CppBase() + 0x16FDDF4))(this, gravity);
	}
	template <typename T = void> T AddIdMapping(Il2CppString* fromId, Il2CppString* toId) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16FDEB4))(this, fromId, toId);
	}
	template <typename T = void> T Authenticate(void* callback) {
		return ((T (*)(PlayGamesPlatform*, void*))(Il2CppBase() + 0x16FBFE4))(this, callback);
	}
	template <typename T = void> T Authenticate_1(void* callback) {
		return ((T (*)(PlayGamesPlatform*, void*))(Il2CppBase() + 0x16FC008))(this, callback);
	}
	template <typename T = void> T Authenticate_2(void* callback, bool silent) {
		return ((T (*)(PlayGamesPlatform*, void*, bool))(Il2CppBase() + 0x16FC02C))(this, callback, silent);
	}
	template <typename T = void> T Authenticate_3(void* callback, bool silent) {
		return ((T (*)(PlayGamesPlatform*, void*, bool))(Il2CppBase() + 0x16FC12C))(this, callback, silent);
	}
	template <typename T = void> T Authenticate_4(uintptr_t signInInteractivity, void* callback) {
		return ((T (*)(PlayGamesPlatform*, uintptr_t, void*))(Il2CppBase() + 0x16FDF20))(this, signInInteractivity, callback);
	}
	template <typename T = void> T Authenticate_5(uintptr_t unused, void* callback) {
		return ((T (*)(PlayGamesPlatform*, uintptr_t, void*))(Il2CppBase() + 0x16FE3C8))(this, unused, callback);
	}
	template <typename T = void> T Authenticate_6(uintptr_t unused, void* callback) {
		return ((T (*)(PlayGamesPlatform*, uintptr_t, void*))(Il2CppBase() + 0x16FE3D4))(this, unused, callback);
	}
	template <typename T = bool> T IsAuthenticated() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FC610))(this);
	}
	template <typename T = void> T SignOut() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FE3E0))(this);
	}
	template <typename T = void> T LoadUsers(Il2CppArray<uintptr_t>* userIds, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x16FE4C4))(this, userIds, callback);
	}
	template <typename T = Il2CppString*> T GetUserId() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FC8D8))(this);
	}
	template <typename T = Il2CppString*> T GetIdToken() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FC4F0))(this);
	}
	template <typename T = Il2CppString*> T GetServerAuthCode() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FE638))(this);
	}
	template <typename T = void> T GetAnotherServerAuthCode(bool reAuthenticateIfNeeded, void* callback) {
		return ((T (*)(PlayGamesPlatform*, bool, void*))(Il2CppBase() + 0x16FE774))(this, reAuthenticateIfNeeded, callback);
	}
	template <typename T = Il2CppString*> T GetUserEmail() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FCE24))(this);
	}
	template <typename T = void> T GetPlayerStats(void* callback) {
		return ((T (*)(PlayGamesPlatform*, void*))(Il2CppBase() + 0x16FD010))(this, callback);
	}
	template <typename T = Il2CppString*> T GetUserDisplayName() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FC7A4))(this);
	}
	template <typename T = Il2CppString*> T GetUserImageUrl() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FCA04))(this);
	}
	template <typename T = void> T ReportProgress(Il2CppString* achievementID, double progress, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, double, void*))(Il2CppBase() + 0x16FEA54))(this, achievementID, progress, callback);
	}
	template <typename T = int32_t> static T progressToSteps(double progress, int32_t totalSteps) {
		return ((T (*)(void *, double, int32_t))(Il2CppBase() + 0x16FEFA4))(0, progress, totalSteps);
	}
	template <typename T = void> T RevealAchievement(Il2CppString* achievementID, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, void*))(Il2CppBase() + 0x16FEFDC))(this, achievementID, callback);
	}
	template <typename T = void> T UnlockAchievement(Il2CppString* achievementID, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, void*))(Il2CppBase() + 0x16FF1A8))(this, achievementID, callback);
	}
	template <typename T = void> T IncrementAchievement(Il2CppString* achievementID, int32_t steps, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x16FF374))(this, achievementID, steps, callback);
	}
	template <typename T = void> T SetStepsAtLeast(Il2CppString* achievementID, int32_t steps, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x16FF578))(this, achievementID, steps, callback);
	}
	template <typename T = void> T LoadAchievementDescriptions(void* callback) {
		return ((T (*)(PlayGamesPlatform*, void*))(Il2CppBase() + 0x16FF77C))(this, callback);
	}
	template <typename T = void> T LoadAchievements(void* callback) {
		return ((T (*)(PlayGamesPlatform*, void*))(Il2CppBase() + 0x16FF970))(this, callback);
	}
	template <typename T = uintptr_t> T CreateAchievement() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FFB54))(this);
	}
	template <typename T = void> T ReportScore(int64_t score, Il2CppString* board, void* callback) {
		return ((T (*)(PlayGamesPlatform*, int64_t, Il2CppString*, void*))(Il2CppBase() + 0x16FFBA8))(this, score, board, callback);
	}
	template <typename T = void> T ReportScore_1(int64_t score, Il2CppString* board, Il2CppString* metadata, void* callback) {
		return ((T (*)(PlayGamesPlatform*, int64_t, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x16FFDAC))(this, score, board, metadata, callback);
	}
	template <typename T = void> T LoadScores(Il2CppString* leaderboardId, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, void*))(Il2CppBase() + 0x1700158))(this, leaderboardId, callback);
	}
	template <typename T = void> T LoadScores_1(Il2CppString* leaderboardId, uintptr_t start, int32_t rowCount, uintptr_t collection, uintptr_t timeSpan, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, uintptr_t, int32_t, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x17002DC))(this, leaderboardId, start, rowCount, collection, timeSpan, callback);
	}
	template <typename T = void> T LoadMoreScores(uintptr_t token, int32_t rowCount, void* callback) {
		return ((T (*)(PlayGamesPlatform*, uintptr_t, int32_t, void*))(Il2CppBase() + 0x1700498))(this, token, rowCount, callback);
	}
	template <typename T = uintptr_t> T CreateLeaderboard() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x1700638))(this);
	}
	template <typename T = void> T ShowAchievementsUI() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x1700698))(this);
	}
	template <typename T = void> T ShowAchievementsUI_1(void* callback) {
		return ((T (*)(PlayGamesPlatform*, void*))(Il2CppBase() + 0x17006A0))(this, callback);
	}
	template <typename T = void> T ShowLeaderboardUI() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x170083C))(this);
	}
	template <typename T = void> T ShowLeaderboardUI_1(Il2CppString* leaderboardId) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*))(Il2CppBase() + 0x17008E0))(this, leaderboardId);
	}
	template <typename T = void> T ShowLeaderboardUI_2(Il2CppString* leaderboardId, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, void*))(Il2CppBase() + 0x17008D4))(this, leaderboardId, callback);
	}
	template <typename T = void> T ShowLeaderboardUI_3(Il2CppString* leaderboardId, uintptr_t span, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x1700918))(this, leaderboardId, span, callback);
	}
	template <typename T = void> T SetDefaultLeaderboardForUI(Il2CppString* lbid) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*))(Il2CppBase() + 0x1700B2C))(this, lbid);
	}
	template <typename T = void> T LoadFriends(uintptr_t user, void* callback) {
		return ((T (*)(PlayGamesPlatform*, uintptr_t, void*))(Il2CppBase() + 0x16FC234))(this, user, callback);
	}
	template <typename T = void> T LoadScores_2(uintptr_t board, void* callback) {
		return ((T (*)(PlayGamesPlatform*, uintptr_t, void*))(Il2CppBase() + 0x16FB364))(this, board, callback);
	}
	template <typename T = void> T RequestPermission(Il2CppString* scope, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, void*))(Il2CppBase() + 0x1700BF0))(this, scope, callback);
	}
	template <typename T = void> T RequestPermissions(Il2CppArray<uintptr_t>* scopes, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x1700CB0))(this, scopes, callback);
	}
	template <typename T = bool> T HasPermission(Il2CppString* scope) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*))(Il2CppBase() + 0x1700E04))(this, scope);
	}
	template <typename T = bool> T HasPermissions(Il2CppArray<uintptr_t>* scopes) {
		return ((T (*)(PlayGamesPlatform*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1700EBC))(this, scopes);
	}
	template <typename T = bool> T GetLoading(uintptr_t board) {
		return ((T (*)(PlayGamesPlatform*, uintptr_t))(Il2CppBase() + 0x1700FE8))(this, board);
	}
	template <typename T = void> T ShowCompareProfileWithAlternativeNameHintsUI(Il2CppString* userId, Il2CppString* otherPlayerInGameName, Il2CppString* currentPlayerInGameName, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x170109C))(this, userId, otherPlayerInGameName, currentPlayerInGameName, callback);
	}
	template <typename T = void> T GetFriendsListVisibility(bool forceReload, void* callback) {
		return ((T (*)(PlayGamesPlatform*, bool, void*))(Il2CppBase() + 0x17012D8))(this, forceReload, callback);
	}
	template <typename T = void> T AskForLoadFriendsResolution(void* callback) {
		return ((T (*)(PlayGamesPlatform*, void*))(Il2CppBase() + 0x17014CC))(this, callback);
	}
	template <typename T = uintptr_t> T GetLastLoadFriendsStatus() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x17016B8))(this);
	}
	template <typename T = void> T LoadFriends_1(int32_t pageSize, bool forceReload, void* callback) {
		return ((T (*)(PlayGamesPlatform*, int32_t, bool, void*))(Il2CppBase() + 0x17017D0))(this, pageSize, forceReload, callback);
	}
	template <typename T = void> T LoadMoreFriends(int32_t pageSize, void* callback) {
		return ((T (*)(PlayGamesPlatform*, int32_t, void*))(Il2CppBase() + 0x1701960))(this, pageSize, callback);
	}
	template <typename T = void> T HandleLoadingScores(uintptr_t board, uintptr_t scoreData, void* callback) {
		return ((T (*)(PlayGamesPlatform*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x1701ADC))(this, board, scoreData, callback);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFriends() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x16FC3A8))(this);
	}
	template <typename T = Il2CppString*> T MapId(Il2CppString* id) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*))(Il2CppBase() + 0x16FEE7C))(this, id);
	}
	template <typename T = void> static T InvokeCallbackOnGameThread(void* callback, uintptr_t data) {
		return ((T (*)(void *, void*, uintptr_t))(Il2CppBase() + 0x0))(0, callback, data);
	}
	template <typename T = void*> static T ToOnGameThread(void* toConvert) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, toConvert);
	}

};

}
