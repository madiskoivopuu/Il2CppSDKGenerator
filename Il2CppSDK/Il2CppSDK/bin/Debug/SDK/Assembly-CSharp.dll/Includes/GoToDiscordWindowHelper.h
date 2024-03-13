#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GoToDiscordWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoToDiscordWindowHelper"));
	}


	template <typename T = GoToDiscordWindow*> static T ShowGoToDiscord(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x12E0388))(0, manager);
	}

};

