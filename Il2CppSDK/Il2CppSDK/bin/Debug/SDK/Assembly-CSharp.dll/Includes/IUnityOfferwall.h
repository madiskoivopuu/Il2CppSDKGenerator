#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityOfferwall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityOfferwall"));
	}


	template <typename R = void> R add_OnOfferwallShowFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IUnityOfferwall*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnOfferwallShowFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IUnityOfferwall*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnOfferwallOpened(uintptr_t value) {
		return ((R (*)(IUnityOfferwall*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnOfferwallOpened(uintptr_t value) {
		return ((R (*)(IUnityOfferwall*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnOfferwallClosed(uintptr_t value) {
		return ((R (*)(IUnityOfferwall*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnOfferwallClosed(uintptr_t value) {
		return ((R (*)(IUnityOfferwall*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnGetOfferwallCreditsFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IUnityOfferwall*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnGetOfferwallCreditsFailed(Action1IronSourceError*>* value) {
		return ((R (*)(IUnityOfferwall*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnOfferwallAdCredited(Action1Il2CppDictionary<Il2CppString*, Il2CppObject*>*>* value) {
		return ((R (*)(IUnityOfferwall*, Action1Il2CppDictionary<Il2CppString*, Il2CppObject*>*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnOfferwallAdCredited(Action1Il2CppDictionary<Il2CppString*, Il2CppObject*>*>* value) {
		return ((R (*)(IUnityOfferwall*, Action1Il2CppDictionary<Il2CppString*, Il2CppObject*>*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnOfferwallAvailable(Action1bool>* value) {
		return ((R (*)(IUnityOfferwall*, Action1bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnOfferwallAvailable(Action1bool>* value) {
		return ((R (*)(IUnityOfferwall*, Action1bool>*))(Il2CppBase() + 0x0))(this, value);
	}

};

