#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingPetSkill1Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingPetSkill1Entity"));
	}


	template <typename R = ArmingPetSkill1Component*> R get_armingPetSkill1() {
		return ((R (*)(IArmingPetSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingPetSkill1() {
		return ((R (*)(IArmingPetSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingPetSkill1(Il2CppString* newName) {
		return ((R (*)(IArmingPetSkill1Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingPetSkill1(Il2CppString* newName) {
		return ((R (*)(IArmingPetSkill1Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingPetSkill1() {
		return ((R (*)(IArmingPetSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}

};

