#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityLevelPlayBanner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityLevelPlayBanner"));
	}


	template <typename R = void> R add_OnAdLoaded(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdLoaded(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdLeftApplication(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdLeftApplication(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdScreenDismissed(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdScreenDismissed(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdScreenPresented(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdScreenPresented(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdClicked(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdClicked(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdLoadFailed(Action1<IronSourceError*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1<IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdLoadFailed(Action1<IronSourceError*>* value) {
		return ((R (*)(IUnityLevelPlayBanner*, Action1<IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}

};

