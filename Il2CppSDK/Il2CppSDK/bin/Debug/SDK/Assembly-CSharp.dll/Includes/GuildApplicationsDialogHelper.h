#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildApplicationsDialogHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildApplicationsDialogHelper"));
	}


	template <typename T = uintptr_t> static T ShowGuildApplicationsDialog(uintptr_t manager, int64_t guildId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x12E5C60))(0, manager, guildId);
	}

};

}
