#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceBannerAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceBannerAndroid"));
	}

	template <typename R = uintptr_t> R& OnBannerAdLoaded() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& OnBannerAdLeftApplication() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& OnBannerAdScreenDismissed() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& OnBannerAdScreenPresented() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& OnBannerAdClicked() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Action1IronSourceError*>*& OnBannerAdLoadFailed() {
		return *(Action1IronSourceError*>**)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R add_OnBannerAdLoaded(uintptr_t value) {
		return ((R (*)(IronSourceBannerAndroid*, uintptr_t))(Il2CppBase() + 0x124C6FC))(this, value);
	}
	template <typename R = void> R remove_OnBannerAdLoaded(uintptr_t value) {
		return ((R (*)(IronSourceBannerAndroid*, uintptr_t))(Il2CppBase() + 0x124C79C))(this, value);
	}
	template <typename R = void> R add_OnBannerAdLeftApplication(uintptr_t value) {
		return ((R (*)(IronSourceBannerAndroid*, uintptr_t))(Il2CppBase() + 0x124C83C))(this, value);
	}
	template <typename R = void> R remove_OnBannerAdLeftApplication(uintptr_t value) {
		return ((R (*)(IronSourceBannerAndroid*, uintptr_t))(Il2CppBase() + 0x124C8DC))(this, value);
	}
	template <typename R = void> R add_OnBannerAdScreenDismissed(uintptr_t value) {
		return ((R (*)(IronSourceBannerAndroid*, uintptr_t))(Il2CppBase() + 0x124C97C))(this, value);
	}
	template <typename R = void> R remove_OnBannerAdScreenDismissed(uintptr_t value) {
		return ((R (*)(IronSourceBannerAndroid*, uintptr_t))(Il2CppBase() + 0x124CA1C))(this, value);
	}
	template <typename R = void> R add_OnBannerAdScreenPresented(uintptr_t value) {
		return ((R (*)(IronSourceBannerAndroid*, uintptr_t))(Il2CppBase() + 0x124CABC))(this, value);
	}
	template <typename R = void> R remove_OnBannerAdScreenPresented(uintptr_t value) {
		return ((R (*)(IronSourceBannerAndroid*, uintptr_t))(Il2CppBase() + 0x124CB5C))(this, value);
	}
	template <typename R = void> R add_OnBannerAdClicked(uintptr_t value) {
		return ((R (*)(IronSourceBannerAndroid*, uintptr_t))(Il2CppBase() + 0x124CBFC))(this, value);
	}
	template <typename R = void> R remove_OnBannerAdClicked(uintptr_t value) {
		return ((R (*)(IronSourceBannerAndroid*, uintptr_t))(Il2CppBase() + 0x124CC9C))(this, value);
	}
	template <typename R = void> R add_OnBannerAdLoadFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IronSourceBannerAndroid*, Action1IronSourceError*>*))(Il2CppBase() + 0x124CD3C))(this, value);
	}
	template <typename R = void> R remove_OnBannerAdLoadFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IronSourceBannerAndroid*, Action1IronSourceError*>*))(Il2CppBase() + 0x124CDDC))(this, value);
	}
	template <typename R = void> R onBannerAdLoaded() {
		return ((R (*)(IronSourceBannerAndroid*))(Il2CppBase() + 0x124D6D0))(this);
	}
	template <typename R = void> R onBannerAdLoadFailed(Il2CppString* args) {
		return ((R (*)(IronSourceBannerAndroid*, Il2CppString*))(Il2CppBase() + 0x124D6E4))(this, args);
	}
	template <typename R = void> R onBannerAdClicked() {
		return ((R (*)(IronSourceBannerAndroid*))(Il2CppBase() + 0x124D770))(this);
	}
	template <typename R = void> R onBannerAdScreenPresented() {
		return ((R (*)(IronSourceBannerAndroid*))(Il2CppBase() + 0x124D784))(this);
	}
	template <typename R = void> R onBannerAdScreenDismissed() {
		return ((R (*)(IronSourceBannerAndroid*))(Il2CppBase() + 0x124D798))(this);
	}
	template <typename R = void> R onBannerAdLeftApplication() {
		return ((R (*)(IronSourceBannerAndroid*))(Il2CppBase() + 0x124D7AC))(this);
	}

};

