#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingMountSkill3Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingMountSkill3Entity"));
	}


	template <typename T = ArmingMountSkill3Component*> T get_armingMountSkill3() {
		return ((T (*)(IArmingMountSkill3Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingMountSkill3() {
		return ((T (*)(IArmingMountSkill3Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingMountSkill3(Il2CppString* newName) {
		return ((T (*)(IArmingMountSkill3Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingMountSkill3(Il2CppString* newName) {
		return ((T (*)(IArmingMountSkill3Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingMountSkill3() {
		return ((T (*)(IArmingMountSkill3Entity*))(Il2CppBase() + 0x0))(this);
	}

};

