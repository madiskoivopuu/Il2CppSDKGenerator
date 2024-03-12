#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUpgradeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUpgradeEntity"));
	}


	template <typename T = uintptr_t> T get_upgrade() {
		return ((T (*)(IUpgradeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasUpgrade() {
		return ((T (*)(IUpgradeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddUpgrade(Il2CppString* newName) {
		return ((T (*)(IUpgradeEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceUpgrade(Il2CppString* newName) {
		return ((T (*)(IUpgradeEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveUpgrade() {
		return ((T (*)(IUpgradeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
