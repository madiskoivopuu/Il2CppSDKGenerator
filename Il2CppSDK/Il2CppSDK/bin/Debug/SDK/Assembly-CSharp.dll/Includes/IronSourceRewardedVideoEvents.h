#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceRewardedVideoEvents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceRewardedVideoEvents"));
	}

	template <typename T = Action2IronSourceError*, IronSourceAdInfo*>*> static T& onAdShowFailedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Action1IronSourceAdInfo*>*> static T& onAdOpenedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Action1IronSourceAdInfo*>*> static T& onAdClosedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Action2IronSourcePlacement*, IronSourceAdInfo*>*> static T& onAdRewardedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Action2IronSourcePlacement*, IronSourceAdInfo*>*> static T& onAdClickedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Action1IronSourceAdInfo*>*> static T& onAdAvailableEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& onAdUnavailableEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Action1IronSourceError*>*> static T& onAdLoadFailedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Action1IronSourceAdInfo*>*> static T& onAdReadyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = IUnityLevelPlayRewardedVideo*> T& LevelPlayRewardedVideoAndroid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = IUnityLevelPlayRewardedVideoManual*> T& LevelPlayRewardedVideoAndroidManual() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> static T add_onAdShowFailedEvent(Action2IronSourceError*, IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action2IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E07A8))(0, value);
	}
	template <typename T = void> static T remove_onAdShowFailedEvent(Action2IronSourceError*, IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action2IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E0864))(0, value);
	}
	template <typename T = void> static T add_onAdOpenedEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10E0920))(0, value);
	}
	template <typename T = void> static T remove_onAdOpenedEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10E09E0))(0, value);
	}
	template <typename T = void> static T add_onAdClosedEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10E0AA0))(0, value);
	}
	template <typename T = void> static T remove_onAdClosedEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10E0B60))(0, value);
	}
	template <typename T = void> static T add_onAdRewardedEvent(Action2IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action2IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E0C20))(0, value);
	}
	template <typename T = void> static T remove_onAdRewardedEvent(Action2IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action2IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E0CE0))(0, value);
	}
	template <typename T = void> static T add_onAdClickedEvent(Action2IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action2IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E0DA0))(0, value);
	}
	template <typename T = void> static T remove_onAdClickedEvent(Action2IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action2IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E0E60))(0, value);
	}
	template <typename T = void> static T add_onAdAvailableEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10E0F20))(0, value);
	}
	template <typename T = void> static T remove_onAdAvailableEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10E0FE0))(0, value);
	}
	template <typename T = void> static T add_onAdUnavailableEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x10E10A0))(0, value);
	}
	template <typename T = void> static T remove_onAdUnavailableEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x10E1160))(0, value);
	}
	template <typename T = void> static T add_onAdLoadFailedEvent(Action1IronSourceError*>* value) {
		return ((T (*)(void *, Action1IronSourceError*>*))(Il2CppBase() + 0x10E1220))(0, value);
	}
	template <typename T = void> static T remove_onAdLoadFailedEvent(Action1IronSourceError*>* value) {
		return ((T (*)(void *, Action1IronSourceError*>*))(Il2CppBase() + 0x10E12E0))(0, value);
	}
	template <typename T = void> static T add_onAdReadyEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10E13A0))(0, value);
	}
	template <typename T = void> static T remove_onAdReadyEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10E1460))(0, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(IronSourceRewardedVideoEvents*))(Il2CppBase() + 0x10E1520))(this);
	}
	template <typename T = void> T registerRewardedVideoEvents() {
		return ((T (*)(IronSourceRewardedVideoEvents*))(Il2CppBase() + 0x10E1F94))(this);
	}
	template <typename T = void> T registerRewardedVideoManualEvents() {
		return ((T (*)(IronSourceRewardedVideoEvents*))(Il2CppBase() + 0x10E2D70))(this);
	}
	template <typename T = IronSourceError*> T getErrorFromErrorObject(Il2CppObject* descriptionObject) {
		return ((T (*)(IronSourceRewardedVideoEvents*, Il2CppObject*))(Il2CppBase() + 0x10E301C))(this, descriptionObject);
	}
	template <typename T = IronSourcePlacement*> T getPlacementFromObject(Il2CppObject* placementObject) {
		return ((T (*)(IronSourceRewardedVideoEvents*, Il2CppObject*))(Il2CppBase() + 0x10E32B8))(this, placementObject);
	}

};

