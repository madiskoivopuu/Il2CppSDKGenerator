#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceInterstitialLevelPlayAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceInterstitialLevelPlayAndroid"));
	}

	 Action2<IronSourceError*, IronSourceAdInfo*>*& OnAdShowFailed() {
		return *(Action2<IronSourceError*, IronSourceAdInfo*>**)((uintptr_t)this + 0x20);
	}
	 Action1<IronSourceError*>*& OnAdLoadFailed() {
		return *(Action1<IronSourceError*>**)((uintptr_t)this + 0x28);
	}
	 Action1<IronSourceAdInfo*>*& OnAdReady() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x30);
	}
	 Action1<IronSourceAdInfo*>*& OnAdOpened() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x38);
	}
	 Action1<IronSourceAdInfo*>*& OnAdClosed() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x40);
	}
	 Action1<IronSourceAdInfo*>*& OnAdShowSucceeded() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x48);
	}
	 Action1<IronSourceAdInfo*>*& OnAdClicked() {
		return *(Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R add_OnAdShowFailed(Action2<IronSourceError*, IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Action2<IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10DB97C))(this, value);
	}
	template <typename R = void> R remove_OnAdShowFailed(Action2<IronSourceError*, IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Action2<IronSourceError*, IronSourceAdInfo*>*))(Il2CppBase() + 0x10DBA1C))(this, value);
	}
	template <typename R = void> R add_OnAdLoadFailed(Action1<IronSourceError*>* value) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Action1<IronSourceError*>*))(Il2CppBase() + 0x10DBABC))(this, value);
	}
	template <typename R = void> R remove_OnAdLoadFailed(Action1<IronSourceError*>* value) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Action1<IronSourceError*>*))(Il2CppBase() + 0x10DBB5C))(this, value);
	}
	template <typename R = void> R add_OnAdReady(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10DBBFC))(this, value);
	}
	template <typename R = void> R remove_OnAdReady(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10DBC9C))(this, value);
	}
	template <typename R = void> R add_OnAdOpened(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10DBD3C))(this, value);
	}
	template <typename R = void> R remove_OnAdOpened(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10DBDDC))(this, value);
	}
	template <typename R = void> R add_OnAdClosed(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10DBE7C))(this, value);
	}
	template <typename R = void> R remove_OnAdClosed(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10DBF1C))(this, value);
	}
	template <typename R = void> R add_OnAdShowSucceeded(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10DBFBC))(this, value);
	}
	template <typename R = void> R remove_OnAdShowSucceeded(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10DC05C))(this, value);
	}
	template <typename R = void> R add_OnAdClicked(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10DC0FC))(this, value);
	}
	template <typename R = void> R remove_OnAdClicked(Action1<IronSourceAdInfo*>* value) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Action1<IronSourceAdInfo*>*))(Il2CppBase() + 0x10DC19C))(this, value);
	}
	template <typename R = void> R onAdShowFailed(Il2CppString* description, Il2CppString* data) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10DC23C))(this, description, data);
	}
	template <typename R = void> R onAdReady(Il2CppString* data) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x10DC2FC))(this, data);
	}
	template <typename R = void> R onAdOpened(Il2CppString* data) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x10DC3A4))(this, data);
	}
	template <typename R = void> R onAdClosed(Il2CppString* data) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x10DC44C))(this, data);
	}
	template <typename R = void> R onAdShowSucceeded(Il2CppString* data) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x10DC4F4))(this, data);
	}
	template <typename R = void> R onAdClicked(Il2CppString* data) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x10DC59C))(this, data);
	}
	template <typename R = void> R onAdLoadFailed(Il2CppString* args) {
		return ((R (*)(IronSourceInterstitialLevelPlayAndroid*, Il2CppString*))(Il2CppBase() + 0x10DC644))(this, args);
	}

};

