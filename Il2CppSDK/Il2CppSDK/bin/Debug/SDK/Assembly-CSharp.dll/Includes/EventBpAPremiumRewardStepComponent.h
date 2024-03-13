#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class EventBpAPremiumRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventBpAPremiumRewardStepComponent"));
	}


	template <typename T = CurrencyType*> T get_CurrencyType() {
		return ((T (*)(EventBpAPremiumRewardStepComponent*))(Il2CppBase() + 0x137F598))(this);
	}
	template <typename T = bool> T get_Premium() {
		return ((T (*)(EventBpAPremiumRewardStepComponent*))(Il2CppBase() + 0x137F5A0))(this);
	}

};

