#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingWeaponEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingWeaponEntity"));
	}


	template <typename T = uintptr_t> T get_armingWeapon() {
		return ((T (*)(IArmingWeaponEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingWeapon() {
		return ((T (*)(IArmingWeaponEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingWeapon(Il2CppString* newName) {
		return ((T (*)(IArmingWeaponEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingWeapon(Il2CppString* newName) {
		return ((T (*)(IArmingWeaponEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingWeapon() {
		return ((T (*)(IArmingWeaponEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
