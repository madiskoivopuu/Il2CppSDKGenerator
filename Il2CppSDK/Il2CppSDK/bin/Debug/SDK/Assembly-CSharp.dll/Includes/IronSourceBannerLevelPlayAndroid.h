#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceBannerLevelPlayAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceBannerLevelPlayAndroid"));
	}

	 Action1<IronSourceAdInfo*>*& OnAdLoaded() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x20);
	}
	 Action1<IronSourceAdInfo*>*& OnAdLeftApplication() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x28);
	}
	 Action1<IronSourceAdInfo*>*& OnAdScreenDismissed() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x30);
	}
	 Action1<IronSourceAdInfo*>*& OnAdScreenPresented() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x38);
	}
	 Action1<IronSourceAdInfo*>*& OnAdClicked() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x40);
	}
	 Action1<IronSourceError*>*& OnAdLoadFailed() {
		return *(Action1<IronSourceError*>**)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R add_OnAdLoaded(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceBannerLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x124F664))(this, value);
	}
	template <typename R = void> R remove_OnAdLoaded(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceBannerLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x124F704))(this, value);
	}
	template <typename R = void> R add_OnAdLeftApplication(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceBannerLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x124F7A4))(this, value);
	}
	template <typename R = void> R remove_OnAdLeftApplication(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceBannerLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x124F844))(this, value);
	}
	template <typename R = void> R add_OnAdScreenDismissed(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceBannerLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x124F8E4))(this, value);
	}
	template <typename R = void> R remove_OnAdScreenDismissed(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceBannerLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x124F984))(this, value);
	}
	template <typename R = void> R add_OnAdScreenPresented(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceBannerLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x124FA24))(this, value);
	}
	template <typename R = void> R remove_OnAdScreenPresented(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceBannerLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x124FAC4))(this, value);
	}
	template <typename R = void> R add_OnAdClicked(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceBannerLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x124FB64))(this, value);
	}
	template <typename R = void> R remove_OnAdClicked(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceBannerLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x124FC04))(this, value);
	}
	template <typename R = void> R add_OnAdLoadFailed(Action1<IronSourceError*>* value) {
		return ((R (*)(IronSourceBannerLevelPlayAndroid*, Action1<IronSourceError*>*))(Il2CppBase() + 0x124FCA4))(this, value);
	}
	template <typename R = void> R remove_OnAdLoadFailed(Action1<IronSourceError*>* value) {
		return ((R (*)(IronSourceBannerLevelPlayAndroid*, Action1<IronSourceError*>*))(Il2CppBase() + 0x124FD44))(this, value);
	}
	template <typename R = void> R onAdLoaded(Il2CppString* data) {
		return ((R (*)(IronSourceBannerLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x124FDE4))(this, data);
	}
	template <typename R = void> R onAdLoadFailed(Il2CppString* args) {
		return ((R (*)(IronSourceBannerLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x124FE88))(this, args);
	}
	template <typename R = void> R onAdClicked(Il2CppString* data) {
		return ((R (*)(IronSourceBannerLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x124FF14))(this, data);
	}
	template <typename R = void> R onAdScreenPresented(Il2CppString* data) {
		return ((R (*)(IronSourceBannerLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x124FFB8))(this, data);
	}
	template <typename R = void> R onAdScreenDismissed(Il2CppString* data) {
		return ((R (*)(IronSourceBannerLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x125005C))(this, data);
	}
	template <typename R = void> R onAdLeftApplication(Il2CppString* data) {
		return ((R (*)(IronSourceBannerLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x1250100))(this, data);
	}

};

