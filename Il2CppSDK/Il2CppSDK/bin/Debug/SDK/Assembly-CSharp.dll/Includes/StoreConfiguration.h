#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreConfiguration"));
	}

	template <typename T = bool> T& VIPEnabled() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T get_VIPEnabled() {
		return ((T (*)(StoreConfiguration*))(Il2CppBase() + 0x141F7F0))(this);
	}
	template <typename T = void> T set_VIPEnabled(bool value) {
		return ((T (*)(StoreConfiguration*, bool))(Il2CppBase() + 0x141F7F8))(this, value);
	}

};

