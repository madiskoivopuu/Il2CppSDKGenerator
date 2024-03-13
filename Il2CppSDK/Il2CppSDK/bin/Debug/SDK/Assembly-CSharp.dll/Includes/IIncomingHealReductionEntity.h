#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIncomingHealReductionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIncomingHealReductionEntity"));
	}


	template <typename T = IncomingHealReductionComponent*> T get_incomingHealReduction() {
		return ((T (*)(IIncomingHealReductionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasIncomingHealReduction() {
		return ((T (*)(IIncomingHealReductionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddIncomingHealReduction(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IIncomingHealReductionEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceIncomingHealReduction(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IIncomingHealReductionEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveIncomingHealReduction() {
		return ((T (*)(IIncomingHealReductionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

