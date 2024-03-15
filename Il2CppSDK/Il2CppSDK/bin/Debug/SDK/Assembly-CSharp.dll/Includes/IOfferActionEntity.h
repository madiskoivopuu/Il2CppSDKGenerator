#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOfferActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOfferActionEntity"));
	}


	template <typename R = OfferActionComponent*> R get_offerAction() {
		return ((R (*)(IOfferActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasOfferAction() {
		return ((R (*)(IOfferActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddOfferAction(Il2CppString* newName) {
		return ((R (*)(IOfferActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceOfferAction(Il2CppString* newName) {
		return ((R (*)(IOfferActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveOfferAction() {
		return ((R (*)(IOfferActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

