#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIncomingHealBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIncomingHealBonusEntity"));
	}


	template <typename T = uintptr_t> T get_incomingHealBonus() {
		return ((T (*)(IIncomingHealBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasIncomingHealBonus() {
		return ((T (*)(IIncomingHealBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddIncomingHealBonus(float newValue, uintptr_t newGroup) {
		return ((T (*)(IIncomingHealBonusEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceIncomingHealBonus(float newValue, uintptr_t newGroup) {
		return ((T (*)(IIncomingHealBonusEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveIncomingHealBonus() {
		return ((T (*)(IIncomingHealBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
