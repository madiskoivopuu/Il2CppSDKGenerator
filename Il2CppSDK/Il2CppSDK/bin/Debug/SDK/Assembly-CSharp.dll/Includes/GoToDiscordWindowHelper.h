#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GoToDiscordWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoToDiscordWindowHelper"));
	}


	template <typename R = GoToDiscordWindow*> static R ShowGoToDiscord(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x12E0388))(0, manager);
	}

};

