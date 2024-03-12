#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceBannerAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceBannerAndroid"));
	}

	template <typename T = uintptr_t> T& OnBannerAdLoaded() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& OnBannerAdLeftApplication() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& OnBannerAdScreenDismissed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& OnBannerAdScreenPresented() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& OnBannerAdClicked() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& OnBannerAdLoadFailed() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T add_OnBannerAdLoaded(uintptr_t value) {
		return ((T (*)(IronSourceBannerAndroid*, uintptr_t))(Il2CppBase() + 0x124C6FC))(this, value);
	}
	template <typename T = void> T remove_OnBannerAdLoaded(uintptr_t value) {
		return ((T (*)(IronSourceBannerAndroid*, uintptr_t))(Il2CppBase() + 0x124C79C))(this, value);
	}
	template <typename T = void> T add_OnBannerAdLeftApplication(uintptr_t value) {
		return ((T (*)(IronSourceBannerAndroid*, uintptr_t))(Il2CppBase() + 0x124C83C))(this, value);
	}
	template <typename T = void> T remove_OnBannerAdLeftApplication(uintptr_t value) {
		return ((T (*)(IronSourceBannerAndroid*, uintptr_t))(Il2CppBase() + 0x124C8DC))(this, value);
	}
	template <typename T = void> T add_OnBannerAdScreenDismissed(uintptr_t value) {
		return ((T (*)(IronSourceBannerAndroid*, uintptr_t))(Il2CppBase() + 0x124C97C))(this, value);
	}
	template <typename T = void> T remove_OnBannerAdScreenDismissed(uintptr_t value) {
		return ((T (*)(IronSourceBannerAndroid*, uintptr_t))(Il2CppBase() + 0x124CA1C))(this, value);
	}
	template <typename T = void> T add_OnBannerAdScreenPresented(uintptr_t value) {
		return ((T (*)(IronSourceBannerAndroid*, uintptr_t))(Il2CppBase() + 0x124CABC))(this, value);
	}
	template <typename T = void> T remove_OnBannerAdScreenPresented(uintptr_t value) {
		return ((T (*)(IronSourceBannerAndroid*, uintptr_t))(Il2CppBase() + 0x124CB5C))(this, value);
	}
	template <typename T = void> T add_OnBannerAdClicked(uintptr_t value) {
		return ((T (*)(IronSourceBannerAndroid*, uintptr_t))(Il2CppBase() + 0x124CBFC))(this, value);
	}
	template <typename T = void> T remove_OnBannerAdClicked(uintptr_t value) {
		return ((T (*)(IronSourceBannerAndroid*, uintptr_t))(Il2CppBase() + 0x124CC9C))(this, value);
	}
	template <typename T = void> T add_OnBannerAdLoadFailed(void* value) {
		return ((T (*)(IronSourceBannerAndroid*, void*))(Il2CppBase() + 0x124CD3C))(this, value);
	}
	template <typename T = void> T remove_OnBannerAdLoadFailed(void* value) {
		return ((T (*)(IronSourceBannerAndroid*, void*))(Il2CppBase() + 0x124CDDC))(this, value);
	}
	template <typename T = void> T onBannerAdLoaded() {
		return ((T (*)(IronSourceBannerAndroid*))(Il2CppBase() + 0x124D6D0))(this);
	}
	template <typename T = void> T onBannerAdLoadFailed(Il2CppString* args) {
		return ((T (*)(IronSourceBannerAndroid*, Il2CppString*))(Il2CppBase() + 0x124D6E4))(this, args);
	}
	template <typename T = void> T onBannerAdClicked() {
		return ((T (*)(IronSourceBannerAndroid*))(Il2CppBase() + 0x124D770))(this);
	}
	template <typename T = void> T onBannerAdScreenPresented() {
		return ((T (*)(IronSourceBannerAndroid*))(Il2CppBase() + 0x124D784))(this);
	}
	template <typename T = void> T onBannerAdScreenDismissed() {
		return ((T (*)(IronSourceBannerAndroid*))(Il2CppBase() + 0x124D798))(this);
	}
	template <typename T = void> T onBannerAdLeftApplication() {
		return ((T (*)(IronSourceBannerAndroid*))(Il2CppBase() + 0x124D7AC))(this);
	}

};

}
