#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITierEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITierEntity"));
	}


	template <typename T = uintptr_t> T get_tier() {
		return ((T (*)(ITierEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTier() {
		return ((T (*)(ITierEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTier(int32_t newValue) {
		return ((T (*)(ITierEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceTier(int32_t newValue) {
		return ((T (*)(ITierEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveTier() {
		return ((T (*)(ITierEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
