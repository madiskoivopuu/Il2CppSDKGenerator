#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILinkToStoreProductEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILinkToStoreProductEntity"));
	}


	template <typename R = LinkToStoreProductComponent*> R get_linkToStoreProduct() {
		return ((R (*)(ILinkToStoreProductEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasLinkToStoreProduct() {
		return ((R (*)(ILinkToStoreProductEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddLinkToStoreProduct(Il2CppString* newName) {
		return ((R (*)(ILinkToStoreProductEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceLinkToStoreProduct(Il2CppString* newName) {
		return ((R (*)(ILinkToStoreProductEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveLinkToStoreProduct() {
		return ((R (*)(ILinkToStoreProductEntity*))(Il2CppBase() + 0x0))(this);
	}

};

