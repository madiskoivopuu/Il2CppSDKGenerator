#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMagicTriggerContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMagicTriggerContext"));
	}


	template <typename T = uintptr_t> T get_magicTrigger() {
		return ((T (*)(IMagicTriggerContext*))(Il2CppBase() + 0x0))(this);
	}

};

}
