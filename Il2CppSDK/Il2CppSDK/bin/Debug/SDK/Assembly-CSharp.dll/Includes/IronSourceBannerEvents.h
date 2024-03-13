#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceBannerEvents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceBannerEvents"));
	}

	template <typename T = Action1IronSourceAdInfo*>*> static T& onAdLoadedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Action1IronSourceAdInfo*>*> static T& onAdLeftApplicationEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Action1IronSourceAdInfo*>*> static T& onAdScreenDismissedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Action1IronSourceAdInfo*>*> static T& onAdScreenPresentedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Action1IronSourceAdInfo*>*> static T& onAdClickedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Action1IronSourceError*>*> static T& onAdLoadFailedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IUnityLevelPlayBanner*> T& LevelPlaybannerAndroid() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> static T add_onAdLoadedEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x124D7C0))(0, value);
	}
	template <typename T = void> static T remove_onAdLoadedEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x124D87C))(0, value);
	}
	template <typename T = void> static T add_onAdLeftApplicationEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x124D938))(0, value);
	}
	template <typename T = void> static T remove_onAdLeftApplicationEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x124D9F8))(0, value);
	}
	template <typename T = void> static T add_onAdScreenDismissedEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x124DAB8))(0, value);
	}
	template <typename T = void> static T remove_onAdScreenDismissedEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x124DB78))(0, value);
	}
	template <typename T = void> static T add_onAdScreenPresentedEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x124DC38))(0, value);
	}
	template <typename T = void> static T remove_onAdScreenPresentedEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x124DCF8))(0, value);
	}
	template <typename T = void> static T add_onAdClickedEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x124DDB8))(0, value);
	}
	template <typename T = void> static T remove_onAdClickedEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x124DE78))(0, value);
	}
	template <typename T = void> static T add_onAdLoadFailedEvent(Action1IronSourceError*>* value) {
		return ((T (*)(void *, Action1IronSourceError*>*))(Il2CppBase() + 0x124DF38))(0, value);
	}
	template <typename T = void> static T remove_onAdLoadFailedEvent(Action1IronSourceError*>* value) {
		return ((T (*)(void *, Action1IronSourceError*>*))(Il2CppBase() + 0x124DFF8))(0, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(IronSourceBannerEvents*))(Il2CppBase() + 0x124E0B8))(this);
	}
	template <typename T = void> T registerBannerEvents() {
		return ((T (*)(IronSourceBannerEvents*))(Il2CppBase() + 0x124EA28))(this);
	}
	template <typename T = IronSourceError*> T getErrorFromErrorObject(Il2CppObject* descriptionObject) {
		return ((T (*)(IronSourceBannerEvents*, Il2CppObject*))(Il2CppBase() + 0x124F104))(this, descriptionObject);
	}
	template <typename T = IronSourcePlacement*> T getPlacementFromObject(Il2CppObject* placementObject) {
		return ((T (*)(IronSourceBannerEvents*, Il2CppObject*))(Il2CppBase() + 0x124F404))(this, placementObject);
	}

};

