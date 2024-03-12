#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClanContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClanContexts"));
	}


	template <typename T = uintptr_t> T get_clans() {
		return ((T (*)(IClanContexts*))(Il2CppBase() + 0x0))(this);
	}

};

}
