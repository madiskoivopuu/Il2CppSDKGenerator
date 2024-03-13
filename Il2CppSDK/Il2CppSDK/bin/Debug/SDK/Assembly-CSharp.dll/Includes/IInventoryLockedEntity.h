#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInventoryLockedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInventoryLockedEntity"));
	}


	template <typename T = bool> T get_isInventoryLocked() {
		return ((T (*)(IInventoryLockedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isInventoryLocked(bool value) {
		return ((T (*)(IInventoryLockedEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

