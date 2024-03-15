#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityBanner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityBanner"));
	}


	template <typename R = void> R add_OnBannerAdLoaded(uintptr_t value) {
		return ((R (*)(IUnityBanner*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnBannerAdLoaded(uintptr_t value) {
		return ((R (*)(IUnityBanner*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnBannerAdLeftApplication(uintptr_t value) {
		return ((R (*)(IUnityBanner*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnBannerAdLeftApplication(uintptr_t value) {
		return ((R (*)(IUnityBanner*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnBannerAdScreenDismissed(uintptr_t value) {
		return ((R (*)(IUnityBanner*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnBannerAdScreenDismissed(uintptr_t value) {
		return ((R (*)(IUnityBanner*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnBannerAdScreenPresented(uintptr_t value) {
		return ((R (*)(IUnityBanner*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnBannerAdScreenPresented(uintptr_t value) {
		return ((R (*)(IUnityBanner*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnBannerAdClicked(uintptr_t value) {
		return ((R (*)(IUnityBanner*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnBannerAdClicked(uintptr_t value) {
		return ((R (*)(IUnityBanner*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnBannerAdLoadFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IUnityBanner*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnBannerAdLoadFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IUnityBanner*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}

};

