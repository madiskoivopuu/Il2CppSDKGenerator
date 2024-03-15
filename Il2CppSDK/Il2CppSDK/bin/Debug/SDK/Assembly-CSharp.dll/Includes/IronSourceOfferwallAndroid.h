#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceOfferwallAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceOfferwallAndroid"));
	}

	 Action1<IronSourceError*>*& OnOfferwallShowFailed() {
		return *(Action1<IronSourceError*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& OnOfferwallOpened() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& OnOfferwallClosed() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	 Action1<IronSourceError*>*& OnGetOfferwallCreditsFailed() {
		return *(Action1<IronSourceError*>**)((uintptr_t)this + 0x38);
	}
	 Action1<Il2CppDictionary<Il2CppString*, Il2CppObject*>*>*& OnOfferwallAdCredited() {
		return *(Action1<Il2CppDictionary<Il2CppString*, Il2CppObject*>*>**)((uintptr_t)this + 0x40);
	}
	 Action1<bool>*& OnOfferwallAvailable() {
		return *(Action1<bool>**)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R add_OnOfferwallShowFailed(Action1<IronSourceError*>* value) {
		return ((R (*)(IronSourceOfferwallAndroid*, Action1<IronSourceError*>*))(Il2CppBase() + 0x10DD09C))(this, value);
	}
	template <typename R = void> R remove_OnOfferwallShowFailed(Action1<IronSourceError*>* value) {
		return ((R (*)(IronSourceOfferwallAndroid*, Action1<IronSourceError*>*))(Il2CppBase() + 0x10DD13C))(this, value);
	}
	template <typename R = void> R add_OnOfferwallOpened(uintptr_t value) {
		return ((R (*)(IronSourceOfferwallAndroid*, uintptr_t))(Il2CppBase() + 0x10DD1DC))(this, value);
	}
	template <typename R = void> R remove_OnOfferwallOpened(uintptr_t value) {
		return ((R (*)(IronSourceOfferwallAndroid*, uintptr_t))(Il2CppBase() + 0x10DD27C))(this, value);
	}
	template <typename R = void> R add_OnOfferwallClosed(uintptr_t value) {
		return ((R (*)(IronSourceOfferwallAndroid*, uintptr_t))(Il2CppBase() + 0x10DD31C))(this, value);
	}
	template <typename R = void> R remove_OnOfferwallClosed(uintptr_t value) {
		return ((R (*)(IronSourceOfferwallAndroid*, uintptr_t))(Il2CppBase() + 0x10DD3BC))(this, value);
	}
	template <typename R = void> R add_OnGetOfferwallCreditsFailed(Action1<IronSourceError*>* value) {
		return ((R (*)(IronSourceOfferwallAndroid*, Action1<IronSourceError*>*))(Il2CppBase() + 0x10DD45C))(this, value);
	}
	template <typename R = void> R remove_OnGetOfferwallCreditsFailed(Action1<IronSourceError*>* value) {
		return ((R (*)(IronSourceOfferwallAndroid*, Action1<IronSourceError*>*))(Il2CppBase() + 0x10DD4FC))(this, value);
	}
	template <typename R = void> R add_OnOfferwallAdCredited(Action1<Il2CppDictionary<Il2CppString*, Il2CppObject*>*>* value) {
		return ((R (*)(IronSourceOfferwallAndroid*, Action1<Il2CppDictionary<Il2CppString*, Il2CppObject*>*>*))(Il2CppBase() + 0x10DD59C))(this, value);
	}
	template <typename R = void> R remove_OnOfferwallAdCredited(Action1<Il2CppDictionary<Il2CppString*, Il2CppObject*>*>* value) {
		return ((R (*)(IronSourceOfferwallAndroid*, Action1<Il2CppDictionary<Il2CppString*, Il2CppObject*>*>*))(Il2CppBase() + 0x10DD63C))(this, value);
	}
	template <typename R = void> R add_OnOfferwallAvailable(Action1<bool>* value) {
		return ((R (*)(IronSourceOfferwallAndroid*, Action1<bool>*))(Il2CppBase() + 0x10DD6DC))(this, value);
	}
	template <typename R = void> R remove_OnOfferwallAvailable(Action1<bool>* value) {
		return ((R (*)(IronSourceOfferwallAndroid*, Action1<bool>*))(Il2CppBase() + 0x10DD77C))(this, value);
	}
	template <typename R = void> R onOfferwallOpened() {
		return ((R (*)(IronSourceOfferwallAndroid*))(Il2CppBase() + 0x10DD81C))(this);
	}
	template <typename R = void> R onOfferwallShowFailed(Il2CppString* description) {
		return ((R (*)(IronSourceOfferwallAndroid*, Il2CppString*))(Il2CppBase() + 0x10DD830))(this, description);
	}
	template <typename R = void> R onOfferwallClosed() {
		return ((R (*)(IronSourceOfferwallAndroid*))(Il2CppBase() + 0x10DD8B8))(this);
	}
	template <typename R = void> R onGetOfferwallCreditsFailed(Il2CppString* description) {
		return ((R (*)(IronSourceOfferwallAndroid*, Il2CppString*))(Il2CppBase() + 0x10DD8CC))(this, description);
	}
	template <typename R = void> R onOfferwallAdCredited(Il2CppString* json) {
		return ((R (*)(IronSourceOfferwallAndroid*, Il2CppString*))(Il2CppBase() + 0x10DD954))(this, json);
	}
	template <typename R = void> R onOfferwallAvailable(Il2CppString* stringAvailable) {
		return ((R (*)(IronSourceOfferwallAndroid*, Il2CppString*))(Il2CppBase() + 0x10DDA1C))(this, stringAvailable);
	}

};

