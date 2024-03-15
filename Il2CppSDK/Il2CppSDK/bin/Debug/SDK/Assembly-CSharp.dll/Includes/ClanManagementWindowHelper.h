#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanManagementWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanManagementWindowHelper"));
	}


	template <typename R = ClanManagementWindow*> static R ShowClanManagement(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15948F0))(0, manager);
	}

};

