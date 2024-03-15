#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIncomingHealReductionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIncomingHealReductionEntity"));
	}


	template <typename R = IncomingHealReductionComponent*> R get_incomingHealReduction() {
		return ((R (*)(IIncomingHealReductionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasIncomingHealReduction() {
		return ((R (*)(IIncomingHealReductionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddIncomingHealReduction(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IIncomingHealReductionEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceIncomingHealReduction(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IIncomingHealReductionEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveIncomingHealReduction() {
		return ((R (*)(IIncomingHealReductionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

