#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActivationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActivationComponent"));
	}

	template <typename T = Il2CppString*> T& Condition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& ActiveDelay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& DeactiveDelay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ActivationComponent*, uintptr_t))(Il2CppBase() + 0x18AD198))(this, target);
	}

};

}
