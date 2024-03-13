#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ApplyDamage.h" 

class SplashDamageComponent : public ApplyDamage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SplashDamageComponent"));
	}

	template <typename T = TargetsSelector*> T& Selector() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HitEffects() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HitMagics() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(SplashDamageComponent*, Il2CppObject*))(Il2CppBase() + 0x14887A0))(this, target);
	}

};

