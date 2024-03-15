#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageCondition"));
	}

	template <typename R = DamageType*> R& IngoreDamageType() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = DamageType*> R& DamageType() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& MinBlocked() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& MinHpCoef() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = bool> R& UseActorBonusVsTarget() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& MinHpValue() {
		return *(R*)((uintptr_t)this + 0x2C);
	}

	template <typename R = bool> R Check(EventEntity* damageEvent) {
		return ((R (*)(DamageCondition*, EventEntity*))(Il2CppBase() + 0x164AF84))(this, damageEvent);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(DamageCondition*, Il2CppObject*))(Il2CppBase() + 0x164B228))(this, target);
	}

};

