#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IExternalInventoryEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IExternalInventoryEntity"));
	}


	template <typename T = bool> T get_isExternalInventory() {
		return ((T (*)(IExternalInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isExternalInventory(bool value) {
		return ((T (*)(IExternalInventoryEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

