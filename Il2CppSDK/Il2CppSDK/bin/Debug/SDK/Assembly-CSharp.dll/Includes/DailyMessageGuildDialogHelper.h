#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyMessageGuildDialogHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyMessageGuildDialogHelper"));
	}


	template <typename T = uintptr_t> static T ShowDailyMessageGuild(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1647380))(0, manager);
	}

};

}
