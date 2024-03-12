#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingPetSkill2Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingPetSkill2Entity"));
	}


	template <typename T = uintptr_t> T get_armingPetSkill2() {
		return ((T (*)(IArmingPetSkill2Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingPetSkill2() {
		return ((T (*)(IArmingPetSkill2Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingPetSkill2(Il2CppString* newName) {
		return ((T (*)(IArmingPetSkill2Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingPetSkill2(Il2CppString* newName) {
		return ((T (*)(IArmingPetSkill2Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingPetSkill2() {
		return ((T (*)(IArmingPetSkill2Entity*))(Il2CppBase() + 0x0))(this);
	}

};

}
