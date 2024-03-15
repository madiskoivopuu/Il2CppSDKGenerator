#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RewardByTimeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RewardByTimeComponent"));
	}

	template <typename R = int32_t> R& MinRewardTime() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& MaxRewardTime() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& MinRewardCoef() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& MaxRewardCoef() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(RewardByTimeComponent*, Il2CppObject*))(Il2CppBase() + 0x11A0100))(this, target);
	}

};

