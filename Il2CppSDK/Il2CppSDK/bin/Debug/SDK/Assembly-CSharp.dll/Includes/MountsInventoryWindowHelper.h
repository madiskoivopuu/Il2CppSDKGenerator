#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountsInventoryWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountsInventoryWindowHelper"));
	}


	template <typename R = MountsInventoryWindow*> static R ShowMountsInventory(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x155141C))(0, manager);
	}

};

