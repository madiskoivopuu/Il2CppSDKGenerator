#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyLockUnlockComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyLockUnlockComponent"));
	}

	template <typename T = bool> T& Unlock() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ApplyLockUnlockComponent*, uintptr_t))(Il2CppBase() + 0x18945A0))(this, target);
	}

};

}
