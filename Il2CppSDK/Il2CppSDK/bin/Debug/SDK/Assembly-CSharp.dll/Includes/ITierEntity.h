#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITierEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITierEntity"));
	}


	template <typename R = TierComponent*> R get_tier() {
		return ((R (*)(ITierEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTier() {
		return ((R (*)(ITierEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTier(int32_t newValue) {
		return ((R (*)(ITierEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceTier(int32_t newValue) {
		return ((R (*)(ITierEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveTier() {
		return ((R (*)(ITierEntity*))(Il2CppBase() + 0x0))(this);
	}

};

