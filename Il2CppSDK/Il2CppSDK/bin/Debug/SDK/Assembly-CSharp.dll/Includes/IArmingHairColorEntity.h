#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingHairColorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingHairColorEntity"));
	}


	template <typename T = ArmingHairColorComponent*> T get_armingHairColor() {
		return ((T (*)(IArmingHairColorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingHairColor() {
		return ((T (*)(IArmingHairColorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingHairColor(Il2CppString* newName) {
		return ((T (*)(IArmingHairColorEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingHairColor(Il2CppString* newName) {
		return ((T (*)(IArmingHairColorEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingHairColor() {
		return ((T (*)(IArmingHairColorEntity*))(Il2CppBase() + 0x0))(this);
	}

};

