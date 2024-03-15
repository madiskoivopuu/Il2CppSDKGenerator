#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStoreExpEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStoreExpEntity"));
	}


	template <typename R = StoreExpComponent*> R get_storeExp() {
		return ((R (*)(IStoreExpEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasStoreExp() {
		return ((R (*)(IStoreExpEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddStoreExp(uint32_t newValue) {
		return ((R (*)(IStoreExpEntity*, uint32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceStoreExp(uint32_t newValue) {
		return ((R (*)(IStoreExpEntity*, uint32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveStoreExp() {
		return ((R (*)(IStoreExpEntity*))(Il2CppBase() + 0x0))(this);
	}

};

