#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITriggerTransition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITriggerTransition"));
	}


	template <typename T = uintptr_t> T get_Logger() {
		return ((T (*)(ITriggerTransition*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T TriggerTransition(uintptr_t transition) {
		return ((T (*)(ITriggerTransition*, uintptr_t))(Il2CppBase() + 0x0))(this, transition);
	}

};

}
