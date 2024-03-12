#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowInventory(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1241C50))(0, manager);
	}
	template <typename T = void> static T CloseInventory(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1241F98))(0, manager);
	}

};

}
