#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanInvitablePlayersWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanInvitablePlayersWindowHelper"));
	}


	template <typename R = ClanInvitablePlayersWindow*> static R ShowClanInvitablePlayers(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x158A344))(0, manager);
	}
	template <typename R = void> static R OnReceiveRandomInvitablePlayers(UIWindowsManager* manager, Il2CppArray<int64_t>* ids) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppArray<int64_t>*))(Il2CppBase() + 0x158A3DC))(0, manager, ids);
	}

};

