#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGadgetCooldownReduceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGadgetCooldownReduceEntity"));
	}


	template <typename T = GadgetCooldownReduceComponent*> T get_gadgetCooldownReduce() {
		return ((T (*)(IGadgetCooldownReduceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasGadgetCooldownReduce() {
		return ((T (*)(IGadgetCooldownReduceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddGadgetCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IGadgetCooldownReduceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceGadgetCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IGadgetCooldownReduceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveGadgetCooldownReduce() {
		return ((T (*)(IGadgetCooldownReduceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

