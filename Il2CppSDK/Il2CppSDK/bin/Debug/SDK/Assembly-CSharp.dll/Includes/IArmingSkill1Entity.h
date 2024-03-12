#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingSkill1Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingSkill1Entity"));
	}


	template <typename T = uintptr_t> T get_armingSkill1() {
		return ((T (*)(IArmingSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingSkill1() {
		return ((T (*)(IArmingSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingSkill1(Il2CppString* newName) {
		return ((T (*)(IArmingSkill1Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingSkill1(Il2CppString* newName) {
		return ((T (*)(IArmingSkill1Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingSkill1() {
		return ((T (*)(IArmingSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}

};

}
