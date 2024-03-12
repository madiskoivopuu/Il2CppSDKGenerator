#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceInterstitialLevelPlayAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceInterstitialLevelPlayAndroid"));
	}

	template <typename T = void*> T& OnAdShowFailed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& OnAdLoadFailed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& OnAdReady() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& OnAdOpened() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& OnAdClosed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& OnAdShowSucceeded() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& OnAdClicked() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T add_OnAdShowFailed(void* value) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, void*))(Il2CppBase() + 0x10DB97C))(this, value);
	}
	template <typename T = void> T remove_OnAdShowFailed(void* value) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, void*))(Il2CppBase() + 0x10DBA1C))(this, value);
	}
	template <typename T = void> T add_OnAdLoadFailed(void* value) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, void*))(Il2CppBase() + 0x10DBABC))(this, value);
	}
	template <typename T = void> T remove_OnAdLoadFailed(void* value) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, void*))(Il2CppBase() + 0x10DBB5C))(this, value);
	}
	template <typename T = void> T add_OnAdReady(void* value) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, void*))(Il2CppBase() + 0x10DBBFC))(this, value);
	}
	template <typename T = void> T remove_OnAdReady(void* value) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, void*))(Il2CppBase() + 0x10DBC9C))(this, value);
	}
	template <typename T = void> T add_OnAdOpened(void* value) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, void*))(Il2CppBase() + 0x10DBD3C))(this, value);
	}
	template <typename T = void> T remove_OnAdOpened(void* value) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, void*))(Il2CppBase() + 0x10DBDDC))(this, value);
	}
	template <typename T = void> T add_OnAdClosed(void* value) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, void*))(Il2CppBase() + 0x10DBE7C))(this, value);
	}
	template <typename T = void> T remove_OnAdClosed(void* value) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, void*))(Il2CppBase() + 0x10DBF1C))(this, value);
	}
	template <typename T = void> T add_OnAdShowSucceeded(void* value) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, void*))(Il2CppBase() + 0x10DBFBC))(this, value);
	}
	template <typename T = void> T remove_OnAdShowSucceeded(void* value) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, void*))(Il2CppBase() + 0x10DC05C))(this, value);
	}
	template <typename T = void> T add_OnAdClicked(void* value) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, void*))(Il2CppBase() + 0x10DC0FC))(this, value);
	}
	template <typename T = void> T remove_OnAdClicked(void* value) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, void*))(Il2CppBase() + 0x10DC19C))(this, value);
	}
	template <typename T = void> T onAdShowFailed(Il2CppString* description, Il2CppString* data) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10DC23C))(this, description, data);
	}
	template <typename T = void> T onAdReady(Il2CppString* data) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x10DC2FC))(this, data);
	}
	template <typename T = void> T onAdOpened(Il2CppString* data) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x10DC3A4))(this, data);
	}
	template <typename T = void> T onAdClosed(Il2CppString* data) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x10DC44C))(this, data);
	}
	template <typename T = void> T onAdShowSucceeded(Il2CppString* data) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x10DC4F4))(this, data);
	}
	template <typename T = void> T onAdClicked(Il2CppString* data) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x10DC59C))(this, data);
	}
	template <typename T = void> T onAdLoadFailed(Il2CppString* args) {
		return ((T (*)(IronSourceInterstitialLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x10DC644))(this, args);
	}

};

}
