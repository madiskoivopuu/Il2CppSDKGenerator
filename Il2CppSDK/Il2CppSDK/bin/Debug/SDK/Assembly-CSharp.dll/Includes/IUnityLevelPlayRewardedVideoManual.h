#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityLevelPlayRewardedVideoManual
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityLevelPlayRewardedVideoManual"));
	}


	template <typename R = void> R add_OnAdReady(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideoManual*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdReady(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideoManual*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnAdLoadFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideoManual*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdLoadFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IUnityLevelPlayRewardedVideoManual*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}

};
