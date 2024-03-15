#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityLevelPlayBanner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityLevelPlayBanner"));
	}


	template <typename R = void> R add_OnAdLoaded(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdLoaded(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdLeftApplication(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdLeftApplication(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdScreenDismissed(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdScreenDismissed(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdScreenPresented(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdScreenPresented(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdClicked(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdClicked(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdLoadFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdLoadFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}

};

