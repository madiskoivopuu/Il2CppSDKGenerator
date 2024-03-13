#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnlockDurationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlockDurationComponent"));
	}

	template <typename T = Il2CppString*> T& UnlockedEffect() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(UnlockDurationComponent*, Il2CppObject*))(Il2CppBase() + 0x153ABE8))(this, target);
	}

};

