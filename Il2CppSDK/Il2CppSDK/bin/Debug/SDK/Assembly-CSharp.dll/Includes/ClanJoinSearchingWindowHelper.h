#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanJoinSearchingWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanJoinSearchingWindowHelper"));
	}


	template <typename T = ClanJoinSearchingWindow*> static T ShowClanJoinSearching(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x158EE08))(0, manager);
	}

};

