#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ApplyDamage.h" 

class SplashDamageComponent : public ApplyDamage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SplashDamageComponent"));
	}

	template <typename R = TargetsSelector*> R& Selector() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& HitEffects() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& HitMagics() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(SplashDamageComponent*, Il2CppObject*))(Il2CppBase() + 0x14887A0))(this, target);
	}

};

