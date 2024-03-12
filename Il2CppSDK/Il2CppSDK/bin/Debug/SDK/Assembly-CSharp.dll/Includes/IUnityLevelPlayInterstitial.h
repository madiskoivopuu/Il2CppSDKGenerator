#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityLevelPlayInterstitial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityLevelPlayInterstitial"));
	}


	template <typename T = void> T add_OnAdShowFailed(void* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdShowFailed(void* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdLoadFailed(void* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdLoadFailed(void* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdReady(void* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdReady(void* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdOpened(void* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdOpened(void* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdClosed(void* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdClosed(void* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdShowSucceeded(void* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdShowSucceeded(void* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdClicked(void* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdClicked(void* value) {
		return ((T (*)(IUnityLevelPlayInterstitial*, void*))(Il2CppBase() + 0x0))(this, value);
	}

};

}
