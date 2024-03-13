#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPhasesEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPhasesEntity"));
	}


	template <typename T = PhasesComponent*> T get_phases() {
		return ((T (*)(IPhasesEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPhases() {
		return ((T (*)(IPhasesEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPhases(Il2CppString* newActiveCondition, float newStartOffset, bool newCyclically, Il2CppArray<uintptr_t>* newPhases) {
		return ((T (*)(IPhasesEntity*, Il2CppString*, float, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newActiveCondition, newStartOffset, newCyclically, newPhases);
	}
	template <typename T = void> T ReplacePhases(Il2CppString* newActiveCondition, float newStartOffset, bool newCyclically, Il2CppArray<uintptr_t>* newPhases) {
		return ((T (*)(IPhasesEntity*, Il2CppString*, float, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newActiveCondition, newStartOffset, newCyclically, newPhases);
	}
	template <typename T = void> T RemovePhases() {
		return ((T (*)(IPhasesEntity*))(Il2CppBase() + 0x0))(this);
	}

};

