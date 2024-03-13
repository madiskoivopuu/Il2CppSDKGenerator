#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyHealComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyHealComponent"));
	}

	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = HealParams*> T& Params() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ApplyHealComponent*, Il2CppObject*))(Il2CppBase() + 0x189442C))(this, target);
	}

};

