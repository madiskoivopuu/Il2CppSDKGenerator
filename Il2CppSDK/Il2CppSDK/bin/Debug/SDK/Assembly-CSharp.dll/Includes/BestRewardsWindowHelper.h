#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BestRewardsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BestRewardsWindowHelper"));
	}


	template <typename R = BestRewardsWindow*> static R ShowBestRewards(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x16BB33C))(0, manager);
	}

};

