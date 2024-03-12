#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingPassiveSkill1Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingPassiveSkill1Entity"));
	}


	template <typename T = uintptr_t> T get_armingPassiveSkill1() {
		return ((T (*)(IArmingPassiveSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingPassiveSkill1() {
		return ((T (*)(IArmingPassiveSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingPassiveSkill1(Il2CppString* newName) {
		return ((T (*)(IArmingPassiveSkill1Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingPassiveSkill1(Il2CppString* newName) {
		return ((T (*)(IArmingPassiveSkill1Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingPassiveSkill1() {
		return ((T (*)(IArmingPassiveSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}

};

}
