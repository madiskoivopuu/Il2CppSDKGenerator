#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDEnergyInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDEnergyInfo"));
	}

	template <typename T = uintptr_t> T& EnergyBarImage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& EnergyText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& EnergyTimeText() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Draw(uintptr_t actor, int64_t now) {
		return ((T (*)(HUDEnergyInfo*, uintptr_t, int64_t))(Il2CppBase() + 0x145252C))(this, actor, now);
	}

};

}
