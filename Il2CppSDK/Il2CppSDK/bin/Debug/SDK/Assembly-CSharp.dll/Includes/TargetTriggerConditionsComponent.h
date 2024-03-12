#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetTriggerConditionsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetTriggerConditionsComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Relationship() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsAggroTarget() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& HpCoefLess() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& HpCoefMore() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& MinDistance() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& MaxDistance() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& IsTriggerOwner() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& ViewAngle() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(TargetTriggerConditionsComponent*, uintptr_t))(Il2CppBase() + 0x16A5DDC))(this, target);
	}
	template <typename T = bool> T IsValid(uintptr_t world, uintptr_t target, uintptr_t magicTrigger, uintptr_t source) {
		return ((T (*)(TargetTriggerConditionsComponent*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16A5EC8))(this, world, target, magicTrigger, source);
	}
	template <typename T = bool> T IsOwner(uintptr_t world, uintptr_t magicEntity, uintptr_t target) {
		return ((T (*)(TargetTriggerConditionsComponent*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16A62FC))(this, world, magicEntity, target);
	}

};

}
