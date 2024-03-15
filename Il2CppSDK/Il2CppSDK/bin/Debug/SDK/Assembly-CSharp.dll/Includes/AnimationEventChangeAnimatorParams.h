#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimationEventChangeAnimatorParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimationEventChangeAnimatorParams"));
	}

	template <typename R = uintptr_t> R& animator() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& IntName() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& DefaultState() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R IncreaseInt() {
		return ((R (*)(AnimationEventChangeAnimatorParams*))(Il2CppBase() + 0x188B4AC))(this);
	}
	template <typename R = void> R ResetInt() {
		return ((R (*)(AnimationEventChangeAnimatorParams*))(Il2CppBase() + 0x188B4F4))(this);
	}

};

