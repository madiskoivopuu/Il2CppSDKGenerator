#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FireHazardtest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FireHazard_test"));
	}

	template <typename R = uintptr_t> R& Emitter() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Projectile() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& Speed() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& Timer() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = float> R& Delay() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& Radius() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = float> R& Distanse() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R Start() {
		return ((R (*)(FireHazardtest*))(Il2CppBase() + 0x1698E60))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(FireHazardtest*))(Il2CppBase() + 0x1698E68))(this);
	}
	template <typename R = uintptr_t> R Move(uintptr_t projectile) {
		return ((R (*)(FireHazardtest*, uintptr_t))(Il2CppBase() + 0x1698FDC))(this, projectile);
	}

};

