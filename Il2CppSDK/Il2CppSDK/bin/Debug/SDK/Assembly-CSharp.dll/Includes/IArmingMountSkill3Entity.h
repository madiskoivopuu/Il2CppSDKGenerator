#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingMountSkill3Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingMountSkill3Entity"));
	}


	template <typename R = ArmingMountSkill3Component*> R get_armingMountSkill3() {
		return ((R (*)(IArmingMountSkill3Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingMountSkill3() {
		return ((R (*)(IArmingMountSkill3Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingMountSkill3(Il2CppString* newName) {
		return ((R (*)(IArmingMountSkill3Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingMountSkill3(Il2CppString* newName) {
		return ((R (*)(IArmingMountSkill3Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingMountSkill3() {
		return ((R (*)(IArmingMountSkill3Entity*))(Il2CppBase() + 0x0))(this);
	}

};

