#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDEnergyInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDEnergyInfo"));
	}

	template <typename R = uintptr_t> R& EnergyBarImage() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& EnergyText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& EnergyTimeText() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Draw(GameEntity* actor, int64_t now) {
		return ((R (*)(HUDEnergyInfo*, GameEntity*, int64_t))(Il2CppBase() + 0x145252C))(this, actor, now);
	}

};

