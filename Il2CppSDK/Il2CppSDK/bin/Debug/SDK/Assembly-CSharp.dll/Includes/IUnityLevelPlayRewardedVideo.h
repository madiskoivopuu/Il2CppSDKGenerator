#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityLevelPlayRewardedVideo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityLevelPlayRewardedVideo"));
	}


	template <typename R = void> R add_OnAdShowFailed(Action2IronSourceError*, IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action2IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdShowFailed(Action2IronSourceError*, IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action2IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdOpened(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdOpened(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdClosed(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdClosed(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdRewarded(Action2IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action2IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdRewarded(Action2IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action2IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdClicked(Action2IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action2IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdClicked(Action2IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action2IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdAvailable(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdAvailable(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdUnavailable(uintptr_t value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdUnavailable(uintptr_t value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}

};

