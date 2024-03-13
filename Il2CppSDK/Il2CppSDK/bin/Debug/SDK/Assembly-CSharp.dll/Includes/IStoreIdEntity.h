#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStoreIdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStoreIdEntity"));
	}


	template <typename T = StoreIdComponent*> T get_storeId() {
		return ((T (*)(IStoreIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasStoreId() {
		return ((T (*)(IStoreIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddStoreId(int64_t newId) {
		return ((T (*)(IStoreIdEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceStoreId(int64_t newId) {
		return ((T (*)(IStoreIdEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveStoreId() {
		return ((T (*)(IStoreIdEntity*))(Il2CppBase() + 0x0))(this);
	}

};

