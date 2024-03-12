#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOutcomingHealBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOutcomingHealBonusEntity"));
	}


	template <typename T = uintptr_t> T get_outcomingHealBonus() {
		return ((T (*)(IOutcomingHealBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasOutcomingHealBonus() {
		return ((T (*)(IOutcomingHealBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddOutcomingHealBonus(float newValue, uintptr_t newGroup) {
		return ((T (*)(IOutcomingHealBonusEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceOutcomingHealBonus(float newValue, uintptr_t newGroup) {
		return ((T (*)(IOutcomingHealBonusEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveOutcomingHealBonus() {
		return ((T (*)(IOutcomingHealBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
