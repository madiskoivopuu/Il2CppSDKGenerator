#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingMountSkill1Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingMountSkill1Entity"));
	}


	template <typename T = uintptr_t> T get_armingMountSkill1() {
		return ((T (*)(IArmingMountSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingMountSkill1() {
		return ((T (*)(IArmingMountSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingMountSkill1(Il2CppString* newName) {
		return ((T (*)(IArmingMountSkill1Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingMountSkill1(Il2CppString* newName) {
		return ((T (*)(IArmingMountSkill1Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingMountSkill1() {
		return ((T (*)(IArmingMountSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}

};

}
