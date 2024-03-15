#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingChestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingChestEntity"));
	}


	template <typename R = ArmingChestComponent*> R get_armingChest() {
		return ((R (*)(IArmingChestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingChest() {
		return ((R (*)(IArmingChestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingChest(Il2CppString* newName) {
		return ((R (*)(IArmingChestEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingChest(Il2CppString* newName) {
		return ((R (*)(IArmingChestEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingChest() {
		return ((R (*)(IArmingChestEntity*))(Il2CppBase() + 0x0))(this);
	}

};

