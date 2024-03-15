#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IShieldManagementActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IShieldManagementActionEntity"));
	}


	template <typename R = ShieldManagementActionComponent*> R get_shieldManagementAction() {
		return ((R (*)(IShieldManagementActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasShieldManagementAction() {
		return ((R (*)(IShieldManagementActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddShieldManagementAction(Il2CppString* newName) {
		return ((R (*)(IShieldManagementActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceShieldManagementAction(Il2CppString* newName) {
		return ((R (*)(IShieldManagementActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveShieldManagementAction() {
		return ((R (*)(IShieldManagementActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

