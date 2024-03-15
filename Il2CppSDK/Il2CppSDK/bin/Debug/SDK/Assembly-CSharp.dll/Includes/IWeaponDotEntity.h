#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IWeaponDotEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWeaponDotEntity"));
	}


	template <typename R = WeaponDotComponent*> R get_weaponDot() {
		return ((R (*)(IWeaponDotEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasWeaponDot() {
		return ((R (*)(IWeaponDotEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddWeaponDot(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IWeaponDotEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceWeaponDot(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IWeaponDotEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveWeaponDot() {
		return ((R (*)(IWeaponDotEntity*))(Il2CppBase() + 0x0))(this);
	}

};

