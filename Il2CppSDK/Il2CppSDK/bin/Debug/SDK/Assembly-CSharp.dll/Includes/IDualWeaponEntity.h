#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDualWeaponEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDualWeaponEntity"));
	}


	template <typename T = bool> T get_isDualWeapon() {
		return ((T (*)(IDualWeaponEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isDualWeapon(bool value) {
		return ((T (*)(IDualWeaponEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

