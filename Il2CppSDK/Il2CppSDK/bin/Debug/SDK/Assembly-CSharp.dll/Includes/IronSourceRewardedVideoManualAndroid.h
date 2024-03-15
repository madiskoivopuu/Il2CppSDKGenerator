#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceRewardedVideoManualAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceRewardedVideoManualAndroid"));
	}

	 Action1IronSourceError*>*& OnRewardedVideoAdLoadFailed() {
		return *(Action1IronSourceError*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& OnRewardedVideoAdReady() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R add_OnRewardedVideoAdLoadFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IronSourceRewardedVideoManualAndroid*, Action1IronSourceError*>*))(Il2CppBase() + 0x10E4BB4))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdLoadFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IronSourceRewardedVideoManualAndroid*, Action1IronSourceError*>*))(Il2CppBase() + 0x10E4C54))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdReady(uintptr_t value) {
		return ((R (*)(IronSourceRewardedVideoManualAndroid*, uintptr_t))(Il2CppBase() + 0x10E4CF4))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdReady(uintptr_t value) {
		return ((R (*)(IronSourceRewardedVideoManualAndroid*, uintptr_t))(Il2CppBase() + 0x10E4D94))(this, value);
	}
	template <typename R = void> R onRewardedVideoAdReady() {
		return ((R (*)(IronSourceRewardedVideoManualAndroid*))(Il2CppBase() + 0x10E4E34))(this);
	}
	template <typename R = void> R onRewardedVideoAdLoadFailed(Il2CppString* args) {
		return ((R (*)(IronSourceRewardedVideoManualAndroid*, Il2CppString*))(Il2CppBase() + 0x10E4E48))(this, args);
	}

};

