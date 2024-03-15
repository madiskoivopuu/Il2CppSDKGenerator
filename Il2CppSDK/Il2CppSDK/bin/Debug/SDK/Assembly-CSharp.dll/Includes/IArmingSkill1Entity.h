#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingSkill1Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingSkill1Entity"));
	}


	template <typename R = ArmingSkill1Component*> R get_armingSkill1() {
		return ((R (*)(IArmingSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingSkill1() {
		return ((R (*)(IArmingSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingSkill1(Il2CppString* newName) {
		return ((R (*)(IArmingSkill1Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingSkill1(Il2CppString* newName) {
		return ((R (*)(IArmingSkill1Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingSkill1() {
		return ((R (*)(IArmingSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}

};

