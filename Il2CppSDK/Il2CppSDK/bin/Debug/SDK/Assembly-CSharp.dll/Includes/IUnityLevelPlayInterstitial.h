#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityLevelPlayInterstitial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityLevelPlayInterstitial"));
	}


	template <typename R = void> R add_OnAdShowFailed(Action2<IronSourceError*, IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action2<IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdShowFailed(Action2<IronSourceError*, IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action2<IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdLoadFailed(Action1<IronSourceError*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1<IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdLoadFailed(Action1<IronSourceError*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1<IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdReady(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdReady(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdOpened(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdOpened(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdClosed(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdClosed(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdShowSucceeded(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdShowSucceeded(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdClicked(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdClicked(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayInterstitial*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}

};

