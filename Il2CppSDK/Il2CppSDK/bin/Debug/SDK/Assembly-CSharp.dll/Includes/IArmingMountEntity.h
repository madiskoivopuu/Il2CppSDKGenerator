#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingMountEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingMountEntity"));
	}


	template <typename T = uintptr_t> T get_armingMount() {
		return ((T (*)(IArmingMountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingMount() {
		return ((T (*)(IArmingMountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingMount(Il2CppString* newName) {
		return ((T (*)(IArmingMountEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingMount(Il2CppString* newName) {
		return ((T (*)(IArmingMountEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingMount() {
		return ((T (*)(IArmingMountEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
