#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingHairEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingHairEntity"));
	}


	template <typename T = ArmingHairComponent*> T get_armingHair() {
		return ((T (*)(IArmingHairEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingHair() {
		return ((T (*)(IArmingHairEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingHair(Il2CppString* newName) {
		return ((T (*)(IArmingHairEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingHair(Il2CppString* newName) {
		return ((T (*)(IArmingHairEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingHair() {
		return ((T (*)(IArmingHairEntity*))(Il2CppBase() + 0x0))(this);
	}

};

