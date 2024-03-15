#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyHealComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyHealComponent"));
	}

	template <typename R = float> R& Delay() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = HealParams*> R& Params() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplyHealComponent*, Il2CppObject*))(Il2CppBase() + 0x189442C))(this, target);
	}

};

