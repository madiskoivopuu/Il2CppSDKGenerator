#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BestRewardsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BestRewardsWindowHelper"));
	}


	template <typename T = BestRewardsWindow*> static T ShowBestRewards(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x16BB33C))(0, manager);
	}

};

