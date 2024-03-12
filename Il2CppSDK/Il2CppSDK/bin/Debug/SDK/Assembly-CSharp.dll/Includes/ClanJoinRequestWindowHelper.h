#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanJoinRequestWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanJoinRequestWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowClanJoinRequest(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1587614))(0, manager);
	}
	template <typename T = uintptr_t> static T ShowClanJoinResultDialog(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x158DEE0))(0, manager);
	}
	template <typename T = void> static T CloseClanJoinRequest(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x158E1C8))(0, manager);
	}

};

}
