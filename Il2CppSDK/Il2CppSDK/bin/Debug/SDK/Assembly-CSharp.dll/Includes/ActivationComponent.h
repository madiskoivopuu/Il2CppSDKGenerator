#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActivationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActivationComponent"));
	}

	template <typename R = Il2CppString*> R& Condition() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& ActiveDelay() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& DeactiveDelay() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ActivationComponent*, Il2CppObject*))(Il2CppBase() + 0x18AD198))(this, target);
	}

};

