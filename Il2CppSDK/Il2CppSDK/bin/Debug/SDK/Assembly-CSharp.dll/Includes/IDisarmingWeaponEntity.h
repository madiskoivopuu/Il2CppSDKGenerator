#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDisarmingWeaponEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDisarmingWeaponEntity"));
	}


	template <typename R = bool> R get_isDisarmingWeapon() {
		return ((R (*)(IDisarmingWeaponEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isDisarmingWeapon(bool value) {
		return ((R (*)(IDisarmingWeaponEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

