#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingPocketEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingPocketEntity"));
	}


	template <typename R = ArmingPocketComponent*> R get_armingPocket() {
		return ((R (*)(IArmingPocketEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingPocket() {
		return ((R (*)(IArmingPocketEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingPocket(Il2CppString* newName1, Il2CppString* newName2, Il2CppString* newName3) {
		return ((R (*)(IArmingPocketEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName1, newName2, newName3);
	}
	template <typename R = void> R ReplaceArmingPocket(Il2CppString* newName1, Il2CppString* newName2, Il2CppString* newName3) {
		return ((R (*)(IArmingPocketEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName1, newName2, newName3);
	}
	template <typename R = void> R RemoveArmingPocket() {
		return ((R (*)(IArmingPocketEntity*))(Il2CppBase() + 0x0))(this);
	}

};

