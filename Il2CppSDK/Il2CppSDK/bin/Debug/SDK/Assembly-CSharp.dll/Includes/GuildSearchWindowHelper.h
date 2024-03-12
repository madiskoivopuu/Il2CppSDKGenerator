#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildSearchWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildSearchWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowGuildSearch(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1941848))(0, manager);
	}

};

}
