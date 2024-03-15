#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceBannerEvents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceBannerEvents"));
	}

	 static Action1<IronSourceAdInfo*>*& onAdLoadedEvent() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Action1<IronSourceAdInfo*>*& onAdLeftApplicationEvent() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static Action1<IronSourceAdInfo*>*& onAdScreenDismissedEvent() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static Action1<IronSourceAdInfo*>*& onAdScreenPresentedEvent() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static Action1<IronSourceAdInfo*>*& onAdClickedEvent() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static Action1<IronSourceError*>*& onAdLoadFailedEvent() {
		return *(Action1<IronSourceError*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = IUnityLevelPlayBanner*> R& LevelPlaybannerAndroid() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> static R add_onAdLoadedEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x124D7C0))(0, value);
	}
	template <typename R = void> static R remove_onAdLoadedEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x124D87C))(0, value);
	}
	template <typename R = void> static R add_onAdLeftApplicationEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x124D938))(0, value);
	}
	template <typename R = void> static R remove_onAdLeftApplicationEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x124D9F8))(0, value);
	}
	template <typename R = void> static R add_onAdScreenDismissedEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x124DAB8))(0, value);
	}
	template <typename R = void> static R remove_onAdScreenDismissedEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x124DB78))(0, value);
	}
	template <typename R = void> static R add_onAdScreenPresentedEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x124DC38))(0, value);
	}
	template <typename R = void> static R remove_onAdScreenPresentedEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x124DCF8))(0, value);
	}
	template <typename R = void> static R add_onAdClickedEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x124DDB8))(0, value);
	}
	template <typename R = void> static R remove_onAdClickedEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x124DE78))(0, value);
	}
	template <typename R = void> static R add_onAdLoadFailedEvent(Action1<IronSourceError*>* value) {
		return ((R (*)(void *, Action1<IronSourceError*>*))(Il2CppBase() + 0x124DF38))(0, value);
	}
	template <typename R = void> static R remove_onAdLoadFailedEvent(Action1<IronSourceError*>* value) {
		return ((R (*)(void *, Action1<IronSourceError*>*))(Il2CppBase() + 0x124DFF8))(0, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(IronSourceBannerEvents*))(Il2CppBase() + 0x124E0B8))(this);
	}
	template <typename R = void> R registerBannerEvents() {
		return ((R (*)(IronSourceBannerEvents*))(Il2CppBase() + 0x124EA28))(this);
	}
	template <typename R = IronSourceError*> R getErrorFromErrorObject(Il2CppObject* descriptionObject) {
		return ((R (*)(IronSourceBannerEvents*, Il2CppObject*))(Il2CppBase() + 0x124F104))(this, descriptionObject);
	}
	template <typename R = IronSourcePlacement*> R getPlacementFromObject(Il2CppObject* placementObject) {
		return ((R (*)(IronSourceBannerEvents*, Il2CppObject*))(Il2CppBase() + 0x124F404))(this, placementObject);
	}

};

