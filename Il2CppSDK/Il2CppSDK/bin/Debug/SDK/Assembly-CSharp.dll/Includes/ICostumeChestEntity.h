#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICostumeChestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICostumeChestEntity"));
	}


	template <typename R = CostumeChestComponent*> R get_costumeChest() {
		return ((R (*)(ICostumeChestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCostumeChest() {
		return ((R (*)(ICostumeChestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCostumeChest(Il2CppString* newName) {
		return ((R (*)(ICostumeChestEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceCostumeChest(Il2CppString* newName) {
		return ((R (*)(ICostumeChestEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveCostumeChest() {
		return ((R (*)(ICostumeChestEntity*))(Il2CppBase() + 0x0))(this);
	}

};

