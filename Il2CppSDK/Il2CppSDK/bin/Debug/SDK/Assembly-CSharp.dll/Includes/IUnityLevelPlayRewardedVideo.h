#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityLevelPlayRewardedVideo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityLevelPlayRewardedVideo"));
	}


	template <typename R = void> R add_OnAdShowFailed(Action2<IronSourceError*, IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action2<IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdShowFailed(Action2<IronSourceError*, IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action2<IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdOpened(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdOpened(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdClosed(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdClosed(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdRewarded(Action2<IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action2<IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdRewarded(Action2<IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action2<IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdClicked(Action2<IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action2<IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdClicked(Action2<IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action2<IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdAvailable(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdAvailable(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdUnavailable(uintptr_t value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdUnavailable(uintptr_t value) {
		return ((R (*)(IUnityLevelPlayRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}

};

