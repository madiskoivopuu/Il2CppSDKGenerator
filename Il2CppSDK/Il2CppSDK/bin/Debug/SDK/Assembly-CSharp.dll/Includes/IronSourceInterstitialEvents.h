#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceInterstitialEvents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceInterstitialEvents"));
	}

	template <typename T = Action1IronSourceAdInfo*>*> static T& onAdReadyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Action1IronSourceError*>*> static T& onAdLoadFailedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Action1IronSourceAdInfo*>*> static T& onAdOpenedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Action1IronSourceAdInfo*>*> static T& onAdClosedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Action1IronSourceAdInfo*>*> static T& onAdShowSucceededEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Action2IronSourceError*, IronSourceAdInfo*>*> static T& onAdShowFailedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Action1IronSourceAdInfo*>*> static T& onAdClickedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = IUnityLevelPlayInterstitial*> T& LevelPlayInterstitialAndroid() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> static T add_onAdReadyEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10D977C))(0, value);
	}
	template <typename T = void> static T remove_onAdReadyEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10D9838))(0, value);
	}
	template <typename T = void> static T add_onAdLoadFailedEvent(Action1IronSourceError*>* value) {
		return ((T (*)(void *, Action1IronSourceError*>*))(Il2CppBase() + 0x10D98F4))(0, value);
	}
	template <typename T = void> static T remove_onAdLoadFailedEvent(Action1IronSourceError*>* value) {
		return ((T (*)(void *, Action1IronSourceError*>*))(Il2CppBase() + 0x10D99B4))(0, value);
	}
	template <typename T = void> static T add_onAdOpenedEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10D9A74))(0, value);
	}
	template <typename T = void> static T remove_onAdOpenedEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10D9B34))(0, value);
	}
	template <typename T = void> static T add_onAdClosedEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10D9BF4))(0, value);
	}
	template <typename T = void> static T remove_onAdClosedEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10D9CB4))(0, value);
	}
	template <typename T = void> static T add_onAdShowSucceededEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10D9D74))(0, value);
	}
	template <typename T = void> static T remove_onAdShowSucceededEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10D9E34))(0, value);
	}
	template <typename T = void> static T add_onAdShowFailedEvent(Action2IronSourceError*, IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action2IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10D9EF4))(0, value);
	}
	template <typename T = void> static T remove_onAdShowFailedEvent(Action2IronSourceError*, IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action2IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10D9FB4))(0, value);
	}
	template <typename T = void> static T add_onAdClickedEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10DA074))(0, value);
	}
	template <typename T = void> static T remove_onAdClickedEvent(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(void *, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10DA134))(0, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(IronSourceInterstitialEvents*))(Il2CppBase() + 0x10DA1F4))(this);
	}
	template <typename T = void> T registerInterstitialEvents() {
		return ((T (*)(IronSourceInterstitialEvents*))(Il2CppBase() + 0x10DAC28))(this);
	}
	template <typename T = IronSourceError*> T getErrorFromErrorObject(Il2CppObject* descriptionObject) {
		return ((T (*)(IronSourceInterstitialEvents*, Il2CppObject*))(Il2CppBase() + 0x10DB428))(this, descriptionObject);
	}
	template <typename T = IronSourcePlacement*> T getPlacementFromObject(Il2CppObject* placementObject) {
		return ((T (*)(IronSourceInterstitialEvents*, Il2CppObject*))(Il2CppBase() + 0x10DB6C4))(this, placementObject);
	}

};

