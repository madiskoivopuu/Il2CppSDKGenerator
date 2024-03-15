#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingPassiveSkill1Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingPassiveSkill1Entity"));
	}


	template <typename R = ArmingPassiveSkill1Component*> R get_armingPassiveSkill1() {
		return ((R (*)(IArmingPassiveSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingPassiveSkill1() {
		return ((R (*)(IArmingPassiveSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingPassiveSkill1(Il2CppString* newName) {
		return ((R (*)(IArmingPassiveSkill1Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingPassiveSkill1(Il2CppString* newName) {
		return ((R (*)(IArmingPassiveSkill1Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingPassiveSkill1() {
		return ((R (*)(IArmingPassiveSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}

};

