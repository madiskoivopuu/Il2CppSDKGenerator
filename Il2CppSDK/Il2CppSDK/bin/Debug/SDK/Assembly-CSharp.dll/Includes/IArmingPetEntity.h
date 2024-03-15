#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingPetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingPetEntity"));
	}


	template <typename R = ArmingPetComponent*> R get_armingPet() {
		return ((R (*)(IArmingPetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingPet() {
		return ((R (*)(IArmingPetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingPet(Il2CppString* newName) {
		return ((R (*)(IArmingPetEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingPet(Il2CppString* newName) {
		return ((R (*)(IArmingPetEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingPet() {
		return ((R (*)(IArmingPetEntity*))(Il2CppBase() + 0x0))(this);
	}

};

