#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChestRewardWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestRewardWindowHelper"));
	}


	template <typename R = UIWindow*> static R ShowChestReward(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1743198))(0, manager, targetId);
	}
	template <typename R = void> static R CloseChestReward(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1743264))(0, manager, targetId);
	}
	template <typename R = void> static R OnReceivedRollChestRewardResponse(UIWindowsManager* manager, RollChestRewardResponse data) {
		return ((R (*)(void *, UIWindowsManager*, RollChestRewardResponse))(Il2CppBase() + 0x1743388))(0, manager, data);
	}

};

