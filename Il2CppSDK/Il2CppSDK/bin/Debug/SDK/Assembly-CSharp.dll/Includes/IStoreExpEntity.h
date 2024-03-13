#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStoreExpEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStoreExpEntity"));
	}


	template <typename T = StoreExpComponent*> T get_storeExp() {
		return ((T (*)(IStoreExpEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasStoreExp() {
		return ((T (*)(IStoreExpEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddStoreExp(uint32_t newValue) {
		return ((T (*)(IStoreExpEntity*, uint32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceStoreExp(uint32_t newValue) {
		return ((T (*)(IStoreExpEntity*, uint32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveStoreExp() {
		return ((T (*)(IStoreExpEntity*))(Il2CppBase() + 0x0))(this);
	}

};

