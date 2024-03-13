#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HealParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HealParams"));
	}

	template <typename T = float> T& ActorHealModsCoef() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& TargetHealModsCoef() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = HealParams*> static T Default() {
		return ((T (*)(void *))(Il2CppBase() + 0x128AAA0))(0);
	}
	template <typename T = HealParams*> static T LevelUp() {
		return ((T (*)(void *))(Il2CppBase() + 0x128AAAC))(0);
	}
	template <typename T = HealParams*> static T Hot() {
		return ((T (*)(void *))(Il2CppBase() + 0x128AAB8))(0);
	}
	template <typename T = HealParams*> static T Resurrect() {
		return ((T (*)(void *))(Il2CppBase() + 0x128AAC4))(0);
	}
	template <typename T = HealParams*> static T LifeSteal() {
		return ((T (*)(void *))(Il2CppBase() + 0x128AAD0))(0);
	}

};

