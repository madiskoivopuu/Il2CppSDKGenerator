#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityInterstitial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityInterstitial"));
	}


	template <typename T = void> T add_OnInterstitialAdShowFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IUnityInterstitial*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdShowFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IUnityInterstitial*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdLoadFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IUnityInterstitial*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdLoadFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IUnityInterstitial*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdReady(uintptr_t value) {
		return ((T (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdReady(uintptr_t value) {
		return ((T (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdOpened(uintptr_t value) {
		return ((T (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdOpened(uintptr_t value) {
		return ((T (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdClosed(uintptr_t value) {
		return ((T (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdClosed(uintptr_t value) {
		return ((T (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdShowSucceeded(uintptr_t value) {
		return ((T (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdShowSucceeded(uintptr_t value) {
		return ((T (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdClicked(uintptr_t value) {
		return ((T (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdClicked(uintptr_t value) {
		return ((T (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdRewarded(uintptr_t value) {
		return ((T (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdRewarded(uintptr_t value) {
		return ((T (*)(IUnityInterstitial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdReadyDemandOnly(Action1Il2CppString*>* value) {
		return ((T (*)(IUnityInterstitial*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdReadyDemandOnly(Action1Il2CppString*>* value) {
		return ((T (*)(IUnityInterstitial*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdOpenedDemandOnly(Action1Il2CppString*>* value) {
		return ((T (*)(IUnityInterstitial*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdOpenedDemandOnly(Action1Il2CppString*>* value) {
		return ((T (*)(IUnityInterstitial*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdClosedDemandOnly(Action1Il2CppString*>* value) {
		return ((T (*)(IUnityInterstitial*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdClosedDemandOnly(Action1Il2CppString*>* value) {
		return ((T (*)(IUnityInterstitial*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdLoadFailedDemandOnly(Action2Il2CppString*, IronSourceError*>* value) {
		return ((T (*)(IUnityInterstitial*, Action2Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdLoadFailedDemandOnly(Action2Il2CppString*, IronSourceError*>* value) {
		return ((T (*)(IUnityInterstitial*, Action2Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdClickedDemandOnly(Action1Il2CppString*>* value) {
		return ((T (*)(IUnityInterstitial*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdClickedDemandOnly(Action1Il2CppString*>* value) {
		return ((T (*)(IUnityInterstitial*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdShowFailedDemandOnly(Action2Il2CppString*, IronSourceError*>* value) {
		return ((T (*)(IUnityInterstitial*, Action2Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdShowFailedDemandOnly(Action2Il2CppString*, IronSourceError*>* value) {
		return ((T (*)(IUnityInterstitial*, Action2Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}

};

