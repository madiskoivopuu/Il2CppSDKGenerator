#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyMessageGuildDialogHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyMessageGuildDialogHelper"));
	}


	template <typename R = UIWindow*> static R ShowDailyMessageGuild(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1647380))(0, manager);
	}

};

