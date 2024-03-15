#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingMountSkill2Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingMountSkill2Entity"));
	}


	template <typename R = ArmingMountSkill2Component*> R get_armingMountSkill2() {
		return ((R (*)(IArmingMountSkill2Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingMountSkill2() {
		return ((R (*)(IArmingMountSkill2Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingMountSkill2(Il2CppString* newName) {
		return ((R (*)(IArmingMountSkill2Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingMountSkill2(Il2CppString* newName) {
		return ((R (*)(IArmingMountSkill2Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingMountSkill2() {
		return ((R (*)(IArmingMountSkill2Entity*))(Il2CppBase() + 0x0))(this);
	}

};

