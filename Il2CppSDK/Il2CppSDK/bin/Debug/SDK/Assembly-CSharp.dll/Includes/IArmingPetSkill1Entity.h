#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingPetSkill1Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingPetSkill1Entity"));
	}


	template <typename T = ArmingPetSkill1Component*> T get_armingPetSkill1() {
		return ((T (*)(IArmingPetSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingPetSkill1() {
		return ((T (*)(IArmingPetSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingPetSkill1(Il2CppString* newName) {
		return ((T (*)(IArmingPetSkill1Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingPetSkill1(Il2CppString* newName) {
		return ((T (*)(IArmingPetSkill1Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingPetSkill1() {
		return ((T (*)(IArmingPetSkill1Entity*))(Il2CppBase() + 0x0))(this);
	}

};

