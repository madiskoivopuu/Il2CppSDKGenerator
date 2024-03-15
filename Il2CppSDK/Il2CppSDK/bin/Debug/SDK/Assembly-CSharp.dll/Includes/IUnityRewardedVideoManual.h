#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityRewardedVideoManual
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityRewardedVideoManual"));
	}


	template <typename R = void> R add_OnRewardedVideoAdReady(uintptr_t value) {
		return ((R (*)(IUnityRewardedVideoManual*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdReady(uintptr_t value) {
		return ((R (*)(IUnityRewardedVideoManual*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnRewardedVideoAdLoadFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IUnityRewardedVideoManual*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnRewardedVideoAdLoadFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IUnityRewardedVideoManual*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}

};

