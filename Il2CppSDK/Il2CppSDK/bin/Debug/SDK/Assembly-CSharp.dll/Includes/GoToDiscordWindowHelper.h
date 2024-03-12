#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GoToDiscordWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoToDiscordWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowGoToDiscord(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12E0388))(0, manager);
	}

};

}
