#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingWeaponEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingWeaponEntity"));
	}


	template <typename R = ArmingWeaponComponent*> R get_armingWeapon() {
		return ((R (*)(IArmingWeaponEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingWeapon() {
		return ((R (*)(IArmingWeaponEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingWeapon(Il2CppString* newName) {
		return ((R (*)(IArmingWeaponEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingWeapon(Il2CppString* newName) {
		return ((R (*)(IArmingWeaponEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingWeapon() {
		return ((R (*)(IArmingWeaponEntity*))(Il2CppBase() + 0x0))(this);
	}

};

