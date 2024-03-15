#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HealParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HealParams"));
	}

	template <typename R = float> R& ActorHealModsCoef() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& TargetHealModsCoef() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = HealParams*> static R Default() {
		return ((R (*)(void *))(Il2CppBase() + 0x128AAA0))(0);
	}
	template <typename R = HealParams*> static R LevelUp() {
		return ((R (*)(void *))(Il2CppBase() + 0x128AAAC))(0);
	}
	template <typename R = HealParams*> static R Hot() {
		return ((R (*)(void *))(Il2CppBase() + 0x128AAB8))(0);
	}
	template <typename R = HealParams*> static R Resurrect() {
		return ((R (*)(void *))(Il2CppBase() + 0x128AAC4))(0);
	}
	template <typename R = HealParams*> static R LifeSteal() {
		return ((R (*)(void *))(Il2CppBase() + 0x128AAD0))(0);
	}

};

