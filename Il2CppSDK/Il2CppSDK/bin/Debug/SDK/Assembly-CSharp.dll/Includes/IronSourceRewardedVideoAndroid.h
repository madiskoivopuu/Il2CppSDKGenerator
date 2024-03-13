#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceRewardedVideoAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceRewardedVideoAndroid"));
	}

	template <typename T = Action1IronSourceError*>*> T& OnRewardedVideoAdShowFailed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& OnRewardedVideoAdOpened() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& OnRewardedVideoAdClosed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& OnRewardedVideoAdStarted() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& OnRewardedVideoAdEnded() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Action1IronSourcePlacement*>*> T& OnRewardedVideoAdRewarded() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Action1IronSourcePlacement*>*> T& OnRewardedVideoAdClicked() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Action1bool>*> T& OnRewardedVideoAvailabilityChanged() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Action1Il2CppString*>*> T& OnRewardedVideoAdOpenedDemandOnlyEvent() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Action1Il2CppString*>*> T& OnRewardedVideoAdClosedDemandOnlyEvent() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Action1Il2CppString*>*> T& OnRewardedVideoAdLoadedDemandOnlyEvent() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Action1Il2CppString*>*> T& OnRewardedVideoAdRewardedDemandOnlyEvent() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Action2Il2CppString*, IronSourceError*>*> T& OnRewardedVideoAdShowFailedDemandOnlyEvent() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Action1Il2CppString*>*> T& OnRewardedVideoAdClickedDemandOnlyEvent() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Action2Il2CppString*, IronSourceError*>*> T& OnRewardedVideoAdLoadFailedDemandOnlyEvent() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T add_OnRewardedVideoAdShowFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action1IronSourceError*>*))(Il2CppBase() + 0x10DEB54))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdShowFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action1IronSourceError*>*))(Il2CppBase() + 0x10DEBF4))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdOpened(uintptr_t value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, uintptr_t))(Il2CppBase() + 0x10DEC94))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdOpened(uintptr_t value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, uintptr_t))(Il2CppBase() + 0x10DED34))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdClosed(uintptr_t value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, uintptr_t))(Il2CppBase() + 0x10DEDD4))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdClosed(uintptr_t value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, uintptr_t))(Il2CppBase() + 0x10DEE74))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdStarted(uintptr_t value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, uintptr_t))(Il2CppBase() + 0x10DEF14))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdStarted(uintptr_t value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, uintptr_t))(Il2CppBase() + 0x10DEFB4))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdEnded(uintptr_t value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, uintptr_t))(Il2CppBase() + 0x10DF054))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdEnded(uintptr_t value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, uintptr_t))(Il2CppBase() + 0x10DF0F4))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdRewarded(Action1IronSourcePlacement*>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action1IronSourcePlacement*>*))(Il2CppBase() + 0x10DF194))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdRewarded(Action1IronSourcePlacement*>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action1IronSourcePlacement*>*))(Il2CppBase() + 0x10DF234))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdClicked(Action1IronSourcePlacement*>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action1IronSourcePlacement*>*))(Il2CppBase() + 0x10DF2D4))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdClicked(Action1IronSourcePlacement*>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action1IronSourcePlacement*>*))(Il2CppBase() + 0x10DF374))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAvailabilityChanged(Action1bool>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action1bool>*))(Il2CppBase() + 0x10DF414))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAvailabilityChanged(Action1bool>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action1bool>*))(Il2CppBase() + 0x10DF4B4))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdOpenedDemandOnlyEvent(Action1Il2CppString*>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action1Il2CppString*>*))(Il2CppBase() + 0x10DF554))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdOpenedDemandOnlyEvent(Action1Il2CppString*>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action1Il2CppString*>*))(Il2CppBase() + 0x10DF5F4))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdClosedDemandOnlyEvent(Action1Il2CppString*>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action1Il2CppString*>*))(Il2CppBase() + 0x10DF694))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdClosedDemandOnlyEvent(Action1Il2CppString*>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action1Il2CppString*>*))(Il2CppBase() + 0x10DF734))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdLoadedDemandOnlyEvent(Action1Il2CppString*>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action1Il2CppString*>*))(Il2CppBase() + 0x10DF7D4))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdLoadedDemandOnlyEvent(Action1Il2CppString*>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action1Il2CppString*>*))(Il2CppBase() + 0x10DF874))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdRewardedDemandOnlyEvent(Action1Il2CppString*>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action1Il2CppString*>*))(Il2CppBase() + 0x10DF914))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdRewardedDemandOnlyEvent(Action1Il2CppString*>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action1Il2CppString*>*))(Il2CppBase() + 0x10DF9B4))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdShowFailedDemandOnlyEvent(Action2Il2CppString*, IronSourceError*>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action2Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x10DFA54))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdShowFailedDemandOnlyEvent(Action2Il2CppString*, IronSourceError*>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action2Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x10DFAF4))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdClickedDemandOnlyEvent(Action1Il2CppString*>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action1Il2CppString*>*))(Il2CppBase() + 0x10DFB94))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdClickedDemandOnlyEvent(Action1Il2CppString*>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action1Il2CppString*>*))(Il2CppBase() + 0x10DFC34))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdLoadFailedDemandOnlyEvent(Action2Il2CppString*, IronSourceError*>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action2Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x10DFCD4))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdLoadFailedDemandOnlyEvent(Action2Il2CppString*, IronSourceError*>* value) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Action2Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x10DFD74))(this, value);
	}
	template <typename T = void> T onRewardedVideoAdShowFailed(Il2CppString* description) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10DFE14))(this, description);
	}
	template <typename T = void> T onRewardedVideoAdClosed() {
		return ((T (*)(IronSourceRewardedVideoAndroid*))(Il2CppBase() + 0x10DFE9C))(this);
	}
	template <typename T = void> T onRewardedVideoAdOpened() {
		return ((T (*)(IronSourceRewardedVideoAndroid*))(Il2CppBase() + 0x10DFEB0))(this);
	}
	template <typename T = void> T onRewardedVideoAdStarted() {
		return ((T (*)(IronSourceRewardedVideoAndroid*))(Il2CppBase() + 0x10DFEC4))(this);
	}
	template <typename T = void> T onRewardedVideoAdEnded() {
		return ((T (*)(IronSourceRewardedVideoAndroid*))(Il2CppBase() + 0x10DFED8))(this);
	}
	template <typename T = void> T onRewardedVideoAdRewarded(Il2CppString* description) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10DFEEC))(this, description);
	}
	template <typename T = void> T onRewardedVideoAdClicked(Il2CppString* description) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10E01D8))(this, description);
	}
	template <typename T = void> T onRewardedVideoAvailabilityChanged(Il2CppString* stringAvailable) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10E0270))(this, stringAvailable);
	}
	template <typename T = void> T onRewardedVideoAdShowFailedDemandOnly(Il2CppString* args) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10E0308))(this, args);
	}
	template <typename T = void> T onRewardedVideoAdClosedDemandOnly(Il2CppString* instanceId) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10E0448))(this, instanceId);
	}
	template <typename T = void> T onRewardedVideoAdOpenedDemandOnly(Il2CppString* instanceId) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10E04B8))(this, instanceId);
	}
	template <typename T = void> T onRewardedVideoAdRewardedDemandOnly(Il2CppString* instanceId) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10E0528))(this, instanceId);
	}
	template <typename T = void> T onRewardedVideoAdClickedDemandOnly(Il2CppString* instanceId) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10E0598))(this, instanceId);
	}
	template <typename T = void> T onRewardedVideoAdLoadedDemandOnly(Il2CppString* instanceId) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10E0608))(this, instanceId);
	}
	template <typename T = void> T onRewardedVideoAdLoadFailedDemandOnly(Il2CppString* args) {
		return ((T (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10E0678))(this, args);
	}

};

