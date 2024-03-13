#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceRewardedVideoLevelPlayManualAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceRewardedVideoLevelPlayManualAndroid"));
	}

	template <typename T = Action1IronSourceError*>*> T& OnAdLoadFailed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Action1IronSourceAdInfo*>*> T& OnAdReady() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T add_OnAdLoadFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayManualAndroid*, Action1IronSourceError*>*))(Il2CppBase() + 0x10E4240))(this, value);
	}
	template <typename T = void> T remove_OnAdLoadFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayManualAndroid*, Action1IronSourceError*>*))(Il2CppBase() + 0x10E42E0))(this, value);
	}
	template <typename T = void> T add_OnAdReady(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayManualAndroid*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10E4380))(this, value);
	}
	template <typename T = void> T remove_OnAdReady(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayManualAndroid*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10E4420))(this, value);
	}
	template <typename T = void> T onAdReady(Il2CppString* data) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayManualAndroid*, Il2CppString*))(Il2CppBase() + 0x10E44C0))(this, data);
	}
	template <typename T = void> T onAdLoadFailed(Il2CppString* args) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayManualAndroid*, Il2CppString*))(Il2CppBase() + 0x10E4568))(this, args);
	}

};

