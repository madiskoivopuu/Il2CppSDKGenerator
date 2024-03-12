#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanInvitablePlayersWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanInvitablePlayersWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowClanInvitablePlayers(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x158A344))(0, manager);
	}
	template <typename T = void> static T OnReceiveRandomInvitablePlayers(uintptr_t manager, Il2CppArray<uintptr_t>* ids) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x158A3DC))(0, manager, ids);
	}

};

}
