#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingClothesEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingClothesEntity"));
	}


	template <typename R = ArmingClothesComponent*> R get_armingClothes() {
		return ((R (*)(IArmingClothesEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingClothes() {
		return ((R (*)(IArmingClothesEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingClothes(Il2CppString* newName) {
		return ((R (*)(IArmingClothesEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingClothes(Il2CppString* newName) {
		return ((R (*)(IArmingClothesEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingClothes() {
		return ((R (*)(IArmingClothesEntity*))(Il2CppBase() + 0x0))(this);
	}

};

