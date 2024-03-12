#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimationIntRandomizer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimationIntRandomizer"));
	}

	template <typename T = float> T& minTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& maxTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(AnimationIntRandomizer*))(Il2CppBase() + 0x188BB4C))(this);
	}
	template <typename T = uintptr_t> T SetIntAnimator() {
		return ((T (*)(AnimationIntRandomizer*))(Il2CppBase() + 0x188BC88))(this);
	}

};

}
