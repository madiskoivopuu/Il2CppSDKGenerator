#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityLevelPlayBanner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityLevelPlayBanner"));
	}


	template <typename T = void> T add_OnAdLoaded(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayBanner*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdLoaded(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayBanner*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdLeftApplication(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayBanner*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdLeftApplication(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayBanner*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdScreenDismissed(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayBanner*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdScreenDismissed(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayBanner*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdScreenPresented(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayBanner*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdScreenPresented(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayBanner*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdClicked(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayBanner*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdClicked(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IUnityLevelPlayBanner*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdLoadFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IUnityLevelPlayBanner*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdLoadFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IUnityLevelPlayBanner*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}

};

