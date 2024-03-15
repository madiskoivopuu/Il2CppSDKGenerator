#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourcePlacement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourcePlacement"));
	}

	template <typename R = Il2CppString*> R& rewardName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& rewardAmount() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& placementName() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = Il2CppString*> R getRewardName() {
		return ((R (*)(IronSourcePlacement*))(Il2CppBase() + 0x10DDAB4))(this);
	}
	template <typename R = int32_t> R getRewardAmount() {
		return ((R (*)(IronSourcePlacement*))(Il2CppBase() + 0x10DDABC))(this);
	}
	template <typename R = Il2CppString*> R getPlacementName() {
		return ((R (*)(IronSourcePlacement*))(Il2CppBase() + 0x10DDAC4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(IronSourcePlacement*))(Il2CppBase() + 0x10DDACC))(this);
	}

};

