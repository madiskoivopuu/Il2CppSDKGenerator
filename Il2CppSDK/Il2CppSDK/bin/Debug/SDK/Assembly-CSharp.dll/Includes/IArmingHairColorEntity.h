#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingHairColorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingHairColorEntity"));
	}


	template <typename R = ArmingHairColorComponent*> R get_armingHairColor() {
		return ((R (*)(IArmingHairColorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingHairColor() {
		return ((R (*)(IArmingHairColorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingHairColor(Il2CppString* newName) {
		return ((R (*)(IArmingHairColorEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingHairColor(Il2CppString* newName) {
		return ((R (*)(IArmingHairColorEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingHairColor() {
		return ((R (*)(IArmingHairColorEntity*))(Il2CppBase() + 0x0))(this);
	}

};

