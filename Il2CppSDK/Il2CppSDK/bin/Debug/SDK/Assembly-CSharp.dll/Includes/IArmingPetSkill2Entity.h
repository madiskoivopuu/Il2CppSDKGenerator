#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingPetSkill2Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingPetSkill2Entity"));
	}


	template <typename R = ArmingPetSkill2Component*> R get_armingPetSkill2() {
		return ((R (*)(IArmingPetSkill2Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingPetSkill2() {
		return ((R (*)(IArmingPetSkill2Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingPetSkill2(Il2CppString* newName) {
		return ((R (*)(IArmingPetSkill2Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingPetSkill2(Il2CppString* newName) {
		return ((R (*)(IArmingPetSkill2Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingPetSkill2() {
		return ((R (*)(IArmingPetSkill2Entity*))(Il2CppBase() + 0x0))(this);
	}

};

