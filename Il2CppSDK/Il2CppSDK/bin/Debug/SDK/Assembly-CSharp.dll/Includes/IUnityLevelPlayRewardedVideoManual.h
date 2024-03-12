#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityLevelPlayRewardedVideoManual
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityLevelPlayRewardedVideoManual"));
	}


	template <typename T = void> T add_OnAdReady(void* value) {
		return ((T (*)(IUnityLevelPlayRewardedVideoManual*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdReady(void* value) {
		return ((T (*)(IUnityLevelPlayRewardedVideoManual*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdLoadFailed(void* value) {
		return ((T (*)(IUnityLevelPlayRewardedVideoManual*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdLoadFailed(void* value) {
		return ((T (*)(IUnityLevelPlayRewardedVideoManual*, void*))(Il2CppBase() + 0x0))(this, value);
	}

};

}
