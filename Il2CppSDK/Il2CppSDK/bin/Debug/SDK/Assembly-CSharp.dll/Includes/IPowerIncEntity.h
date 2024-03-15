#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPowerIncEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPowerIncEntity"));
	}


	template <typename R = PowerIncComponent*> R get_powerInc() {
		return ((R (*)(IPowerIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPowerInc() {
		return ((R (*)(IPowerIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPowerInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IPowerIncEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplacePowerInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IPowerIncEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemovePowerInc() {
		return ((R (*)(IPowerIncEntity*))(Il2CppBase() + 0x0))(this);
	}

};

