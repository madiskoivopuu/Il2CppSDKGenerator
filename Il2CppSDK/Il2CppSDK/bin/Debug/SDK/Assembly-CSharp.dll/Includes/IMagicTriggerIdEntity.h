#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMagicTriggerIdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMagicTriggerIdEntity"));
	}


	template <typename R = MagicTriggerIdComponent*> R get_magicTriggerId() {
		return ((R (*)(IMagicTriggerIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMagicTriggerId() {
		return ((R (*)(IMagicTriggerIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMagicTriggerId(int32_t newId) {
		return ((R (*)(IMagicTriggerIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceMagicTriggerId(int32_t newId) {
		return ((R (*)(IMagicTriggerIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveMagicTriggerId() {
		return ((R (*)(IMagicTriggerIdEntity*))(Il2CppBase() + 0x0))(this);
	}

};

