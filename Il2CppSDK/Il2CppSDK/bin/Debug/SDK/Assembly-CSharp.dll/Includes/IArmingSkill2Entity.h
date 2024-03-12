#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingSkill2Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingSkill2Entity"));
	}


	template <typename T = uintptr_t> T get_armingSkill2() {
		return ((T (*)(IArmingSkill2Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingSkill2() {
		return ((T (*)(IArmingSkill2Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingSkill2(Il2CppString* newName) {
		return ((T (*)(IArmingSkill2Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingSkill2(Il2CppString* newName) {
		return ((T (*)(IArmingSkill2Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingSkill2() {
		return ((T (*)(IArmingSkill2Entity*))(Il2CppBase() + 0x0))(this);
	}

};

}
