#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityRewardedVideo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityRewardedVideo"));
	}


	template <typename T = void> T add_OnRewardedVideoAdShowFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdShowFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdOpened(uintptr_t value) {
		return ((T (*)(IUnityRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdOpened(uintptr_t value) {
		return ((T (*)(IUnityRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdClosed(uintptr_t value) {
		return ((T (*)(IUnityRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdClosed(uintptr_t value) {
		return ((T (*)(IUnityRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdStarted(uintptr_t value) {
		return ((T (*)(IUnityRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdStarted(uintptr_t value) {
		return ((T (*)(IUnityRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdEnded(uintptr_t value) {
		return ((T (*)(IUnityRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdEnded(uintptr_t value) {
		return ((T (*)(IUnityRewardedVideo*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdRewarded(Action1IronSourcePlacement*>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action1IronSourcePlacement*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdRewarded(Action1IronSourcePlacement*>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action1IronSourcePlacement*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdClicked(Action1IronSourcePlacement*>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action1IronSourcePlacement*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdClicked(Action1IronSourcePlacement*>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action1IronSourcePlacement*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAvailabilityChanged(Action1bool>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action1bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAvailabilityChanged(Action1bool>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action1bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdOpenedDemandOnlyEvent(Action1Il2CppString*>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdOpenedDemandOnlyEvent(Action1Il2CppString*>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdClosedDemandOnlyEvent(Action1Il2CppString*>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdClosedDemandOnlyEvent(Action1Il2CppString*>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdLoadedDemandOnlyEvent(Action1Il2CppString*>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdLoadedDemandOnlyEvent(Action1Il2CppString*>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdRewardedDemandOnlyEvent(Action1Il2CppString*>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdRewardedDemandOnlyEvent(Action1Il2CppString*>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdShowFailedDemandOnlyEvent(Action2Il2CppString*, IronSourceError*>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action2Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdShowFailedDemandOnlyEvent(Action2Il2CppString*, IronSourceError*>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action2Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdClickedDemandOnlyEvent(Action1Il2CppString*>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdClickedDemandOnlyEvent(Action1Il2CppString*>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdLoadFailedDemandOnlyEvent(Action2Il2CppString*, IronSourceError*>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action2Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdLoadFailedDemandOnlyEvent(Action2Il2CppString*, IronSourceError*>* value) {
		return ((T (*)(IUnityRewardedVideo*, Action2Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}

};

