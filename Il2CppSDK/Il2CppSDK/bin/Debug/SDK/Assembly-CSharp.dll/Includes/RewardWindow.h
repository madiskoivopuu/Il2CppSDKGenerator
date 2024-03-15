#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class RewardWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RewardWindow"));
	}

	template <typename R = uintptr_t> R& _captionText() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _descriptionText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _rewardIcon() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _claimButton() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(RewardWindow*))(Il2CppBase() + 0x11A1A38))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(RewardWindow*))(Il2CppBase() + 0x11A1B14))(this);
	}
	template <typename R = void> R OnClaimClick() {
		return ((R (*)(RewardWindow*))(Il2CppBase() + 0x11A1D78))(this);
	}
	template <typename R = uintptr_t> R Claiming() {
		return ((R (*)(RewardWindow*))(Il2CppBase() + 0x11A1DC4))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(RewardWindow*))(Il2CppBase() + 0x11A1E3C))(this);
	}

};

