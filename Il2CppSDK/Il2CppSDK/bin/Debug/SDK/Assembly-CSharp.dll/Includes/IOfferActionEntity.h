#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOfferActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOfferActionEntity"));
	}


	template <typename T = uintptr_t> T get_offerAction() {
		return ((T (*)(IOfferActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasOfferAction() {
		return ((T (*)(IOfferActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddOfferAction(Il2CppString* newName) {
		return ((T (*)(IOfferActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceOfferAction(Il2CppString* newName) {
		return ((T (*)(IOfferActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveOfferAction() {
		return ((T (*)(IOfferActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
