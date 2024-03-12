#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindGuildWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindGuildWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowFindGuild(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1695DDC))(0, manager);
	}
	template <typename T = void> static T OnReceivedGuildForInvite(uintptr_t manager, uintptr_t errorCode, int64_t guildId) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x1695E74))(0, manager, errorCode, guildId);
	}

};

}
