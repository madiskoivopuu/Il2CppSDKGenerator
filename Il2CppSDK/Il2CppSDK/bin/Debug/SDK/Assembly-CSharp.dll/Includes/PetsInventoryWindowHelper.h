#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetsInventoryWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetsInventoryWindowHelper"));
	}


	template <typename T = PetsInventoryWindow*> static T ShowPetsInventory(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x16F5E6C))(0, manager);
	}

};

