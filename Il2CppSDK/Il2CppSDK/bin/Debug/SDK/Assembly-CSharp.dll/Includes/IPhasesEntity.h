#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPhasesEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPhasesEntity"));
	}


	template <typename R = PhasesComponent*> R get_phases() {
		return ((R (*)(IPhasesEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPhases() {
		return ((R (*)(IPhasesEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPhases(Il2CppString* newActiveCondition, float newStartOffset, bool newCyclically, Il2CppArray<Phase*>* newPhases) {
		return ((R (*)(IPhasesEntity*, Il2CppString*, float, bool, Il2CppArray<Phase*>*))(Il2CppBase() + 0x0))(this, newActiveCondition, newStartOffset, newCyclically, newPhases);
	}
	template <typename R = void> R ReplacePhases(Il2CppString* newActiveCondition, float newStartOffset, bool newCyclically, Il2CppArray<Phase*>* newPhases) {
		return ((R (*)(IPhasesEntity*, Il2CppString*, float, bool, Il2CppArray<Phase*>*))(Il2CppBase() + 0x0))(this, newActiveCondition, newStartOffset, newCyclically, newPhases);
	}
	template <typename R = void> R RemovePhases() {
		return ((R (*)(IPhasesEntity*))(Il2CppBase() + 0x0))(this);
	}

};

