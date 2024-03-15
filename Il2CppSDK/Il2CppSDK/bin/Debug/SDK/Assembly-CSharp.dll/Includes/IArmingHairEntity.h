#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingHairEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingHairEntity"));
	}


	template <typename R = ArmingHairComponent*> R get_armingHair() {
		return ((R (*)(IArmingHairEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingHair() {
		return ((R (*)(IArmingHairEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingHair(Il2CppString* newName) {
		return ((R (*)(IArmingHairEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingHair(Il2CppString* newName) {
		return ((R (*)(IArmingHairEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingHair() {
		return ((R (*)(IArmingHairEntity*))(Il2CppBase() + 0x0))(this);
	}

};

