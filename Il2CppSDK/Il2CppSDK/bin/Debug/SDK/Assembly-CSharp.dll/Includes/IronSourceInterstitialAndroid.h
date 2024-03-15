#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceInterstitialAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceInterstitialAndroid"));
	}

	 Action1<IronSourceError*>*& OnInterstitialAdShowFailed() {
		return *(Action1<IronSourceError*>**)((uintptr_t)this + 0x20);
	}
	 Action1<IronSourceError*>*& OnInterstitialAdLoadFailed() {
		return *(Action1<IronSourceError*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& OnInterstitialAdReady() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& OnInterstitialAdOpened() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& OnInterstitialAdClosed() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& OnInterstitialAdShowSucceeded() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& OnInterstitialAdClicked() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& OnInterstitialAdRewarded() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	 Action1<Il2CppString*>*& OnInterstitialAdReadyDemandOnly() {
		return *(Action1<Il2CppString*>**)((uintptr_t)this + 0x60);
	}
	 Action1<Il2CppString*>*& OnInterstitialAdOpenedDemandOnly() {
		return *(Action1<Il2CppString*>**)((uintptr_t)this + 0x68);
	}
	 Action1<Il2CppString*>*& OnInterstitialAdClosedDemandOnly() {
		return *(Action1<Il2CppString*>**)((uintptr_t)this + 0x70);
	}
	 Action2<Il2CppString*, IronSourceError*>*& OnInterstitialAdLoadFailedDemandOnly() {
		return *(Action2<Il2CppString*, IronSourceError*>**)((uintptr_t)this + 0x78);
	}
	 Action1<Il2CppString*>*& OnInterstitialAdClickedDemandOnly() {
		return *(Action1<Il2CppString*>**)((uintptr_t)this + 0x80);
	}
	 Action2<Il2CppString*, IronSourceError*>*& OnInterstitialAdShowFailedDemandOnly() {
		return *(Action2<Il2CppString*, IronSourceError*>**)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R add_OnInterstitialAdShowFailed(Action1<IronSourceError*>* value) {
		return ((R (*)(IronSourceInterstitialAndroid*, Action1<IronSourceError*>*))(Il2CppBase() + 0x10D7DB8))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdShowFailed(Action1<IronSourceError*>* value) {
		return ((R (*)(IronSourceInterstitialAndroid*, Action1<IronSourceError*>*))(Il2CppBase() + 0x10D7E58))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdLoadFailed(Action1<IronSourceError*>* value) {
		return ((R (*)(IronSourceInterstitialAndroid*, Action1<IronSourceError*>*))(Il2CppBase() + 0x10D7EF8))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdLoadFailed(Action1<IronSourceError*>* value) {
		return ((R (*)(IronSourceInterstitialAndroid*, Action1<IronSourceError*>*))(Il2CppBase() + 0x10D7F98))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdReady(uintptr_t value) {
		return ((R (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D8038))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdReady(uintptr_t value) {
		return ((R (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D80D8))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdOpened(uintptr_t value) {
		return ((R (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D8178))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdOpened(uintptr_t value) {
		return ((R (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D8218))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdClosed(uintptr_t value) {
		return ((R (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D82B8))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdClosed(uintptr_t value) {
		return ((R (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D8358))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdShowSucceeded(uintptr_t value) {
		return ((R (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D83F8))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdShowSucceeded(uintptr_t value) {
		return ((R (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D8498))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdClicked(uintptr_t value) {
		return ((R (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D8538))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdClicked(uintptr_t value) {
		return ((R (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D85D8))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdRewarded(uintptr_t value) {
		return ((R (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D8678))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdRewarded(uintptr_t value) {
		return ((R (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D8718))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdReadyDemandOnly(Action1<Il2CppString*>* value) {
		return ((R (*)(IronSourceInterstitialAndroid*, Action1<Il2CppString*>*))(Il2CppBase() + 0x10D87B8))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdReadyDemandOnly(Action1<Il2CppString*>* value) {
		return ((R (*)(IronSourceInterstitialAndroid*, Action1<Il2CppString*>*))(Il2CppBase() + 0x10D8858))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdOpenedDemandOnly(Action1<Il2CppString*>* value) {
		return ((R (*)(IronSourceInterstitialAndroid*, Action1<Il2CppString*>*))(Il2CppBase() + 0x10D88F8))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdOpenedDemandOnly(Action1<Il2CppString*>* value) {
		return ((R (*)(IronSourceInterstitialAndroid*, Action1<Il2CppString*>*))(Il2CppBase() + 0x10D8998))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdClosedDemandOnly(Action1<Il2CppString*>* value) {
		return ((R (*)(IronSourceInterstitialAndroid*, Action1<Il2CppString*>*))(Il2CppBase() + 0x10D8A38))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdClosedDemandOnly(Action1<Il2CppString*>* value) {
		return ((R (*)(IronSourceInterstitialAndroid*, Action1<Il2CppString*>*))(Il2CppBase() + 0x10D8AD8))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdLoadFailedDemandOnly(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(IronSourceInterstitialAndroid*, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x10D8B78))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdLoadFailedDemandOnly(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(IronSourceInterstitialAndroid*, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x10D8C18))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdClickedDemandOnly(Action1<Il2CppString*>* value) {
		return ((R (*)(IronSourceInterstitialAndroid*, Action1<Il2CppString*>*))(Il2CppBase() + 0x10D8CB8))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdClickedDemandOnly(Action1<Il2CppString*>* value) {
		return ((R (*)(IronSourceInterstitialAndroid*, Action1<Il2CppString*>*))(Il2CppBase() + 0x10D8D58))(this, value);
	}
	template <typename R = void> R add_OnInterstitialAdShowFailedDemandOnly(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(IronSourceInterstitialAndroid*, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x10D8DF8))(this, value);
	}
	template <typename R = void> R remove_OnInterstitialAdShowFailedDemandOnly(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(IronSourceInterstitialAndroid*, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x10D8E98))(this, value);
	}
	template <typename R = void> R onInterstitialAdShowFailed(Il2CppString* description) {
		return ((R (*)(IronSourceInterstitialAndroid*, Il2CppString*))(Il2CppBase() + 0x10D8F38))(this, description);
	}
	template <typename R = void> R onInterstitialAdReady() {
		return ((R (*)(IronSourceInterstitialAndroid*))(Il2CppBase() + 0x10D925C))(this);
	}
	template <typename R = void> R onInterstitialAdOpened() {
		return ((R (*)(IronSourceInterstitialAndroid*))(Il2CppBase() + 0x10D9270))(this);
	}
	template <typename R = void> R onInterstitialAdClosed() {
		return ((R (*)(IronSourceInterstitialAndroid*))(Il2CppBase() + 0x10D9284))(this);
	}
	template <typename R = void> R onInterstitialAdShowSucceeded() {
		return ((R (*)(IronSourceInterstitialAndroid*))(Il2CppBase() + 0x10D9298))(this);
	}
	template <typename R = void> R onInterstitialAdClicked() {
		return ((R (*)(IronSourceInterstitialAndroid*))(Il2CppBase() + 0x10D92AC))(this);
	}
	template <typename R = void> R onInterstitialAdLoadFailed(Il2CppString* args) {
		return ((R (*)(IronSourceInterstitialAndroid*, Il2CppString*))(Il2CppBase() + 0x10D92C0))(this, args);
	}
	template <typename R = void> R onInterstitialAdRewarded() {
		return ((R (*)(IronSourceInterstitialAndroid*))(Il2CppBase() + 0x10D9348))(this);
	}
	template <typename R = void> R onInterstitialAdClickedDemandOnly(Il2CppString* instanceId) {
		return ((R (*)(IronSourceInterstitialAndroid*, Il2CppString*))(Il2CppBase() + 0x10D935C))(this, instanceId);
	}
	template <typename R = void> R onInterstitialAdClosedDemandOnly(Il2CppString* instanceId) {
		return ((R (*)(IronSourceInterstitialAndroid*, Il2CppString*))(Il2CppBase() + 0x10D93CC))(this, instanceId);
	}
	template <typename R = void> R onInterstitialAdOpenedDemandOnly(Il2CppString* instanceId) {
		return ((R (*)(IronSourceInterstitialAndroid*, Il2CppString*))(Il2CppBase() + 0x10D943C))(this, instanceId);
	}
	template <typename R = void> R onInterstitialAdReadyDemandOnly(Il2CppString* instanceId) {
		return ((R (*)(IronSourceInterstitialAndroid*, Il2CppString*))(Il2CppBase() + 0x10D94AC))(this, instanceId);
	}
	template <typename R = void> R onInterstitialAdLoadFailedDemandOnly(Il2CppString* args) {
		return ((R (*)(IronSourceInterstitialAndroid*, Il2CppString*))(Il2CppBase() + 0x10D951C))(this, args);
	}
	template <typename R = void> R onInterstitialAdShowFailedDemandOnly(Il2CppString* args) {
		return ((R (*)(IronSourceInterstitialAndroid*, Il2CppString*))(Il2CppBase() + 0x10D964C))(this, args);
	}

};

