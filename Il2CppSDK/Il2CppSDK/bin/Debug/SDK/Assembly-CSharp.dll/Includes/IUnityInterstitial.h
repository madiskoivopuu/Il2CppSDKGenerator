#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityInterstitial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityInterstitial"));
	}


	template <typename T = void> T add_OnInterstitialAdShowFailed(void* value) {
		return ((T (*)(IUnityInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdShowFailed(void* value) {
		return ((T (*)(IUnityInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdLoadFailed(void* value) {
		return ((T (*)(IUnityInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdLoadFailed(void* value) {
		return ((T (*)(IUnityInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
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
	template <typename T = void> T add_OnInterstitialAdReadyDemandOnly(void* value) {
		return ((T (*)(IUnityInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdReadyDemandOnly(void* value) {
		return ((T (*)(IUnityInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdOpenedDemandOnly(void* value) {
		return ((T (*)(IUnityInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdOpenedDemandOnly(void* value) {
		return ((T (*)(IUnityInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdClosedDemandOnly(void* value) {
		return ((T (*)(IUnityInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdClosedDemandOnly(void* value) {
		return ((T (*)(IUnityInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdLoadFailedDemandOnly(void* value) {
		return ((T (*)(IUnityInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdLoadFailedDemandOnly(void* value) {
		return ((T (*)(IUnityInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdClickedDemandOnly(void* value) {
		return ((T (*)(IUnityInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdClickedDemandOnly(void* value) {
		return ((T (*)(IUnityInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdShowFailedDemandOnly(void* value) {
		return ((T (*)(IUnityInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdShowFailedDemandOnly(void* value) {
		return ((T (*)(IUnityInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}

};

}
