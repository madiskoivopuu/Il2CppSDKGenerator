#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICooldownContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICooldownContexts"));
	}


	template <typename T = uintptr_t> T get_cooldowns() {
		return ((T (*)(ICooldownContexts*))(Il2CppBase() + 0x0))(this);
	}

};

}
