#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceRewardedVideoEvents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceRewardedVideoEvents"));
	}

	 static Action2<IronSourceError*, IronSourceAdInfo*>*& onAdShowFailedEvent() {
		return *(Action2<IronSourceError*, IronSourceAdInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Action1<IronSourceAdInfo*>*& onAdOpenedEvent() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static Action1<IronSourceAdInfo*>*& onAdClosedEvent() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static Action2<IronSourcePlacement*, IronSourceAdInfo*>*& onAdRewardedEvent() {
		return *(Action2<IronSourcePlacement*, IronSourceAdInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static Action2<IronSourcePlacement*, IronSourceAdInfo*>*& onAdClickedEvent() {
		return *(Action2<IronSourcePlacement*, IronSourceAdInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static Action1<IronSourceAdInfo*>*& onAdAvailableEvent() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = uintptr_t> static R& onAdUnavailableEvent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static Action1<IronSourceError*>*& onAdLoadFailedEvent() {
		return *(Action1<IronSourceError*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static Action1<IronSourceAdInfo*>*& onAdReadyEvent() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename R = IUnityLevelPlayRewardedVideo*> R& LevelPlayRewardedVideoAndroid() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = IUnityLevelPlayRewardedVideoManual*> R& LevelPlayRewardedVideoAndroidManual() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> static R add_onAdShowFailedEvent(Action2<IronSourceError*, IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action2<IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E07A8))(0, value);
	}
	template <typename R = void> static R remove_onAdShowFailedEvent(Action2<IronSourceError*, IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action2<IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E0864))(0, value);
	}
	template <typename R = void> static R add_onAdOpenedEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10E0920))(0, value);
	}
	template <typename R = void> static R remove_onAdOpenedEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10E09E0))(0, value);
	}
	template <typename R = void> static R add_onAdClosedEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10E0AA0))(0, value);
	}
	template <typename R = void> static R remove_onAdClosedEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10E0B60))(0, value);
	}
	template <typename R = void> static R add_onAdRewardedEvent(Action2<IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action2<IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E0C20))(0, value);
	}
	template <typename R = void> static R remove_onAdRewardedEvent(Action2<IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action2<IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E0CE0))(0, value);
	}
	template <typename R = void> static R add_onAdClickedEvent(Action2<IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action2<IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E0DA0))(0, value);
	}
	template <typename R = void> static R remove_onAdClickedEvent(Action2<IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action2<IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E0E60))(0, value);
	}
	template <typename R = void> static R add_onAdAvailableEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10E0F20))(0, value);
	}
	template <typename R = void> static R remove_onAdAvailableEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10E0FE0))(0, value);
	}
	template <typename R = void> static R add_onAdUnavailableEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x10E10A0))(0, value);
	}
	template <typename R = void> static R remove_onAdUnavailableEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x10E1160))(0, value);
	}
	template <typename R = void> static R add_onAdLoadFailedEvent(Action1<IronSourceError*>* value) {
		return ((R (*)(void *, Action1<IronSourceError*>*))(Il2CppBase() + 0x10E1220))(0, value);
	}
	template <typename R = void> static R remove_onAdLoadFailedEvent(Action1<IronSourceError*>* value) {
		return ((R (*)(void *, Action1<IronSourceError*>*))(Il2CppBase() + 0x10E12E0))(0, value);
	}
	template <typename R = void> static R add_onAdReadyEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10E13A0))(0, value);
	}
	template <typename R = void> static R remove_onAdReadyEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10E1460))(0, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(IronSourceRewardedVideoEvents*))(Il2CppBase() + 0x10E1520))(this);
	}
	template <typename R = void> R registerRewardedVideoEvents() {
		return ((R (*)(IronSourceRewardedVideoEvents*))(Il2CppBase() + 0x10E1F94))(this);
	}
	template <typename R = void> R registerRewardedVideoManualEvents() {
		return ((R (*)(IronSourceRewardedVideoEvents*))(Il2CppBase() + 0x10E2D70))(this);
	}
	template <typename R = IronSourceError*> R getErrorFromErrorObject(Il2CppObject* descriptionObject) {
		return ((R (*)(IronSourceRewardedVideoEvents*, Il2CppObject*))(Il2CppBase() + 0x10E301C))(this, descriptionObject);
	}
	template <typename R = IronSourcePlacement*> R getPlacementFromObject(Il2CppObject* placementObject) {
		return ((R (*)(IronSourceRewardedVideoEvents*, Il2CppObject*))(Il2CppBase() + 0x10E32B8))(this, placementObject);
	}

};

