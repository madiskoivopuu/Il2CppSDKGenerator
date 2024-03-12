#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanJoinSearchingWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanJoinSearchingWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowClanJoinSearching(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x158EE08))(0, manager);
	}

};

}
