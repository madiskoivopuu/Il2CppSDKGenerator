#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAutoAbilityEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAutoAbilityEntity"));
	}


	template <typename R = AutoAbilityComponent*> R get_autoAbility() {
		return ((R (*)(IAutoAbilityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAutoAbility() {
		return ((R (*)(IAutoAbilityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAutoAbility(float newDelay, float newPeriod, Il2CppString* newActivator, Il2CppString* newUseCondition) {
		return ((R (*)(IAutoAbilityEntity*, float, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newDelay, newPeriod, newActivator, newUseCondition);
	}
	template <typename R = void> R ReplaceAutoAbility(float newDelay, float newPeriod, Il2CppString* newActivator, Il2CppString* newUseCondition) {
		return ((R (*)(IAutoAbilityEntity*, float, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newDelay, newPeriod, newActivator, newUseCondition);
	}
	template <typename R = void> R RemoveAutoAbility() {
		return ((R (*)(IAutoAbilityEntity*))(Il2CppBase() + 0x0))(this);
	}

};

