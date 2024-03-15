#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class EventBpBPremiumRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventBpBPremiumRewardStepComponent"));
	}


	template <typename R = CurrencyType*> R get_CurrencyType() {
		return ((R (*)(EventBpBPremiumRewardStepComponent*))(Il2CppBase() + 0x137F5C8))(this);
	}
	template <typename R = bool> R get_Premium() {
		return ((R (*)(EventBpBPremiumRewardStepComponent*))(Il2CppBase() + 0x137F5D0))(this);
	}

};

