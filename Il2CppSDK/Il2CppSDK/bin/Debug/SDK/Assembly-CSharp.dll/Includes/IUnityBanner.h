#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityBanner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityBanner"));
	}


	template <typename T = void> T add_OnBannerAdLoaded(uintptr_t value) {
		return ((T (*)(IUnityBanner*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnBannerAdLoaded(uintptr_t value) {
		return ((T (*)(IUnityBanner*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnBannerAdLeftApplication(uintptr_t value) {
		return ((T (*)(IUnityBanner*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnBannerAdLeftApplication(uintptr_t value) {
		return ((T (*)(IUnityBanner*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnBannerAdScreenDismissed(uintptr_t value) {
		return ((T (*)(IUnityBanner*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnBannerAdScreenDismissed(uintptr_t value) {
		return ((T (*)(IUnityBanner*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnBannerAdScreenPresented(uintptr_t value) {
		return ((T (*)(IUnityBanner*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnBannerAdScreenPresented(uintptr_t value) {
		return ((T (*)(IUnityBanner*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnBannerAdClicked(uintptr_t value) {
		return ((T (*)(IUnityBanner*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnBannerAdClicked(uintptr_t value) {
		return ((T (*)(IUnityBanner*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnBannerAdLoadFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IUnityBanner*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnBannerAdLoadFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IUnityBanner*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}

};

