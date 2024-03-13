#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourcePlacement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourcePlacement"));
	}

	template <typename T = Il2CppString*> T& rewardName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& rewardAmount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& placementName() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppString*> T getRewardName() {
		return ((T (*)(IronSourcePlacement*))(Il2CppBase() + 0x10DDAB4))(this);
	}
	template <typename T = int32_t> T getRewardAmount() {
		return ((T (*)(IronSourcePlacement*))(Il2CppBase() + 0x10DDABC))(this);
	}
	template <typename T = Il2CppString*> T getPlacementName() {
		return ((T (*)(IronSourcePlacement*))(Il2CppBase() + 0x10DDAC4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(IronSourcePlacement*))(Il2CppBase() + 0x10DDACC))(this);
	}

};

