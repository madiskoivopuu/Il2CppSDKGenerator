#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageAnimation"));
	}

	template <typename R = uintptr_t> R& animationTarget() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& rotationCurveX() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& rotationCurveY() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& rotationCurveZ() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& duration() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R Play() {
		return ((R (*)(DamageAnimation*))(Il2CppBase() + 0x164AE34))(this);
	}
	template <typename R = uintptr_t> R Routine() {
		return ((R (*)(DamageAnimation*))(Il2CppBase() + 0x164AED4))(this);
	}

};

