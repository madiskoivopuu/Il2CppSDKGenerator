#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceRewardedVideoManualAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceRewardedVideoManualAndroid"));
	}

	template <typename T = void*> T& OnRewardedVideoAdLoadFailed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& OnRewardedVideoAdReady() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T add_OnRewardedVideoAdLoadFailed(void* value) {
		return ((T (*)(IronSourceRewardedVideoManualAndroid*, void*))(Il2CppBase() + 0x10E4BB4))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdLoadFailed(void* value) {
		return ((T (*)(IronSourceRewardedVideoManualAndroid*, void*))(Il2CppBase() + 0x10E4C54))(this, value);
	}
	template <typename T = void> T add_OnRewardedVideoAdReady(uintptr_t value) {
		return ((T (*)(IronSourceRewardedVideoManualAndroid*, uintptr_t))(Il2CppBase() + 0x10E4CF4))(this, value);
	}
	template <typename T = void> T remove_OnRewardedVideoAdReady(uintptr_t value) {
		return ((T (*)(IronSourceRewardedVideoManualAndroid*, uintptr_t))(Il2CppBase() + 0x10E4D94))(this, value);
	}
	template <typename T = void> T onRewardedVideoAdReady() {
		return ((T (*)(IronSourceRewardedVideoManualAndroid*))(Il2CppBase() + 0x10E4E34))(this);
	}
	template <typename T = void> T onRewardedVideoAdLoadFailed(Il2CppString* args) {
		return ((T (*)(IronSourceRewardedVideoManualAndroid*, Il2CppString*))(Il2CppBase() + 0x10E4E48))(this, args);
	}

};

}
