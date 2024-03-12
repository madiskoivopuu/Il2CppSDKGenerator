#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RewardWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RewardWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowRewardWindow(uintptr_t manager, Il2CppString* questName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x11A1E90))(0, manager, questName);
	}

};

}
