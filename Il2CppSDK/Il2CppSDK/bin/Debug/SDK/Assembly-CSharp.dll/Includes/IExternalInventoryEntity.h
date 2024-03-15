#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IExternalInventoryEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IExternalInventoryEntity"));
	}


	template <typename R = bool> R get_isExternalInventory() {
		return ((R (*)(IExternalInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isExternalInventory(bool value) {
		return ((R (*)(IExternalInventoryEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

