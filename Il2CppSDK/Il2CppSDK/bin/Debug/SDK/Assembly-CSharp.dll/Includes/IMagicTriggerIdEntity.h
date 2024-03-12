#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMagicTriggerIdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMagicTriggerIdEntity"));
	}


	template <typename T = uintptr_t> T get_magicTriggerId() {
		return ((T (*)(IMagicTriggerIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMagicTriggerId() {
		return ((T (*)(IMagicTriggerIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMagicTriggerId(int32_t newId) {
		return ((T (*)(IMagicTriggerIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceMagicTriggerId(int32_t newId) {
		return ((T (*)(IMagicTriggerIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveMagicTriggerId() {
		return ((T (*)(IMagicTriggerIdEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
