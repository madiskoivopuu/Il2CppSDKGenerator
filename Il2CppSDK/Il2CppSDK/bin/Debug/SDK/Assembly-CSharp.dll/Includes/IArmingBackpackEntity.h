#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingBackpackEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingBackpackEntity"));
	}


	template <typename R = ArmingBackpackComponent*> R get_armingBackpack() {
		return ((R (*)(IArmingBackpackEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingBackpack() {
		return ((R (*)(IArmingBackpackEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingBackpack(Il2CppString* newName) {
		return ((R (*)(IArmingBackpackEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingBackpack(Il2CppString* newName) {
		return ((R (*)(IArmingBackpackEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingBackpack() {
		return ((R (*)(IArmingBackpackEntity*))(Il2CppBase() + 0x0))(this);
	}

};

