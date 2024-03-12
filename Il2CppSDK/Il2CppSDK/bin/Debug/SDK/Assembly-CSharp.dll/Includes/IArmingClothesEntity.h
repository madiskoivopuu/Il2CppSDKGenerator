#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingClothesEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingClothesEntity"));
	}


	template <typename T = uintptr_t> T get_armingClothes() {
		return ((T (*)(IArmingClothesEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingClothes() {
		return ((T (*)(IArmingClothesEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingClothes(Il2CppString* newName) {
		return ((T (*)(IArmingClothesEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingClothes(Il2CppString* newName) {
		return ((T (*)(IArmingClothesEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingClothes() {
		return ((T (*)(IArmingClothesEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
