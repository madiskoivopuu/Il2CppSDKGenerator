#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITriggerTransition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITriggerTransition"));
	}


	template <typename R = ICommonLogger*> R get_Logger() {
		return ((R (*)(ITriggerTransition*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R TriggerTransition(Transition* transition) {
		return ((R (*)(ITriggerTransition*, Transition*))(Il2CppBase() + 0x0))(this, transition);
	}

};

