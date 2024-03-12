#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentGuildRewardDialogHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentGuildRewardDialogHelper"));
	}


	template <typename T = uintptr_t> static T ShowTournamentGuildReward(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x150591C))(0, manager);
	}

};

}
