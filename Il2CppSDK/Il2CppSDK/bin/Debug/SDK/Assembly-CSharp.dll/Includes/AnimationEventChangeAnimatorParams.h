#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimationEventChangeAnimatorParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimationEventChangeAnimatorParams"));
	}

	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& IntName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& DefaultState() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T IncreaseInt() {
		return ((T (*)(AnimationEventChangeAnimatorParams*))(Il2CppBase() + 0x188B4AC))(this);
	}
	template <typename T = void> T ResetInt() {
		return ((T (*)(AnimationEventChangeAnimatorParams*))(Il2CppBase() + 0x188B4F4))(this);
	}

};

}
