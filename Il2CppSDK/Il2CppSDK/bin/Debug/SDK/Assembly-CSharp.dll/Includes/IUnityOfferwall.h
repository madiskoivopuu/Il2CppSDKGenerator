#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityOfferwall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityOfferwall"));
	}


	template <typename T = void> T add_OnOfferwallShowFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IUnityOfferwall*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnOfferwallShowFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IUnityOfferwall*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnOfferwallOpened(uintptr_t value) {
		return ((T (*)(IUnityOfferwall*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnOfferwallOpened(uintptr_t value) {
		return ((T (*)(IUnityOfferwall*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnOfferwallClosed(uintptr_t value) {
		return ((T (*)(IUnityOfferwall*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnOfferwallClosed(uintptr_t value) {
		return ((T (*)(IUnityOfferwall*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnGetOfferwallCreditsFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IUnityOfferwall*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnGetOfferwallCreditsFailed(Action1IronSourceError*>* value) {
		return ((T (*)(IUnityOfferwall*, Action1IronSourceError*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnOfferwallAdCredited(Action1Il2CppDictionary<Il2CppString*, Il2CppObject*>*>* value) {
		return ((T (*)(IUnityOfferwall*, Action1Il2CppDictionary<Il2CppString*, Il2CppObject*>*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnOfferwallAdCredited(Action1Il2CppDictionary<Il2CppString*, Il2CppObject*>*>* value) {
		return ((T (*)(IUnityOfferwall*, Action1Il2CppDictionary<Il2CppString*, Il2CppObject*>*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnOfferwallAvailable(Action1bool>* value) {
		return ((T (*)(IUnityOfferwall*, Action1bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnOfferwallAvailable(Action1bool>* value) {
		return ((T (*)(IUnityOfferwall*, Action1bool>*))(Il2CppBase() + 0x0))(this, value);
	}

};

