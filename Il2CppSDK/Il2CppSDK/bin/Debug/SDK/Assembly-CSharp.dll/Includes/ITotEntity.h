#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITotEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITotEntity"));
	}


	template <typename R = TotComponent*> R get_tot() {
		return ((R (*)(ITotEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTot() {
		return ((R (*)(ITotEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTot(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(ITotEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceTot(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(ITotEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveTot() {
		return ((R (*)(ITotEntity*))(Il2CppBase() + 0x0))(this);
	}

};

