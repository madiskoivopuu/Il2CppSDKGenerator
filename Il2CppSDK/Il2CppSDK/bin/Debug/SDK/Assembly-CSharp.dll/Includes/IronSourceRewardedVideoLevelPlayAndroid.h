#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceRewardedVideoLevelPlayAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceRewardedVideoLevelPlayAndroid"));
	}

	 Action2IronSourceError*, IronSourceAdInfo*>*& OnAdShowFailed() {
		return *(Action2IronSourceError*, IronSourceAdInfo*>**)((uintptr_t)this + 0x20);
	}
	 Action1IronSourceAdInfo*>*& OnAdOpened() {
		return *(Action1IronSourceAdInfo*>**)((uintptr_t)this + 0x28);
	}
	 Action1IronSourceAdInfo*>*& OnAdClosed() {
		return *(Action1IronSourceAdInfo*>**)((uintptr_t)this + 0x30);
	}
	 Action2IronSourcePlacement*, IronSourceAdInfo*>*& OnAdRewarded() {
		return *(Action2IronSourcePlacement*, IronSourceAdInfo*>**)((uintptr_t)this + 0x38);
	}
	 Action2IronSourcePlacement*, IronSourceAdInfo*>*& OnAdClicked() {
		return *(Action2IronSourcePlacement*, IronSourceAdInfo*>**)((uintptr_t)this + 0x40);
	}
	 Action1IronSourceAdInfo*>*& OnAdAvailable() {
		return *(Action1IronSourceAdInfo*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& OnAdUnavailable() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R add_OnAdShowFailed(Action2IronSourceError*, IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action2IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E3514))(this, value);
	}
	template <typename R = void> R remove_OnAdShowFailed(Action2IronSourceError*, IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action2IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E35B4))(this, value);
	}
	template <typename R = void> R add_OnAdOpened(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10E3654))(this, value);
	}
	template <typename R = void> R remove_OnAdOpened(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10E36F4))(this, value);
	}
	template <typename R = void> R add_OnAdClosed(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10E3794))(this, value);
	}
	template <typename R = void> R remove_OnAdClosed(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10E3834))(this, value);
	}
	template <typename R = void> R add_OnAdRewarded(Action2IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action2IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E38D4))(this, value);
	}
	template <typename R = void> R remove_OnAdRewarded(Action2IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action2IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E3974))(this, value);
	}
	template <typename R = void> R add_OnAdClicked(Action2IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action2IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E3A14))(this, value);
	}
	template <typename R = void> R remove_OnAdClicked(Action2IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action2IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E3AB4))(this, value);
	}
	template <typename R = void> R add_OnAdAvailable(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10E3B54))(this, value);
	}
	template <typename R = void> R remove_OnAdAvailable(Action1IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x10E3BF4))(this, value);
	}
	template <typename R = void> R add_OnAdUnavailable(uintptr_t value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, uintptr_t))(Il2CppBase() + 0x10E3C94))(this, value);
	}
	template <typename R = void> R remove_OnAdUnavailable(uintptr_t value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, uintptr_t))(Il2CppBase() + 0x10E3D34))(this, value);
	}
	template <typename R = void> R onAdShowFailed(Il2CppString* description, Il2CppString* data) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10E3DD4))(this, description, data);
	}
	template <typename R = void> R onAdClosed(Il2CppString* data) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x10E3E94))(this, data);
	}
	template <typename R = void> R onAdOpened(Il2CppString* data) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x10E3F3C))(this, data);
	}
	template <typename R = void> R onAdRewarded(Il2CppString* description, Il2CppString* data) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10E3FE4))(this, description, data);
	}
	template <typename R = void> R onAdClicked(Il2CppString* description, Il2CppString* data) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10E40B4))(this, description, data);
	}
	template <typename R = void> R onAdAvailable(Il2CppString* data) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x10E4184))(this, data);
	}
	template <typename R = void> R onAdUnavailable() {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*))(Il2CppBase() + 0x10E422C))(this);
	}

};

