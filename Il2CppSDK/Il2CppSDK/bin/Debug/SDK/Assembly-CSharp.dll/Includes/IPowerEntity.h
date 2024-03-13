#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPowerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPowerEntity"));
	}


	template <typename T = PowerComponent*> T get_power() {
		return ((T (*)(IPowerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPower() {
		return ((T (*)(IPowerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPower(float newValue) {
		return ((T (*)(IPowerEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplacePower(float newValue) {
		return ((T (*)(IPowerEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemovePower() {
		return ((T (*)(IPowerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

