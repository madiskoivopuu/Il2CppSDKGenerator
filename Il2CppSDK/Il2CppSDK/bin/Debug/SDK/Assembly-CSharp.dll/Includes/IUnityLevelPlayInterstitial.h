#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityLevelPlayInterstitial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityLevelPlayInterstitial"));
	}


	template <typename R = void> R add_OnAdShowFailed(Action2IronSourceError*, IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action2IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdShowFailed(Action2IronSourceError*, IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action2IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdLoadFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdLoadFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdReady(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdReady(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdOpened(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdOpened(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdClosed(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdClosed(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdShowSucceeded(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdShowSucceeded(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdClicked(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdClicked(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}

};

