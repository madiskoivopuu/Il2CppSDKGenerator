#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceBannerLevelPlayAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceBannerLevelPlayAndroid"));
	}

	template <typename T = Action1IronSourceAdInfo*>*> T& OnAdLoaded() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Action1IronSourceAdInfo*>*> T& OnAdLeftApplication() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Action1IronSourceAdInfo*>*> T& OnAdScreenDismissed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Action1IronSourceAdInfo*>*> T& OnAdScreenPresented() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Action1IronSourceAdInfo*>*> T& OnAdClicked() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Action1IronSourceError*>*> T& OnAdLoadFailed() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T add_OnAdLoaded(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IronSourceBannerLevelPlayAndroid*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x124F664))(this, value);
	}
	template <typename T = void> T remove_OnAdLoaded(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IronSourceBannerLevelPlayAndroid*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x124F704))(this, value);
	}
	template <typename T = void> T add_OnAdLeftApplication(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IronSourceBannerLevelPlayAndroid*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x124F7A4))(this, value);
	}
	template <typename T = void> T remove_OnAdLeftApplication(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IronSourceBannerLevelPlayAndroid*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x124F844))(this, value);
	}
	template <typename T = void> T add_OnAdScreenDismissed(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IronSourceBannerLevelPlayAndroid*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x124F8E4))(this, value);
	}
	template <typename T = void> T remove_OnAdScreenDismissed(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IronSourceBannerLevelPlayAndroid*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x124F984))(this, value);
	}
	template <typename T = void> T add_OnAdScreenPresented(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IronSourceBannerLevelPlayAndroid*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x124FA24))(this, value);
	}
	template <typename T = void> T remove_OnAdScreenPresented(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IronSourceBannerLevelPlayAndroid*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x124FAC4))(this, value);
	}
	template <typename T = void> T add_OnAdClicked(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IronSourceBannerLevelPlayAndroid*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x124FB64))(this, value);
	}
	template <typename T = void> T remove_OnAdClicked(Action1IronSourceAdInfo*>* value) {
		return ((T (*)(IronSourceBannerLevelPlayAndroid*, Action1IronSourceAdInfo*>*))(Il2CppBase() + 0x124FC04))(this, value);
	}
	template <typename T = void> T add_OnAdLoadFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IronSourceBannerLevelPlayAndroid*, Action1IronSourceError*>*))(Il2CppBase() + 0x124FCA4))(this, value);
	}
	template <typename T = void> T remove_OnAdLoadFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IronSourceBannerLevelPlayAndroid*, Action1IronSourceError*>*))(Il2CppBase() + 0x124FD44))(this, value);
	}
	template <typename T = void> T onAdLoaded(Il2CppString* data) {
		return ((T (*)(IronSourceBannerLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x124FDE4))(this, data);
	}
	template <typename T = void> T onAdLoadFailed(Il2CppString* args) {
		return ((T (*)(IronSourceBannerLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x124FE88))(this, args);
	}
	template <typename T = void> T onAdClicked(Il2CppString* data) {
		return ((T (*)(IronSourceBannerLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x124FF14))(this, data);
	}
	template <typename T = void> T onAdScreenPresented(Il2CppString* data) {
		return ((T (*)(IronSourceBannerLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x124FFB8))(this, data);
	}
	template <typename T = void> T onAdScreenDismissed(Il2CppString* data) {
		return ((T (*)(IronSourceBannerLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x125005C))(this, data);
	}
	template <typename T = void> T onAdLeftApplication(Il2CppString* data) {
		return ((T (*)(IronSourceBannerLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x1250100))(this, data);
	}

};

