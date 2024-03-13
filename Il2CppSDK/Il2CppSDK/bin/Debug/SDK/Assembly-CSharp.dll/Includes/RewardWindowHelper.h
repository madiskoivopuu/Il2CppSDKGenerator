#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RewardWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RewardWindowHelper"));
	}


	template <typename T = RewardWindow*> static T ShowRewardWindow(UIWindowsManager* manager, Il2CppString* questName) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x11A1E90))(0, manager, questName);
	}

};

