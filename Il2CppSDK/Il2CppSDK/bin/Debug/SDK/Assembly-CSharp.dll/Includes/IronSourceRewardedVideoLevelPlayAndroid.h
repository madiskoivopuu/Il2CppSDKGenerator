#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceRewardedVideoLevelPlayAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceRewardedVideoLevelPlayAndroid"));
	}

	 Action2<IronSourceError*, IronSourceAdInfo*>*& OnAdShowFailed() {
		return *(Action2<IronSourceError*, IronSourceAdInfo*>**)((uintptr_t)this + 0x20);
	}
	 Action1<IronSourceAdInfo*>*& OnAdOpened() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x28);
	}
	 Action1<IronSourceAdInfo*>*& OnAdClosed() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x30);
	}
	 Action2<IronSourcePlacement*, IronSourceAdInfo*>*& OnAdRewarded() {
		return *(Action2<IronSourcePlacement*, IronSourceAdInfo*>**)((uintptr_t)this + 0x38);
	}
	 Action2<IronSourcePlacement*, IronSourceAdInfo*>*& OnAdClicked() {
		return *(Action2<IronSourcePlacement*, IronSourceAdInfo*>**)((uintptr_t)this + 0x40);
	}
	 Action1<IronSourceAdInfo*>*& OnAdAvailable() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& OnAdUnavailable() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R add_OnAdShowFailed(Action2<IronSourceError*, IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action2<IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E3514))(this, value);
	}
	template <typename R = void> R remove_OnAdShowFailed(Action2<IronSourceError*, IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action2<IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E35B4))(this, value);
	}
	template <typename R = void> R add_OnAdOpened(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10E3654))(this, value);
	}
	template <typename R = void> R remove_OnAdOpened(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10E36F4))(this, value);
	}
	template <typename R = void> R add_OnAdClosed(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10E3794))(this, value);
	}
	template <typename R = void> R remove_OnAdClosed(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10E3834))(this, value);
	}
	template <typename R = void> R add_OnAdRewarded(Action2<IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action2<IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E38D4))(this, value);
	}
	template <typename R = void> R remove_OnAdRewarded(Action2<IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action2<IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E3974))(this, value);
	}
	template <typename R = void> R add_OnAdClicked(Action2<IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action2<IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E3A14))(this, value);
	}
	template <typename R = void> R remove_OnAdClicked(Action2<IronSourcePlacement*, IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action2<IronSourcePlacement*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10E3AB4))(this, value);
	}
	template <typename R = void> R add_OnAdAvailable(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10E3B54))(this, value);
	}
	template <typename R = void> R remove_OnAdAvailable(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceRewardedVideoLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10E3BF4))(this, value);
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

