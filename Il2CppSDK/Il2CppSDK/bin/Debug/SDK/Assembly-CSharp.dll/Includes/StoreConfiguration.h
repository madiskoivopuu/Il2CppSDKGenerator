#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreConfiguration"));
	}

	template <typename R = bool> R& VIPEnabled() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R get_VIPEnabled() {
		return ((R (*)(StoreConfiguration*))(Il2CppBase() + 0x141F7F0))(this);
	}
	template <typename R = void> R set_VIPEnabled(bool value) {
		return ((R (*)(StoreConfiguration*, bool))(Il2CppBase() + 0x141F7F8))(this, value);
	}

};

