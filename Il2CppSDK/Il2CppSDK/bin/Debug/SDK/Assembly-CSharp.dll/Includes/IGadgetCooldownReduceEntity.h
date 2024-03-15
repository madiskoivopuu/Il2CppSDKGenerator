#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGadgetCooldownReduceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGadgetCooldownReduceEntity"));
	}


	template <typename R = GadgetCooldownReduceComponent*> R get_gadgetCooldownReduce() {
		return ((R (*)(IGadgetCooldownReduceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasGadgetCooldownReduce() {
		return ((R (*)(IGadgetCooldownReduceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddGadgetCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IGadgetCooldownReduceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceGadgetCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IGadgetCooldownReduceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveGadgetCooldownReduce() {
		return ((R (*)(IGadgetCooldownReduceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

