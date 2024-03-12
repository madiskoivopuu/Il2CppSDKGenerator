#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChestRewardWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestRewardWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowChestReward(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1743198))(0, manager, targetId);
	}
	template <typename T = void> static T CloseChestReward(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1743264))(0, manager, targetId);
	}
	template <typename T = void> static T OnReceivedRollChestRewardResponse(uintptr_t manager, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1743388))(0, manager, data);
	}

};

}
