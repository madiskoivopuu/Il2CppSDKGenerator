#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingSkill2Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingSkill2Entity"));
	}


	template <typename R = ArmingSkill2Component*> R get_armingSkill2() {
		return ((R (*)(IArmingSkill2Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingSkill2() {
		return ((R (*)(IArmingSkill2Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingSkill2(Il2CppString* newName) {
		return ((R (*)(IArmingSkill2Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingSkill2(Il2CppString* newName) {
		return ((R (*)(IArmingSkill2Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingSkill2() {
		return ((R (*)(IArmingSkill2Entity*))(Il2CppBase() + 0x0))(this);
	}

};

