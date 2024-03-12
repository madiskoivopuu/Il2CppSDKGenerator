#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceOfferwallAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceOfferwallAndroid"));
	}

	template <typename T = void*> T& OnOfferwallShowFailed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& OnOfferwallOpened() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& OnOfferwallClosed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& OnGetOfferwallCreditsFailed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& OnOfferwallAdCredited() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& OnOfferwallAvailable() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T add_OnOfferwallShowFailed(void* value) {
		return ((T (*)(IronSourceOfferwallAndroid*, void*))(Il2CppBase() + 0x10DD09C))(this, value);
	}
	template <typename T = void> T remove_OnOfferwallShowFailed(void* value) {
		return ((T (*)(IronSourceOfferwallAndroid*, void*))(Il2CppBase() + 0x10DD13C))(this, value);
	}
	template <typename T = void> T add_OnOfferwallOpened(uintptr_t value) {
		return ((T (*)(IronSourceOfferwallAndroid*, uintptr_t))(Il2CppBase() + 0x10DD1DC))(this, value);
	}
	template <typename T = void> T remove_OnOfferwallOpened(uintptr_t value) {
		return ((T (*)(IronSourceOfferwallAndroid*, uintptr_t))(Il2CppBase() + 0x10DD27C))(this, value);
	}
	template <typename T = void> T add_OnOfferwallClosed(uintptr_t value) {
		return ((T (*)(IronSourceOfferwallAndroid*, uintptr_t))(Il2CppBase() + 0x10DD31C))(this, value);
	}
	template <typename T = void> T remove_OnOfferwallClosed(uintptr_t value) {
		return ((T (*)(IronSourceOfferwallAndroid*, uintptr_t))(Il2CppBase() + 0x10DD3BC))(this, value);
	}
	template <typename T = void> T add_OnGetOfferwallCreditsFailed(void* value) {
		return ((T (*)(IronSourceOfferwallAndroid*, void*))(Il2CppBase() + 0x10DD45C))(this, value);
	}
	template <typename T = void> T remove_OnGetOfferwallCreditsFailed(void* value) {
		return ((T (*)(IronSourceOfferwallAndroid*, void*))(Il2CppBase() + 0x10DD4FC))(this, value);
	}
	template <typename T = void> T add_OnOfferwallAdCredited(void* value) {
		return ((T (*)(IronSourceOfferwallAndroid*, void*))(Il2CppBase() + 0x10DD59C))(this, value);
	}
	template <typename T = void> T remove_OnOfferwallAdCredited(void* value) {
		return ((T (*)(IronSourceOfferwallAndroid*, void*))(Il2CppBase() + 0x10DD63C))(this, value);
	}
	template <typename T = void> T add_OnOfferwallAvailable(void* value) {
		return ((T (*)(IronSourceOfferwallAndroid*, void*))(Il2CppBase() + 0x10DD6DC))(this, value);
	}
	template <typename T = void> T remove_OnOfferwallAvailable(void* value) {
		return ((T (*)(IronSourceOfferwallAndroid*, void*))(Il2CppBase() + 0x10DD77C))(this, value);
	}
	template <typename T = void> T onOfferwallOpened() {
		return ((T (*)(IronSourceOfferwallAndroid*))(Il2CppBase() + 0x10DD81C))(this);
	}
	template <typename T = void> T onOfferwallShowFailed(Il2CppString* description) {
		return ((T (*)(IronSourceOfferwallAndroid*, Il2CppString*))(Il2CppBase() + 0x10DD830))(this, description);
	}
	template <typename T = void> T onOfferwallClosed() {
		return ((T (*)(IronSourceOfferwallAndroid*))(Il2CppBase() + 0x10DD8B8))(this);
	}
	template <typename T = void> T onGetOfferwallCreditsFailed(Il2CppString* description) {
		return ((T (*)(IronSourceOfferwallAndroid*, Il2CppString*))(Il2CppBase() + 0x10DD8CC))(this, description);
	}
	template <typename T = void> T onOfferwallAdCredited(Il2CppString* json) {
		return ((T (*)(IronSourceOfferwallAndroid*, Il2CppString*))(Il2CppBase() + 0x10DD954))(this, json);
	}
	template <typename T = void> T onOfferwallAvailable(Il2CppString* stringAvailable) {
		return ((T (*)(IronSourceOfferwallAndroid*, Il2CppString*))(Il2CppBase() + 0x10DDA1C))(this, stringAvailable);
	}

};

}
