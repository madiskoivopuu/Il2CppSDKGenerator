#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingMountSkill2Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingMountSkill2Entity"));
	}


	template <typename T = uintptr_t> T get_armingMountSkill2() {
		return ((T (*)(IArmingMountSkill2Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingMountSkill2() {
		return ((T (*)(IArmingMountSkill2Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingMountSkill2(Il2CppString* newName) {
		return ((T (*)(IArmingMountSkill2Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingMountSkill2(Il2CppString* newName) {
		return ((T (*)(IArmingMountSkill2Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingMountSkill2() {
		return ((T (*)(IArmingMountSkill2Entity*))(Il2CppBase() + 0x0))(this);
	}

};

}
