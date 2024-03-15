#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyLockUnlockComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyLockUnlockComponent"));
	}

	template <typename R = bool> R& Unlock() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplyLockUnlockComponent*, Il2CppObject*))(Il2CppBase() + 0x18945A0))(this, target);
	}

};

