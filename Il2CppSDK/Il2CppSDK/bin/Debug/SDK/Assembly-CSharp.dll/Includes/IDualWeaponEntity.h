#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDualWeaponEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDualWeaponEntity"));
	}


	template <typename R = bool> R get_isDualWeapon() {
		return ((R (*)(IDualWeaponEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isDualWeapon(bool value) {
		return ((R (*)(IDualWeaponEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

