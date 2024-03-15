#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnlockDurationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlockDurationComponent"));
	}

	template <typename R = Il2CppString*> R& UnlockedEffect() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Duration() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(UnlockDurationComponent*, Il2CppObject*))(Il2CppBase() + 0x153ABE8))(this, target);
	}

};

