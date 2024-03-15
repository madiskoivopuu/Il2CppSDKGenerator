#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityRewardedVideo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityRewardedVideo"));
	}


	template <typename R = void> R add_OnRewardedVideoAdShowFailed(Action1<IronSourceError*>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action1<IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdShowFailed(Action1<IronSourceError*>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action1<IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdOpened(uintptr_t value) {
		return ((R (*)(IUnityRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdOpened(uintptr_t value) {
		return ((R (*)(IUnityRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdClosed(uintptr_t value) {
		return ((R (*)(IUnityRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdClosed(uintptr_t value) {
		return ((R (*)(IUnityRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdStarted(uintptr_t value) {
		return ((R (*)(IUnityRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdStarted(uintptr_t value) {
		return ((R (*)(IUnityRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdEnded(uintptr_t value) {
		return ((R (*)(IUnityRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdEnded(uintptr_t value) {
		return ((R (*)(IUnityRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdRewarded(Action1<IronSourcePlacement*>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action1<IronSourcePlacement*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdRewarded(Action1<IronSourcePlacement*>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action1<IronSourcePlacement*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdClicked(Action1<IronSourcePlacement*>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action1<IronSourcePlacement*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdClicked(Action1<IronSourcePlacement*>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action1<IronSourcePlacement*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAvailabilityChanged(Action1<bool>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action1<bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAvailabilityChanged(Action1<bool>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action1<bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdOpenedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action1<Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdOpenedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action1<Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdClosedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action1<Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdClosedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action1<Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdLoadedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action1<Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdLoadedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action1<Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdRewardedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action1<Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdRewardedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action1<Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdShowFailedDemandOnlyEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdShowFailedDemandOnlyEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdClickedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action1<Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdClickedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action1<Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdLoadFailedDemandOnlyEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdLoadFailedDemandOnlyEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(IUnityRewardedVideo*, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}

};

