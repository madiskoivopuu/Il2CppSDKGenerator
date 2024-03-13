#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeRankGuildDialogHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeRankGuildDialogHelper"));
	}


	template <typename T = UIWindow*> static T ShowChangeRankGuild(UIWindowsManager* manager, int64_t playerId) {
		return ((T (*)(void *, UIWindowsManager*, int64_t))(Il2CppBase() + 0x13EBB34))(0, manager, playerId);
	}

};

