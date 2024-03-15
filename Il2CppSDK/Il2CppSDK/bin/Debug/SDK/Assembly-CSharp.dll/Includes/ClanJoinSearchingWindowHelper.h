#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanJoinSearchingWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanJoinSearchingWindowHelper"));
	}


	template <typename R = ClanJoinSearchingWindow*> static R ShowClanJoinSearching(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x158EE08))(0, manager);
	}

};

