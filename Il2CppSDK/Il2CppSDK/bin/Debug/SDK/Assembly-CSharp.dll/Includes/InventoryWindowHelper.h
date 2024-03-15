#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryWindowHelper"));
	}


	template <typename R = InventoryWindow*> static R ShowInventory(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1241C50))(0, manager);
	}
	template <typename R = void> static R CloseInventory(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1241F98))(0, manager);
	}

};

