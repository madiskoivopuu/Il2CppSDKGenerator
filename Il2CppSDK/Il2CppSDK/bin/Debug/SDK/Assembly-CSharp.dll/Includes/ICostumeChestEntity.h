#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICostumeChestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICostumeChestEntity"));
	}


	template <typename T = uintptr_t> T get_costumeChest() {
		return ((T (*)(ICostumeChestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCostumeChest() {
		return ((T (*)(ICostumeChestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCostumeChest(Il2CppString* newName) {
		return ((T (*)(ICostumeChestEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceCostumeChest(Il2CppString* newName) {
		return ((T (*)(ICostumeChestEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveCostumeChest() {
		return ((T (*)(ICostumeChestEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
