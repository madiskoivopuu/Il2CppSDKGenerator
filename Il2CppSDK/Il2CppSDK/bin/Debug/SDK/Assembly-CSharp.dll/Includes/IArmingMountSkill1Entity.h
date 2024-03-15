#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingMountSkill1Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingMountSkill1Entity"));
	}


	template <typename R = ArmingMountSkill1Component*> R get_armingMountSkill1() {
		return ((R (*)(IArmingMountSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingMountSkill1() {
		return ((R (*)(IArmingMountSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingMountSkill1(Il2CppString* newName) {
		return ((R (*)(IArmingMountSkill1Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingMountSkill1(Il2CppString* newName) {
		return ((R (*)(IArmingMountSkill1Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingMountSkill1() {
		return ((R (*)(IArmingMountSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}

};

