#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IImmobilizedDamageBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IImmobilizedDamageBonusEntity"));
	}


	template <typename T = uintptr_t> T get_immobilizedDamageBonus() {
		return ((T (*)(IImmobilizedDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasImmobilizedDamageBonus() {
		return ((T (*)(IImmobilizedDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddImmobilizedDamageBonus(float newValue, uintptr_t newGroup) {
		return ((T (*)(IImmobilizedDamageBonusEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceImmobilizedDamageBonus(float newValue, uintptr_t newGroup) {
		return ((T (*)(IImmobilizedDamageBonusEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveImmobilizedDamageBonus() {
		return ((T (*)(IImmobilizedDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
