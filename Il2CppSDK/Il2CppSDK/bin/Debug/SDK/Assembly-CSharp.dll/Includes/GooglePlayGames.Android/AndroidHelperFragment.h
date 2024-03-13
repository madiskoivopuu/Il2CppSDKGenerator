#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesAndroid {

class AndroidHelperFragment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesAndroid", "AndroidHelperFragment"));
	}

	template <typename T = Il2CppString*> static T& HelperFragmentClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T GetActivity() {
		return ((T (*)(void *))(Il2CppBase() + 0x12B1CF0))(0);
	}
	template <typename T = uintptr_t> static T GetDefaultPopupView() {
		return ((T (*)(void *))(Il2CppBase() + 0x12B2DB4))(0);
	}
	template <typename T = void> static T ShowAchievementsUI(Action1UIStatus*>* cb) {
		return ((T (*)(void *, Action1UIStatus*>*))(Il2CppBase() + 0x12ADB54))(0, cb);
	}
	template <typename T = void> static T ShowCaptureOverlayUI() {
		return ((T (*)(void *))(Il2CppBase() + 0x12B3094))(0);
	}
	template <typename T = void> static T ShowAllLeaderboardsUI(Action1UIStatus*>* cb) {
		return ((T (*)(void *, Action1UIStatus*>*))(Il2CppBase() + 0x12AE048))(0, cb);
	}
	template <typename T = void> static T ShowLeaderboardUI(Il2CppString* leaderboardId, LeaderboardTimeSpan* timeSpan, Action1UIStatus*>* cb) {
		return ((T (*)(void *, Il2CppString*, LeaderboardTimeSpan*, Action1UIStatus*>*))(Il2CppBase() + 0x12AE448))(0, leaderboardId, timeSpan, cb);
	}
	template <typename T = void> static T ShowCompareProfileWithAlternativeNameHintsUI(Il2CppString* playerId, Il2CppString* otherPlayerInGameName, Il2CppString* currentPlayerInGameName, Action1UIStatus*>* cb) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Action1UIStatus*>*))(Il2CppBase() + 0x12AAE10))(0, playerId, otherPlayerInGameName, currentPlayerInGameName, cb);
	}
	template <typename T = void> static T IsResolutionRequired(uintptr_t friendsSharingConsentException, Action1bool>* cb) {
		return ((T (*)(void *, uintptr_t, Action1bool>*))(Il2CppBase() + 0x12B3294))(0, friendsSharingConsentException, cb);
	}
	template <typename T = void> static T AskForLoadFriendsResolution(uintptr_t friendsSharingConsentException, Action1UIStatus*>* cb) {
		return ((T (*)(void *, uintptr_t, Action1UIStatus*>*))(Il2CppBase() + 0x12AA84C))(0, friendsSharingConsentException, cb);
	}
	template <typename T = void> static T ShowSelectSnapshotUI(bool showCreateSaveUI, bool showDeleteSaveUI, int32_t maxDisplayedSavedGames, Il2CppString* uiTitle, Action2SelectUIStatus*, ISavedGameMetadata*>* cb) {
		return ((T (*)(void *, bool, bool, int32_t, Il2CppString*, Action2SelectUIStatus*, ISavedGameMetadata*>*))(Il2CppBase() + 0x12B34E4))(0, showCreateSaveUI, showDeleteSaveUI, maxDisplayedSavedGames, uiTitle, cb);
	}

};

}
