#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUpgradeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUpgradeEntity"));
	}


	template <typename R = UpgradeComponent*> R get_upgrade() {
		return ((R (*)(IUpgradeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasUpgrade() {
		return ((R (*)(IUpgradeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddUpgrade(Il2CppString* newName) {
		return ((R (*)(IUpgradeEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceUpgrade(Il2CppString* newName) {
		return ((R (*)(IUpgradeEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveUpgrade() {
		return ((R (*)(IUpgradeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

