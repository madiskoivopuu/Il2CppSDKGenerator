#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceRewardedVideoLevelPlayAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceRewardedVideoLevelPlayAndroid"));
	}

	template <typename T = void*> T& OnAdShowFailed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& OnAdOpened() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& OnAdClosed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& OnAdRewarded() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& OnAdClicked() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& OnAdAvailable() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& OnAdUnavailable() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T add_OnAdShowFailed(void* value) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*, void*))(Il2CppBase() + 0x10E3514))(this, value);
	}
	template <typename T = void> T remove_OnAdShowFailed(void* value) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*, void*))(Il2CppBase() + 0x10E35B4))(this, value);
	}
	template <typename T = void> T add_OnAdOpened(void* value) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*, void*))(Il2CppBase() + 0x10E3654))(this, value);
	}
	template <typename T = void> T remove_OnAdOpened(void* value) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*, void*))(Il2CppBase() + 0x10E36F4))(this, value);
	}
	template <typename T = void> T add_OnAdClosed(void* value) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*, void*))(Il2CppBase() + 0x10E3794))(this, value);
	}
	template <typename T = void> T remove_OnAdClosed(void* value) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*, void*))(Il2CppBase() + 0x10E3834))(this, value);
	}
	template <typename T = void> T add_OnAdRewarded(void* value) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*, void*))(Il2CppBase() + 0x10E38D4))(this, value);
	}
	template <typename T = void> T remove_OnAdRewarded(void* value) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*, void*))(Il2CppBase() + 0x10E3974))(this, value);
	}
	template <typename T = void> T add_OnAdClicked(void* value) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*, void*))(Il2CppBase() + 0x10E3A14))(this, value);
	}
	template <typename T = void> T remove_OnAdClicked(void* value) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*, void*))(Il2CppBase() + 0x10E3AB4))(this, value);
	}
	template <typename T = void> T add_OnAdAvailable(void* value) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*, void*))(Il2CppBase() + 0x10E3B54))(this, value);
	}
	template <typename T = void> T remove_OnAdAvailable(void* value) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*, void*))(Il2CppBase() + 0x10E3BF4))(this, value);
	}
	template <typename T = void> T add_OnAdUnavailable(uintptr_t value) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*, uintptr_t))(Il2CppBase() + 0x10E3C94))(this, value);
	}
	template <typename T = void> T remove_OnAdUnavailable(uintptr_t value) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*, uintptr_t))(Il2CppBase() + 0x10E3D34))(this, value);
	}
	template <typename T = void> T onAdShowFailed(Il2CppString* description, Il2CppString* data) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10E3DD4))(this, description, data);
	}
	template <typename T = void> T onAdClosed(Il2CppString* data) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x10E3E94))(this, data);
	}
	template <typename T = void> T onAdOpened(Il2CppString* data) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x10E3F3C))(this, data);
	}
	template <typename T = void> T onAdRewarded(Il2CppString* description, Il2CppString* data) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10E3FE4))(this, description, data);
	}
	template <typename T = void> T onAdClicked(Il2CppString* description, Il2CppString* data) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10E40B4))(this, description, data);
	}
	template <typename T = void> T onAdAvailable(Il2CppString* data) {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x10E4184))(this, data);
	}
	template <typename T = void> T onAdUnavailable() {
		return ((T (*)(IronSourceRewardedVideoLevelPlayAndroid*))(Il2CppBase() + 0x10E422C))(this);
	}

};

}
