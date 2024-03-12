#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityOfferwall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityOfferwall"));
	}


	template <typename T = void> T add_OnOfferwallShowFailed(void* value) {
		return ((T (*)(IUnityOfferwall*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnOfferwallShowFailed(void* value) {
		return ((T (*)(IUnityOfferwall*, void*))(Il2CppBase() + 0x0))(this, value);
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
	template <typename T = void> T add_OnGetOfferwallCreditsFailed(void* value) {
		return ((T (*)(IUnityOfferwall*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnGetOfferwallCreditsFailed(void* value) {
		return ((T (*)(IUnityOfferwall*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnOfferwallAdCredited(void* value) {
		return ((T (*)(IUnityOfferwall*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnOfferwallAdCredited(void* value) {
		return ((T (*)(IUnityOfferwall*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnOfferwallAvailable(void* value) {
		return ((T (*)(IUnityOfferwall*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnOfferwallAvailable(void* value) {
		return ((T (*)(IUnityOfferwall*, void*))(Il2CppBase() + 0x0))(this, value);
	}

};

}
