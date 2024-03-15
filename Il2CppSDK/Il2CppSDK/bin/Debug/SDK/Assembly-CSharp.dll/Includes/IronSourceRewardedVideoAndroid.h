#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceRewardedVideoAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceRewardedVideoAndroid"));
	}

	 Action1<IronSourceError*>*& OnRewardedVideoAdShowFailed() {
		return *(Action1<IronSourceError*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& OnRewardedVideoAdOpened() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& OnRewardedVideoAdClosed() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& OnRewardedVideoAdStarted() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& OnRewardedVideoAdEnded() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Action1<IronSourcePlacement*>*& OnRewardedVideoAdRewarded() {
		return *(Action1<IronSourcePlacement*>**)((uintptr_t)this + 0x48);
	}
	 Action1<IronSourcePlacement*>*& OnRewardedVideoAdClicked() {
		return *(Action1<IronSourcePlacement*>**)((uintptr_t)this + 0x50);
	}
	 Action1<bool>*& OnRewardedVideoAvailabilityChanged() {
		return *(Action1<bool>**)((uintptr_t)this + 0x58);
	}
	 Action1<Il2CppString*>*& OnRewardedVideoAdOpenedDemandOnlyEvent() {
		return *(Action1<Il2CppString*>**)((uintptr_t)this + 0x60);
	}
	 Action1<Il2CppString*>*& OnRewardedVideoAdClosedDemandOnlyEvent() {
		return *(Action1<Il2CppString*>**)((uintptr_t)this + 0x68);
	}
	 Action1<Il2CppString*>*& OnRewardedVideoAdLoadedDemandOnlyEvent() {
		return *(Action1<Il2CppString*>**)((uintptr_t)this + 0x70);
	}
	 Action1<Il2CppString*>*& OnRewardedVideoAdRewardedDemandOnlyEvent() {
		return *(Action1<Il2CppString*>**)((uintptr_t)this + 0x78);
	}
	 Action2<Il2CppString*, IronSourceError*>*& OnRewardedVideoAdShowFailedDemandOnlyEvent() {
		return *(Action2<Il2CppString*, IronSourceError*>**)((uintptr_t)this + 0x80);
	}
	 Action1<Il2CppString*>*& OnRewardedVideoAdClickedDemandOnlyEvent() {
		return *(Action1<Il2CppString*>**)((uintptr_t)this + 0x88);
	}
	 Action2<Il2CppString*, IronSourceError*>*& OnRewardedVideoAdLoadFailedDemandOnlyEvent() {
		return *(Action2<Il2CppString*, IronSourceError*>**)((uintptr_t)this + 0x90);
	}

	template <typename R = void> R add_OnRewardedVideoAdShowFailed(Action1<IronSourceError*>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action1<IronSourceError*>*))(Il2CppBase() + 0x10DEB54))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdShowFailed(Action1<IronSourceError*>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action1<IronSourceError*>*))(Il2CppBase() + 0x10DEBF4))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdOpened(uintptr_t value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, uintptr_t))(Il2CppBase() + 0x10DEC94))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdOpened(uintptr_t value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, uintptr_t))(Il2CppBase() + 0x10DED34))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdClosed(uintptr_t value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, uintptr_t))(Il2CppBase() + 0x10DEDD4))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdClosed(uintptr_t value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, uintptr_t))(Il2CppBase() + 0x10DEE74))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdStarted(uintptr_t value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, uintptr_t))(Il2CppBase() + 0x10DEF14))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdStarted(uintptr_t value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, uintptr_t))(Il2CppBase() + 0x10DEFB4))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdEnded(uintptr_t value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, uintptr_t))(Il2CppBase() + 0x10DF054))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdEnded(uintptr_t value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, uintptr_t))(Il2CppBase() + 0x10DF0F4))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdRewarded(Action1<IronSourcePlacement*>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action1<IronSourcePlacement*>*))(Il2CppBase() + 0x10DF194))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdRewarded(Action1<IronSourcePlacement*>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action1<IronSourcePlacement*>*))(Il2CppBase() + 0x10DF234))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdClicked(Action1<IronSourcePlacement*>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action1<IronSourcePlacement*>*))(Il2CppBase() + 0x10DF2D4))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdClicked(Action1<IronSourcePlacement*>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action1<IronSourcePlacement*>*))(Il2CppBase() + 0x10DF374))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAvailabilityChanged(Action1<bool>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action1<bool>*))(Il2CppBase() + 0x10DF414))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAvailabilityChanged(Action1<bool>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action1<bool>*))(Il2CppBase() + 0x10DF4B4))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdOpenedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action1<Il2CppString*>*))(Il2CppBase() + 0x10DF554))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdOpenedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action1<Il2CppString*>*))(Il2CppBase() + 0x10DF5F4))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdClosedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action1<Il2CppString*>*))(Il2CppBase() + 0x10DF694))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdClosedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action1<Il2CppString*>*))(Il2CppBase() + 0x10DF734))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdLoadedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action1<Il2CppString*>*))(Il2CppBase() + 0x10DF7D4))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdLoadedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action1<Il2CppString*>*))(Il2CppBase() + 0x10DF874))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdRewardedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action1<Il2CppString*>*))(Il2CppBase() + 0x10DF914))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdRewardedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action1<Il2CppString*>*))(Il2CppBase() + 0x10DF9B4))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdShowFailedDemandOnlyEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x10DFA54))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdShowFailedDemandOnlyEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x10DFAF4))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdClickedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action1<Il2CppString*>*))(Il2CppBase() + 0x10DFB94))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdClickedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action1<Il2CppString*>*))(Il2CppBase() + 0x10DFC34))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdLoadFailedDemandOnlyEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x10DFCD4))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdLoadFailedDemandOnlyEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x10DFD74))(this, value);
	}
	template <typename R = void> R onRewardedVideoAdShowFailed(Il2CppString* description) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10DFE14))(this, description);
	}
	template <typename R = void> R onRewardedVideoAdClosed() {
		return ((R (*)(IronSourceRewardedVideoAndroid*))(Il2CppBase() + 0x10DFE9C))(this);
	}
	template <typename R = void> R onRewardedVideoAdOpened() {
		return ((R (*)(IronSourceRewardedVideoAndroid*))(Il2CppBase() + 0x10DFEB0))(this);
	}
	template <typename R = void> R onRewardedVideoAdStarted() {
		return ((R (*)(IronSourceRewardedVideoAndroid*))(Il2CppBase() + 0x10DFEC4))(this);
	}
	template <typename R = void> R onRewardedVideoAdEnded() {
		return ((R (*)(IronSourceRewardedVideoAndroid*))(Il2CppBase() + 0x10DFED8))(this);
	}
	template <typename R = void> R onRewardedVideoAdRewarded(Il2CppString* description) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10DFEEC))(this, description);
	}
	template <typename R = void> R onRewardedVideoAdClicked(Il2CppString* description) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10E01D8))(this, description);
	}
	template <typename R = void> R onRewardedVideoAvailabilityChanged(Il2CppString* stringAvailable) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10E0270))(this, stringAvailable);
	}
	template <typename R = void> R onRewardedVideoAdShowFailedDemandOnly(Il2CppString* args) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10E0308))(this, args);
	}
	template <typename R = void> R onRewardedVideoAdClosedDemandOnly(Il2CppString* instanceId) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10E0448))(this, instanceId);
	}
	template <typename R = void> R onRewardedVideoAdOpenedDemandOnly(Il2CppString* instanceId) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10E04B8))(this, instanceId);
	}
	template <typename R = void> R onRewardedVideoAdRewardedDemandOnly(Il2CppString* instanceId) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10E0528))(this, instanceId);
	}
	template <typename R = void> R onRewardedVideoAdClickedDemandOnly(Il2CppString* instanceId) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10E0598))(this, instanceId);
	}
	template <typename R = void> R onRewardedVideoAdLoadedDemandOnly(Il2CppString* instanceId) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10E0608))(this, instanceId);
	}
	template <typename R = void> R onRewardedVideoAdLoadFailedDemandOnly(Il2CppString* args) {
		return ((R (*)(IronSourceRewardedVideoAndroid*, Il2CppString*))(Il2CppBase() + 0x10E0678))(this, args);
	}

};

