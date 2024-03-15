#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceInterstitialEvents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceInterstitialEvents"));
	}

	 static Action1<IronSourceAdInfo*>*& onAdReadyEvent() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Action1<IronSourceError*>*& onAdLoadFailedEvent() {
		return *(Action1<IronSourceError*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static Action1<IronSourceAdInfo*>*& onAdOpenedEvent() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static Action1<IronSourceAdInfo*>*& onAdClosedEvent() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static Action1<IronSourceAdInfo*>*& onAdShowSucceededEvent() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static Action2<IronSourceError*, IronSourceAdInfo*>*& onAdShowFailedEvent() {
		return *(Action2<IronSourceError*, IronSourceAdInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static Action1<IronSourceAdInfo*>*& onAdClickedEvent() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = IUnityLevelPlayInterstitial*> R& LevelPlayInterstitialAndroid() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> static R add_onAdReadyEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10D977C))(0, value);
	}
	template <typename R = void> static R remove_onAdReadyEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10D9838))(0, value);
	}
	template <typename R = void> static R add_onAdLoadFailedEvent(Action1<IronSourceError*>* value) {
		return ((R (*)(void *, Action1<IronSourceError*>*))(Il2CppBase() + 0x10D98F4))(0, value);
	}
	template <typename R = void> static R remove_onAdLoadFailedEvent(Action1<IronSourceError*>* value) {
		return ((R (*)(void *, Action1<IronSourceError*>*))(Il2CppBase() + 0x10D99B4))(0, value);
	}
	template <typename R = void> static R add_onAdOpenedEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10D9A74))(0, value);
	}
	template <typename R = void> static R remove_onAdOpenedEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10D9B34))(0, value);
	}
	template <typename R = void> static R add_onAdClosedEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10D9BF4))(0, value);
	}
	template <typename R = void> static R remove_onAdClosedEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10D9CB4))(0, value);
	}
	template <typename R = void> static R add_onAdShowSucceededEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10D9D74))(0, value);
	}
	template <typename R = void> static R remove_onAdShowSucceededEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10D9E34))(0, value);
	}
	template <typename R = void> static R add_onAdShowFailedEvent(Action2<IronSourceError*, IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action2<IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10D9EF4))(0, value);
	}
	template <typename R = void> static R remove_onAdShowFailedEvent(Action2<IronSourceError*, IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action2<IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10D9FB4))(0, value);
	}
	template <typename R = void> static R add_onAdClickedEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10DA074))(0, value);
	}
	template <typename R = void> static R remove_onAdClickedEvent(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(void *, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10DA134))(0, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(IronSourceInterstitialEvents*))(Il2CppBase() + 0x10DA1F4))(this);
	}
	template <typename R = void> R registerInterstitialEvents() {
		return ((R (*)(IronSourceInterstitialEvents*))(Il2CppBase() + 0x10DAC28))(this);
	}
	template <typename R = IronSourceError*> R getErrorFromErrorObject(Il2CppObject* descriptionObject) {
		return ((R (*)(IronSourceInterstitialEvents*, Il2CppObject*))(Il2CppBase() + 0x10DB428))(this, descriptionObject);
	}
	template <typename R = IronSourcePlacement*> R getPlacementFromObject(Il2CppObject* placementObject) {
		return ((R (*)(IronSourceInterstitialEvents*, Il2CppObject*))(Il2CppBase() + 0x10DB6C4))(this, placementObject);
	}

};

