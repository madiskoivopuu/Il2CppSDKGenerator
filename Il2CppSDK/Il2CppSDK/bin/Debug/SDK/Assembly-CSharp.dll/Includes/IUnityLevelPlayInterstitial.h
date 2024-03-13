#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityLevelPlayInterstitial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityLevelPlayInterstitial"));
	}


	template <typename T = void> T add_OnAdShowFailed(Action2IronSourceError*, IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, Action2IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdShowFailed(Action2IronSourceError*, IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, Action2IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdLoadFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdLoadFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdReady(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdReady(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdOpened(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdOpened(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdClosed(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdClosed(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdShowSucceeded(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdShowSucceeded(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdClicked(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdClicked(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}

};

