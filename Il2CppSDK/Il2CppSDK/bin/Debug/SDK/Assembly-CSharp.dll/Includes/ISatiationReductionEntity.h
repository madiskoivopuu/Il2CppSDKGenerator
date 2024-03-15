#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISatiationReductionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISatiationReductionEntity"));
	}


	template <typename R = SatiationReductionComponent*> R get_satiationReduction() {
		return ((R (*)(ISatiationReductionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSatiationReduction() {
		return ((R (*)(ISatiationReductionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSatiationReduction(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ISatiationReductionEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSatiationReduction(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ISatiationReductionEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSatiationReduction() {
		return ((R (*)(ISatiationReductionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

