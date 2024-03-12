#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IShieldManagementActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IShieldManagementActionEntity"));
	}


	template <typename T = uintptr_t> T get_shieldManagementAction() {
		return ((T (*)(IShieldManagementActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasShieldManagementAction() {
		return ((T (*)(IShieldManagementActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddShieldManagementAction(Il2CppString* newName) {
		return ((T (*)(IShieldManagementActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceShieldManagementAction(Il2CppString* newName) {
		return ((T (*)(IShieldManagementActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveShieldManagementAction() {
		return ((T (*)(IShieldManagementActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
