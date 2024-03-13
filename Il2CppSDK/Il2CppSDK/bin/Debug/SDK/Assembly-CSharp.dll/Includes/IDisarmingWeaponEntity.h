#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDisarmingWeaponEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDisarmingWeaponEntity"));
	}


	template <typename T = bool> T get_isDisarmingWeapon() {
		return ((T (*)(IDisarmingWeaponEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isDisarmingWeapon(bool value) {
		return ((T (*)(IDisarmingWeaponEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

