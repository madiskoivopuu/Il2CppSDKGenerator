#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAutoAbilityEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAutoAbilityEntity"));
	}


	template <typename T = AutoAbilityComponent*> T get_autoAbility() {
		return ((T (*)(IAutoAbilityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAutoAbility() {
		return ((T (*)(IAutoAbilityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAutoAbility(float newDelay, float newPeriod, Il2CppString* newActivator, Il2CppString* newUseCondition) {
		return ((T (*)(IAutoAbilityEntity*, float, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newDelay, newPeriod, newActivator, newUseCondition);
	}
	template <typename T = void> T ReplaceAutoAbility(float newDelay, float newPeriod, Il2CppString* newActivator, Il2CppString* newUseCondition) {
		return ((T (*)(IAutoAbilityEntity*, float, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newDelay, newPeriod, newActivator, newUseCondition);
	}
	template <typename T = void> T RemoveAutoAbility() {
		return ((T (*)(IAutoAbilityEntity*))(Il2CppBase() + 0x0))(this);
	}

};

