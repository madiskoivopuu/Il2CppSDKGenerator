#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindPlayerGuildWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindPlayerGuildWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowFindPlayerGuild(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1697200))(0, manager);
	}
	template <typename T = void> static T OnReceivedGuildPlayerForInvite(uintptr_t manager, uintptr_t code, int64_t guildId) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x1697298))(0, manager, code, guildId);
	}

};

}
