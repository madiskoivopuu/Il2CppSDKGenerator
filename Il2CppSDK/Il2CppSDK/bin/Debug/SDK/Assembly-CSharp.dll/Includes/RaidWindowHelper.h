#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RaidWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RaidWindowHelper"));
	}


	template <typename T = UIWindow*> static T ShowRaid(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1710BE4))(0, manager);
	}

};

