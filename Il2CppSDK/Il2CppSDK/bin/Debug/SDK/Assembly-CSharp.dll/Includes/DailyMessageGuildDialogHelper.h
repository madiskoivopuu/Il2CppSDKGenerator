#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyMessageGuildDialogHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyMessageGuildDialogHelper"));
	}


	template <typename T = UIWindow*> static T ShowDailyMessageGuild(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1647380))(0, manager);
	}

};

