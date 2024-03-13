#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageCondition"));
	}

	template <typename T = DamageType*> T& IngoreDamageType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = DamageType*> T& DamageType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MinBlocked() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& MinHpCoef() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& UseActorBonusVsTarget() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& MinHpValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = bool> T Check(EventEntity* damageEvent) {
		return ((T (*)(DamageCondition*, EventEntity*))(Il2CppBase() + 0x164AF84))(this, damageEvent);
	}
	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(DamageCondition*, Il2CppObject*))(Il2CppBase() + 0x164B228))(this, target);
	}

};

