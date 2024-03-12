#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILinkToStoreProductEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILinkToStoreProductEntity"));
	}


	template <typename T = uintptr_t> T get_linkToStoreProduct() {
		return ((T (*)(ILinkToStoreProductEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasLinkToStoreProduct() {
		return ((T (*)(ILinkToStoreProductEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddLinkToStoreProduct(Il2CppString* newName) {
		return ((T (*)(ILinkToStoreProductEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceLinkToStoreProduct(Il2CppString* newName) {
		return ((T (*)(ILinkToStoreProductEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveLinkToStoreProduct() {
		return ((T (*)(ILinkToStoreProductEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
