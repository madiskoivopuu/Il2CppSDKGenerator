#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FireHazardtest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FireHazard_test"));
	}

	template <typename T = uintptr_t> T& Emitter() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Projectile() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Timer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& Radius() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& Distanse() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Start() {
		return ((T (*)(FireHazardtest*))(Il2CppBase() + 0x1698E60))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FireHazardtest*))(Il2CppBase() + 0x1698E68))(this);
	}
	template <typename T = uintptr_t> T Move(uintptr_t projectile) {
		return ((T (*)(FireHazardtest*, uintptr_t))(Il2CppBase() + 0x1698FDC))(this, projectile);
	}

};

}
