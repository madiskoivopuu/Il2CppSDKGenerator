#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityRewardedVideoManual
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityRewardedVideoManual"));
	}


	template <typename T = void> T add_OnRewardedVideoAdReady(uintptr_t value) {
		return ((T (*)(IUnityRewardedVideoManual*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdReady(uintptr_t value) {
		return ((T (*)(IUnityRewardedVideoManual*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdLoadFailed(void* value) {
		return ((T (*)(IUnityRewardedVideoManual*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdLoadFailed(void* value) {
		return ((T (*)(IUnityRewardedVideoManual*, void*))(Il2CppBase() + 0x0))(this, value);
	}

};

}
