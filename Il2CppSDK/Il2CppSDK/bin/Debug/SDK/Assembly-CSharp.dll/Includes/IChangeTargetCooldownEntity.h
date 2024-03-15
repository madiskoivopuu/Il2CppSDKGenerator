#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IChangeTargetCooldownEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IChangeTargetCooldownEntity"));
	}


	template <typename R = ChangeTargetCooldownComponent*> R get_changeTargetCooldown() {
		return ((R (*)(IChangeTargetCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasChangeTargetCooldown() {
		return ((R (*)(IChangeTargetCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddChangeTargetCooldown(bool newPerHpDmgPercent, float newValue, Il2CppString* newItemTag) {
		return ((R (*)(IChangeTargetCooldownEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x0))(this, newPerHpDmgPercent, newValue, newItemTag);
	}
	template <typename R = void> R ReplaceChangeTargetCooldown(bool newPerHpDmgPercent, float newValue, Il2CppString* newItemTag) {
		return ((R (*)(IChangeTargetCooldownEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x0))(this, newPerHpDmgPercent, newValue, newItemTag);
	}
	template <typename R = void> R RemoveChangeTargetCooldown() {
		return ((R (*)(IChangeTargetCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}

};

