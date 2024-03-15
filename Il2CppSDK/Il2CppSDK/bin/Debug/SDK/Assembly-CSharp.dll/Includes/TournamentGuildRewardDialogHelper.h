#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentGuildRewardDialogHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentGuildRewardDialogHelper"));
	}


	template <typename R = UIWindow*> static R ShowTournamentGuildReward(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x150591C))(0, manager);
	}

};

