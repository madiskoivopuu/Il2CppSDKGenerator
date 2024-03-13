#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingBackpackEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingBackpackEntity"));
	}


	template <typename T = ArmingBackpackComponent*> T get_armingBackpack() {
		return ((T (*)(IArmingBackpackEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingBackpack() {
		return ((T (*)(IArmingBackpackEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingBackpack(Il2CppString* newName) {
		return ((T (*)(IArmingBackpackEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingBackpack(Il2CppString* newName) {
		return ((T (*)(IArmingBackpackEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingBackpack() {
		return ((T (*)(IArmingBackpackEntity*))(Il2CppBase() + 0x0))(this);
	}

};

