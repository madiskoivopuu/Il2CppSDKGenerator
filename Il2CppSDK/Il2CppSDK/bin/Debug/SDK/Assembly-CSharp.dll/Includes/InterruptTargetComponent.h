#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InterruptTargetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InterruptTargetComponent"));
	}

	template <typename R = bool> R& Action() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& Sneak() {
		return *(R*)((uintptr_t)this + 0x11);
	}
	template <typename R = bool> R& PursuitTarget() {
		return *(R*)((uintptr_t)this + 0x12);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(InterruptTargetComponent*, Il2CppObject*))(Il2CppBase() + 0x146B22C))(this, target);
	}

};

