#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingMountEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingMountEntity"));
	}


	template <typename R = ArmingMountComponent*> R get_armingMount() {
		return ((R (*)(IArmingMountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingMount() {
		return ((R (*)(IArmingMountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingMount(Il2CppString* newName) {
		return ((R (*)(IArmingMountEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingMount(Il2CppString* newName) {
		return ((R (*)(IArmingMountEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingMount() {
		return ((R (*)(IArmingMountEntity*))(Il2CppBase() + 0x0))(this);
	}

};

