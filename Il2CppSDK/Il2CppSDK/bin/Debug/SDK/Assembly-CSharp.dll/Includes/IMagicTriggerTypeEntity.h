#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMagicTriggerTypeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMagicTriggerTypeEntity"));
	}


	template <typename T = uintptr_t> T get_magicTriggerType() {
		return ((T (*)(IMagicTriggerTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMagicTriggerType() {
		return ((T (*)(IMagicTriggerTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMagicTriggerType(uintptr_t newValue) {
		return ((T (*)(IMagicTriggerTypeEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceMagicTriggerType(uintptr_t newValue) {
		return ((T (*)(IMagicTriggerTypeEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveMagicTriggerType() {
		return ((T (*)(IMagicTriggerTypeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
