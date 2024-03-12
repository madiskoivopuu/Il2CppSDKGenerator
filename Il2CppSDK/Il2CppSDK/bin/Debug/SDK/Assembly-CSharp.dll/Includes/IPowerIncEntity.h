#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPowerIncEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPowerIncEntity"));
	}


	template <typename T = uintptr_t> T get_powerInc() {
		return ((T (*)(IPowerIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPowerInc() {
		return ((T (*)(IPowerIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPowerInc(float newValue, uintptr_t newGroup) {
		return ((T (*)(IPowerIncEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplacePowerInc(float newValue, uintptr_t newGroup) {
		return ((T (*)(IPowerIncEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemovePowerInc() {
		return ((T (*)(IPowerIncEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
