#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITotEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITotEntity"));
	}


	template <typename T = TotComponent*> T get_tot() {
		return ((T (*)(ITotEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTot() {
		return ((T (*)(ITotEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ITotEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceTot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ITotEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveTot() {
		return ((T (*)(ITotEntity*))(Il2CppBase() + 0x0))(this);
	}

};

