#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class RewardWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RewardWindow"));
	}

	template <typename T = uintptr_t> T& _captionText() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _descriptionText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _rewardIcon() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _claimButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RewardWindow*))(Il2CppBase() + 0x11A1A38))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(RewardWindow*))(Il2CppBase() + 0x11A1B14))(this);
	}
	template <typename T = void> T OnClaimClick() {
		return ((T (*)(RewardWindow*))(Il2CppBase() + 0x11A1D78))(this);
	}
	template <typename T = uintptr_t> T Claiming() {
		return ((T (*)(RewardWindow*))(Il2CppBase() + 0x11A1DC4))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(RewardWindow*))(Il2CppBase() + 0x11A1E3C))(this);
	}

};

}
