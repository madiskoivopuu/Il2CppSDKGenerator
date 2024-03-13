#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityLevelPlayRewardedVideo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityLevelPlayRewardedVideo"));
	}


	template <typename T = void> T add_OnAdShowFailed(Action2IronSourceError*, IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayRewardedVideo*, Action2IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdShowFailed(Action2IronSourceError*, IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayRewardedVideo*, Action2IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdOpened(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayRewardedVideo*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdOpened(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayRewardedVideo*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdClosed(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayRewardedVideo*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdClosed(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayRewardedVideo*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdRewarded(Action2IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayRewardedVideo*, Action2IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdRewarded(Action2IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayRewardedVideo*, Action2IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdClicked(Action2IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayRewardedVideo*, Action2IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdClicked(Action2IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayRewardedVideo*, Action2IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdAvailable(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayRewardedVideo*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdAvailable(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayRewardedVideo*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdUnavailable(uintptr_t value) {
		return ((T (*)(IUnityLevelPlayRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdUnavailable(uintptr_t value) {
		return ((T (*)(IUnityLevelPlayRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}

};

