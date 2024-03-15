#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingLegsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingLegsEntity"));
	}


	template <typename R = ArmingLegsComponent*> R get_armingLegs() {
		return ((R (*)(IArmingLegsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingLegs() {
		return ((R (*)(IArmingLegsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingLegs(Il2CppString* newName) {
		return ((R (*)(IArmingLegsEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingLegs(Il2CppString* newName) {
		return ((R (*)(IArmingLegsEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingLegs() {
		return ((R (*)(IArmingLegsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

