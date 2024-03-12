#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAFKTriggerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAFKTriggerEntity"));
	}


	template <typename T = uintptr_t> T get_aFKTrigger() {
		return ((T (*)(IAFKTriggerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAFKTrigger() {
		return ((T (*)(IAFKTriggerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAFKTrigger(bool newMove) {
		return ((T (*)(IAFKTriggerEntity*, bool))(Il2CppBase() + 0x0))(this, newMove);
	}
	template <typename T = void> T ReplaceAFKTrigger(bool newMove) {
		return ((T (*)(IAFKTriggerEntity*, bool))(Il2CppBase() + 0x0))(this, newMove);
	}
	template <typename T = void> T RemoveAFKTrigger() {
		return ((T (*)(IAFKTriggerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
