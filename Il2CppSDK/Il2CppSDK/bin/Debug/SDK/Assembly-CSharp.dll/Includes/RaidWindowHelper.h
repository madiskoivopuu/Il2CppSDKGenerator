#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RaidWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RaidWindowHelper"));
	}


	template <typename R = UIWindow*> static R ShowRaid(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1710BE4))(0, manager);
	}

};

