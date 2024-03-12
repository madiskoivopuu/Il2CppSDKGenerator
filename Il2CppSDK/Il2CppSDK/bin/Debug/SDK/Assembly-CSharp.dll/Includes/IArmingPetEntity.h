#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingPetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingPetEntity"));
	}


	template <typename T = uintptr_t> T get_armingPet() {
		return ((T (*)(IArmingPetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingPet() {
		return ((T (*)(IArmingPetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingPet(Il2CppString* newName) {
		return ((T (*)(IArmingPetEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingPet(Il2CppString* newName) {
		return ((T (*)(IArmingPetEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingPet() {
		return ((T (*)(IArmingPetEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
