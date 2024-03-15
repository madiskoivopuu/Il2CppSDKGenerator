#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingPetSkill3Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingPetSkill3Entity"));
	}


	template <typename R = ArmingPetSkill3Component*> R get_armingPetSkill3() {
		return ((R (*)(IArmingPetSkill3Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingPetSkill3() {
		return ((R (*)(IArmingPetSkill3Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingPetSkill3(Il2CppString* newName) {
		return ((R (*)(IArmingPetSkill3Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingPetSkill3(Il2CppString* newName) {
		return ((R (*)(IArmingPetSkill3Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingPetSkill3() {
		return ((R (*)(IArmingPetSkill3Entity*))(Il2CppBase() + 0x0))(this);
	}

};

