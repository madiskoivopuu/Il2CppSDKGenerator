#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceInterstitialAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceInterstitialAndroid"));
	}

	template <typename T = Action1IronSourceError*>*> T& OnInterstitialAdShowFailed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Action1IronSourceError*>*> T& OnInterstitialAdLoadFailed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& OnInterstitialAdReady() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& OnInterstitialAdOpened() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& OnInterstitialAdClosed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& OnInterstitialAdShowSucceeded() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& OnInterstitialAdClicked() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& OnInterstitialAdRewarded() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Action1Il2CppString*>*> T& OnInterstitialAdReadyDemandOnly() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Action1Il2CppString*>*> T& OnInterstitialAdOpenedDemandOnly() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Action1Il2CppString*>*> T& OnInterstitialAdClosedDemandOnly() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Action2Il2CppString*, IronSourceError*>*> T& OnInterstitialAdLoadFailedDemandOnly() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Action1Il2CppString*>*> T& OnInterstitialAdClickedDemandOnly() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Action2Il2CppString*, IronSourceError*>*> T& OnInterstitialAdShowFailedDemandOnly() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T add_OnInterstitialAdShowFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IronSourceInterstitialAndroid*, Action1IronSourceError*>*))(Il2CppBase() + 0x10D7DB8))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdShowFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IronSourceInterstitialAndroid*, Action1IronSourceError*>*))(Il2CppBase() + 0x10D7E58))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdLoadFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IronSourceInterstitialAndroid*, Action1IronSourceError*>*))(Il2CppBase() + 0x10D7EF8))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdLoadFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IronSourceInterstitialAndroid*, Action1IronSourceError*>*))(Il2CppBase() + 0x10D7F98))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdReady(uintptr_t value) {
		return ((T (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D8038))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdReady(uintptr_t value) {
		return ((T (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D80D8))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdOpened(uintptr_t value) {
		return ((T (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D8178))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdOpened(uintptr_t value) {
		return ((T (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D8218))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdClosed(uintptr_t value) {
		return ((T (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D82B8))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdClosed(uintptr_t value) {
		return ((T (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D8358))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdShowSucceeded(uintptr_t value) {
		return ((T (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D83F8))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdShowSucceeded(uintptr_t value) {
		return ((T (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D8498))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdClicked(uintptr_t value) {
		return ((T (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D8538))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdClicked(uintptr_t value) {
		return ((T (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D85D8))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdRewarded(uintptr_t value) {
		return ((T (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D8678))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdRewarded(uintptr_t value) {
		return ((T (*)(IronSourceInterstitialAndroid*, uintptr_t))(Il2CppBase() + 0x10D8718))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdReadyDemandOnly(Action1Il2CppString*>* value) {
		return ((T (*)(IronSourceInterstitialAndroid*, Action1Il2CppString*>*))(Il2CppBase() + 0x10D87B8))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdReadyDemandOnly(Action1Il2CppString*>* value) {
		return ((T (*)(IronSourceInterstitialAndroid*, Action1Il2CppString*>*))(Il2CppBase() + 0x10D8858))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdOpenedDemandOnly(Action1Il2CppString*>* value) {
		return ((T (*)(IronSourceInterstitialAndroid*, Action1Il2CppString*>*))(Il2CppBase() + 0x10D88F8))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdOpenedDemandOnly(Action1Il2CppString*>* value) {
		return ((T (*)(IronSourceInterstitialAndroid*, Action1Il2CppString*>*))(Il2CppBase() + 0x10D8998))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdClosedDemandOnly(Action1Il2CppString*>* value) {
		return ((T (*)(IronSourceInterstitialAndroid*, Action1Il2CppString*>*))(Il2CppBase() + 0x10D8A38))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdClosedDemandOnly(Action1Il2CppString*>* value) {
		return ((T (*)(IronSourceInterstitialAndroid*, Action1Il2CppString*>*))(Il2CppBase() + 0x10D8AD8))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdLoadFailedDemandOnly(Action2Il2CppString*, IronSourceError*>* value) {
		return ((T (*)(IronSourceInterstitialAndroid*, Action2Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x10D8B78))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdLoadFailedDemandOnly(Action2Il2CppString*, IronSourceError*>* value) {
		return ((T (*)(IronSourceInterstitialAndroid*, Action2Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x10D8C18))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdClickedDemandOnly(Action1Il2CppString*>* value) {
		return ((T (*)(IronSourceInterstitialAndroid*, Action1Il2CppString*>*))(Il2CppBase() + 0x10D8CB8))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdClickedDemandOnly(Action1Il2CppString*>* value) {
		return ((T (*)(IronSourceInterstitialAndroid*, Action1Il2CppString*>*))(Il2CppBase() + 0x10D8D58))(this, value);
	}
	template <typename T = void> T add_OnInterstitialAdShowFailedDemandOnly(Action2Il2CppString*, IronSourceError*>* value) {
		return ((T (*)(IronSourceInterstitialAndroid*, Action2Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x10D8DF8))(this, value);
	}
	template <typename T = void> T remove_OnInterstitialAdShowFailedDemandOnly(Action2Il2CppString*, IronSourceError*>* value) {
		return ((T (*)(IronSourceInterstitialAndroid*, Action2Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x10D8E98))(this, value);
	}
	template <typename T = void> T onInterstitialAdShowFailed(Il2CppString* description) {
		return ((T (*)(IronSourceInterstitialAndroid*, Il2CppString*))(Il2CppBase() + 0x10D8F38))(this, description);
	}
	template <typename T = void> T onInterstitialAdReady() {
		return ((T (*)(IronSourceInterstitialAndroid*))(Il2CppBase() + 0x10D925C))(this);
	}
	template <typename T = void> T onInterstitialAdOpened() {
		return ((T (*)(IronSourceInterstitialAndroid*))(Il2CppBase() + 0x10D9270))(this);
	}
	template <typename T = void> T onInterstitialAdClosed() {
		return ((T (*)(IronSourceInterstitialAndroid*))(Il2CppBase() + 0x10D9284))(this);
	}
	template <typename T = void> T onInterstitialAdShowSucceeded() {
		return ((T (*)(IronSourceInterstitialAndroid*))(Il2CppBase() + 0x10D9298))(this);
	}
	template <typename T = void> T onInterstitialAdClicked() {
		return ((T (*)(IronSourceInterstitialAndroid*))(Il2CppBase() + 0x10D92AC))(this);
	}
	template <typename T = void> T onInterstitialAdLoadFailed(Il2CppString* args) {
		return ((T (*)(IronSourceInterstitialAndroid*, Il2CppString*))(Il2CppBase() + 0x10D92C0))(this, args);
	}
	template <typename T = void> T onInterstitialAdRewarded() {
		return ((T (*)(IronSourceInterstitialAndroid*))(Il2CppBase() + 0x10D9348))(this);
	}
	template <typename T = void> T onInterstitialAdClickedDemandOnly(Il2CppString* instanceId) {
		return ((T (*)(IronSourceInterstitialAndroid*, Il2CppString*))(Il2CppBase() + 0x10D935C))(this, instanceId);
	}
	template <typename T = void> T onInterstitialAdClosedDemandOnly(Il2CppString* instanceId) {
		return ((T (*)(IronSourceInterstitialAndroid*, Il2CppString*))(Il2CppBase() + 0x10D93CC))(this, instanceId);
	}
	template <typename T = void> T onInterstitialAdOpenedDemandOnly(Il2CppString* instanceId) {
		return ((T (*)(IronSourceInterstitialAndroid*, Il2CppString*))(Il2CppBase() + 0x10D943C))(this, instanceId);
	}
	template <typename T = void> T onInterstitialAdReadyDemandOnly(Il2CppString* instanceId) {
		return ((T (*)(IronSourceInterstitialAndroid*, Il2CppString*))(Il2CppBase() + 0x10D94AC))(this, instanceId);
	}
	template <typename T = void> T onInterstitialAdLoadFailedDemandOnly(Il2CppString* args) {
		return ((T (*)(IronSourceInterstitialAndroid*, Il2CppString*))(Il2CppBase() + 0x10D951C))(this, args);
	}
	template <typename T = void> T onInterstitialAdShowFailedDemandOnly(Il2CppString* args) {
		return ((T (*)(IronSourceInterstitialAndroid*, Il2CppString*))(Il2CppBase() + 0x10D964C))(this, args);
	}

};

