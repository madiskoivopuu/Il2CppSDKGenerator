#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RewardByTimeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RewardByTimeComponent"));
	}

	template <typename T = int32_t> T& MinRewardTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MaxRewardTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& MinRewardCoef() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MaxRewardCoef() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(RewardByTimeComponent*, Il2CppObject*))(Il2CppBase() + 0x11A0100))(this, target);
	}

};

