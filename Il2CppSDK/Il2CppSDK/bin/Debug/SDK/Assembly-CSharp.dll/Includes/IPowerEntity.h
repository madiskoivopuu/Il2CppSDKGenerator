#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPowerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPowerEntity"));
	}


	template <typename R = PowerComponent*> R get_power() {
		return ((R (*)(IPowerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPower() {
		return ((R (*)(IPowerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPower(float newValue) {
		return ((R (*)(IPowerEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplacePower(float newValue) {
		return ((R (*)(IPowerEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemovePower() {
		return ((R (*)(IPowerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

