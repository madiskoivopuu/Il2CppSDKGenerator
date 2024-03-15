#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStoreIdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStoreIdEntity"));
	}


	template <typename R = StoreIdComponent*> R get_storeId() {
		return ((R (*)(IStoreIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasStoreId() {
		return ((R (*)(IStoreIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddStoreId(int64_t newId) {
		return ((R (*)(IStoreIdEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceStoreId(int64_t newId) {
		return ((R (*)(IStoreIdEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveStoreId() {
		return ((R (*)(IStoreIdEntity*))(Il2CppBase() + 0x0))(this);
	}

};

