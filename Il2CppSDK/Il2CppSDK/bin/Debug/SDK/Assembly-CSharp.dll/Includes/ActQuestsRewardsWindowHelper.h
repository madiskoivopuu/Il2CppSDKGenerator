#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActQuestsRewardsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActQuestsRewardsWindowHelper"));
	}


	template <typename T = ActQuestsRewardsWindow*> static T ShowActQuestsRewards(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x18F3224))(0, manager);
	}

};

