#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountsInventoryWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountsInventoryWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowMountsInventory(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x155141C))(0, manager);
	}

};

}
