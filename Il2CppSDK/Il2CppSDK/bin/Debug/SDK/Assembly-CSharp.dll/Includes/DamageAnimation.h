#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageAnimation"));
	}

	template <typename T = uintptr_t> T& animationTarget() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& rotationCurveX() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& rotationCurveY() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& rotationCurveZ() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Play() {
		return ((T (*)(DamageAnimation*))(Il2CppBase() + 0x164AE34))(this);
	}
	template <typename T = uintptr_t> T Routine() {
		return ((T (*)(DamageAnimation*))(Il2CppBase() + 0x164AED4))(this);
	}

};

}
