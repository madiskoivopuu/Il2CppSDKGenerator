#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMagicTriggerTypeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMagicTriggerTypeEntity"));
	}


	template <typename R = MagicTriggerTypeComponent*> R get_magicTriggerType() {
		return ((R (*)(IMagicTriggerTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMagicTriggerType() {
		return ((R (*)(IMagicTriggerTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMagicTriggerType(MagicTriggerType newValue) {
		return ((R (*)(IMagicTriggerTypeEntity*, MagicTriggerType))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceMagicTriggerType(MagicTriggerType newValue) {
		return ((R (*)(IMagicTriggerTypeEntity*, MagicTriggerType))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveMagicTriggerType() {
		return ((R (*)(IMagicTriggerTypeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

