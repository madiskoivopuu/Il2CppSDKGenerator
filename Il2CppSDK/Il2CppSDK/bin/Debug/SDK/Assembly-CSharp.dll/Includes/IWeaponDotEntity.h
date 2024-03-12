#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IWeaponDotEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWeaponDotEntity"));
	}


	template <typename T = uintptr_t> T get_weaponDot() {
		return ((T (*)(IWeaponDotEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasWeaponDot() {
		return ((T (*)(IWeaponDotEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddWeaponDot(float newValue, uintptr_t newGroup) {
		return ((T (*)(IWeaponDotEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceWeaponDot(float newValue, uintptr_t newGroup) {
		return ((T (*)(IWeaponDotEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveWeaponDot() {
		return ((T (*)(IWeaponDotEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
