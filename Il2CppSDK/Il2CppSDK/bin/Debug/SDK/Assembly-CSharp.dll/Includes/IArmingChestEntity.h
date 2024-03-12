#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingChestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingChestEntity"));
	}


	template <typename T = uintptr_t> T get_armingChest() {
		return ((T (*)(IArmingChestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingChest() {
		return ((T (*)(IArmingChestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingChest(Il2CppString* newName) {
		return ((T (*)(IArmingChestEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingChest(Il2CppString* newName) {
		return ((T (*)(IArmingChestEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingChest() {
		return ((T (*)(IArmingChestEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
