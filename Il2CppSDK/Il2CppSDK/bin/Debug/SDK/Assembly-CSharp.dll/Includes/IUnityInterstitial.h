#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityInterstitial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityInterstitial"));
	}


	template <typename R = void> R add_OnInterstitialAdShowFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IUnityInterstitial*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdShowFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IUnityInterstitial*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdLoadFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IUnityInterstitial*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdLoadFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IUnityInterstitial*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdReady(uintptr_t value) {
		return ((R (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdReady(uintptr_t value) {
		return ((R (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdOpened(uintptr_t value) {
		return ((R (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdOpened(uintptr_t value) {
		return ((R (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdClosed(uintptr_t value) {
		return ((R (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdClosed(uintptr_t value) {
		return ((R (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdShowSucceeded(uintptr_t value) {
		return ((R (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdShowSucceeded(uintptr_t value) {
		return ((R (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdClicked(uintptr_t value) {
		return ((R (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdClicked(uintptr_t value) {
		return ((R (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdRewarded(uintptr_t value) {
		return ((R (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdRewarded(uintptr_t value) {
		return ((R (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdReadyDemandOnly(Action1Il2CppString*>* value) {
		return ((R (*)(IUnityInterstitial*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdReadyDemandOnly(Action1Il2CppString*>* value) {
		return ((R (*)(IUnityInterstitial*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdOpenedDemandOnly(Action1Il2CppString*>* value) {
		return ((R (*)(IUnityInterstitial*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdOpenedDemandOnly(Action1Il2CppString*>* value) {
		return ((R (*)(IUnityInterstitial*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdClosedDemandOnly(Action1Il2CppString*>* value) {
		return ((R (*)(IUnityInterstitial*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdClosedDemandOnly(Action1Il2CppString*>* value) {
		return ((R (*)(IUnityInterstitial*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdLoadFailedDemandOnly(Action2Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(IUnityInterstitial*, Action2Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdLoadFailedDemandOnly(Action2Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(IUnityInterstitial*, Action2Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdClickedDemandOnly(Action1Il2CppString*>* value) {
		return ((R (*)(IUnityInterstitial*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdClickedDemandOnly(Action1Il2CppString*>* value) {
		return ((R (*)(IUnityInterstitial*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdShowFailedDemandOnly(Action2Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(IUnityInterstitial*, Action2Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdShowFailedDemandOnly(Action2Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(IUnityInterstitial*, Action2Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}

};

