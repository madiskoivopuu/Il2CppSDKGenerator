#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingPetSkill3Entity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingPetSkill3Entity"));
	}


	template <typename T = uintptr_t> T get_armingPetSkill3() {
		return ((T (*)(IArmingPetSkill3Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingPetSkill3() {
		return ((T (*)(IArmingPetSkill3Entity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingPetSkill3(Il2CppString* newName) {
		return ((T (*)(IArmingPetSkill3Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingPetSkill3(Il2CppString* newName) {
		return ((T (*)(IArmingPetSkill3Entity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingPetSkill3() {
		return ((T (*)(IArmingPetSkill3Entity*))(Il2CppBase() + 0x0))(this);
	}

};

}
