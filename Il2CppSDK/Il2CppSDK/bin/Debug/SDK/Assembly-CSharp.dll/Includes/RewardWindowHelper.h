#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RewardWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RewardWindowHelper"));
	}


	template <typename R = RewardWindow*> static R ShowRewardWindow(UIWindowsManager* manager, Il2CppString* questName) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x11A1E90))(0, manager, questName);
	}

};

