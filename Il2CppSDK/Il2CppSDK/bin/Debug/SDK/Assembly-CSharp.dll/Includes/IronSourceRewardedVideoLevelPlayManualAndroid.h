#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceRewardedVideoLevelPlayManualAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceRewardedVideoLevelPlayManualAndroid"));
	}

	 Action1IronSourceError*>*& OnAdLoadFailed() {
		return *(Action1IronSourceError*>**)((uintptr_t)this + 0x20);
	}
	 Action1IronSourceAdInfo*>*& OnAdReady() {
		return *(Action1IronSourceAdInfo*>**)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R add_OnAdLoadFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayManualAndroid*, Action1IronSourceError*>*))(Il2CppBase() + 0x10E4240))(this, value);
	}
	template <typename R = void> R remove_OnAdLoadFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayManualAndroid*, Action1IronSourceError*>*))(Il2CppBase() + 0x10E42E0))(this, value);
	}
	template <typename R = void> R add_OnAdReady(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayManualAndroid*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10E4380))(this, value);
	}
	template <typename R = void> R remove_OnAdReady(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayManualAndroid*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10E4420))(this, value);
	}
	template <typename R = void> R onAdReady(Il2CppString* data) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayManualAndroid*, Il2CppString*))(Il2CppBase() + 0x10E44C0))(this, data);
	}
	template <typename R = void> R onAdLoadFailed(Il2CppString* args) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayManualAndroid*, Il2CppString*))(Il2CppBase() + 0x10E4568))(this, args);
	}

};

