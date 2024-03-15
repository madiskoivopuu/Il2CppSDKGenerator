#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesAndroid {

class AndroidHelperFragment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesAndroid", "AndroidHelperFragment"));
	}

	template <typename R = Il2CppString*> static R& HelperFragmentClass() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = uintptr_t> static R GetActivity() {
		return ((R (*)(void *))(Il2CppBase() + 0x12B1CF0))(0);
	}
	template <typename R = uintptr_t> static R GetDefaultPopupView() {
		return ((R (*)(void *))(Il2CppBase() + 0x12B2DB4))(0);
	}
	template <typename R = void> static R ShowAchievementsUI(Action1<GooglePlayGamesBasicApi::UIStatus>* cb) {
		return ((R (*)(void *, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x12ADB54))(0, cb);
	}
	template <typename R = void> static R ShowCaptureOverlayUI() {
		return ((R (*)(void *))(Il2CppBase() + 0x12B3094))(0);
	}
	template <typename R = void> static R ShowAllLeaderboardsUI(Action1<GooglePlayGamesBasicApi::UIStatus>* cb) {
		return ((R (*)(void *, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x12AE048))(0, cb);
	}
	template <typename R = void> static R ShowLeaderboardUI(Il2CppString* leaderboardId, GooglePlayGamesBasicApi::LeaderboardTimeSpan timeSpan, Action1<GooglePlayGamesBasicApi::UIStatus>* cb) {
		return ((R (*)(void *, Il2CppString*, GooglePlayGamesBasicApi::LeaderboardTimeSpan, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x12AE448))(0, leaderboardId, timeSpan, cb);
	}
	template <typename R = void> static R ShowCompareProfileWithAlternativeNameHintsUI(Il2CppString* playerId, Il2CppString* otherPlayerInGameName, Il2CppString* currentPlayerInGameName, Action1<GooglePlayGamesBasicApi::UIStatus>* cb) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x12AAE10))(0, playerId, otherPlayerInGameName, currentPlayerInGameName, cb);
	}
	template <typename R = void> static R IsResolutionRequired(uintptr_t friendsSharingConsentException, Action1<bool>* cb) {
		return ((R (*)(void *, uintptr_t, Action1<bool>*))(Il2CppBase() + 0x12B3294))(0, friendsSharingConsentException, cb);
	}
	template <typename R = void> static R AskForLoadFriendsResolution(uintptr_t friendsSharingConsentException, Action1<GooglePlayGamesBasicApi::UIStatus>* cb) {
		return ((R (*)(void *, uintptr_t, Action1<GooglePlayGamesBasicApi::UIStatus>*))(Il2CppBase() + 0x12AA84C))(0, friendsSharingConsentException, cb);
	}
	template <typename R = void> static R ShowSelectSnapshotUI(bool showCreateSaveUI, bool showDeleteSaveUI, int32_t maxDisplayedSavedGames, Il2CppString* uiTitle, Action2<GooglePlayGamesBasicApiSavedGame::SelectUIStatus, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>* cb) {
		return ((R (*)(void *, bool, bool, int32_t, Il2CppString*, Action2<GooglePlayGamesBasicApiSavedGame::SelectUIStatus, GooglePlayGamesBasicApiSavedGame::ISavedGameMetadata*>*))(Il2CppBase() + 0x12B34E4))(0, showCreateSaveUI, showDeleteSaveUI, maxDisplayedSavedGames, uiTitle, cb);
	}

};

}
