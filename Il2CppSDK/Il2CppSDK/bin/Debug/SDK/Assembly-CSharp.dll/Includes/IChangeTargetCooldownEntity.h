#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IChangeTargetCooldownEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IChangeTargetCooldownEntity"));
	}


	template <typename T = ChangeTargetCooldownComponent*> T get_changeTargetCooldown() {
		return ((T (*)(IChangeTargetCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasChangeTargetCooldown() {
		return ((T (*)(IChangeTargetCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddChangeTargetCooldown(bool newPerHpDmgPercent, float newValue, Il2CppString* newItemTag) {
		return ((T (*)(IChangeTargetCooldownEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x0))(this, newPerHpDmgPercent, newValue, newItemTag);
	}
	template <typename T = void> T ReplaceChangeTargetCooldown(bool newPerHpDmgPercent, float newValue, Il2CppString* newItemTag) {
		return ((T (*)(IChangeTargetCooldownEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x0))(this, newPerHpDmgPercent, newValue, newItemTag);
	}
	template <typename T = void> T RemoveChangeTargetCooldown() {
		return ((T (*)(IChangeTargetCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}

};

