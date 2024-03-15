#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInventoryLockedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInventoryLockedEntity"));
	}


	template <typename R = bool> R get_isInventoryLocked() {
		return ((R (*)(IInventoryLockedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isInventoryLocked(bool value) {
		return ((R (*)(IInventoryLockedEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

