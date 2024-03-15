#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimationIntRandomizer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimationIntRandomizer"));
	}

	template <typename R = float> R& minTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& maxTime() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = uintptr_t> R& animator() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Start() {
		return ((R (*)(AnimationIntRandomizer*))(Il2CppBase() + 0x188BB4C))(this);
	}
	template <typename R = uintptr_t> R SetIntAnimator() {
		return ((R (*)(AnimationIntRandomizer*))(Il2CppBase() + 0x188BC88))(this);
	}

};

