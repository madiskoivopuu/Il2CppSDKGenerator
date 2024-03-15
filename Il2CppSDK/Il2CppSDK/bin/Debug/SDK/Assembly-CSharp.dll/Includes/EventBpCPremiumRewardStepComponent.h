#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class EventBpCPremiumRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventBpCPremiumRewardStepComponent"));
	}


	template <typename R = CurrencyType> R get_CurrencyType() {
		return ((R (*)(EventBpCPremiumRewardStepComponent*))(Il2CppBase() + 0x137F5F8))(this);
	}
	template <typename R = bool> R get_Premium() {
		return ((R (*)(EventBpCPremiumRewardStepComponent*))(Il2CppBase() + 0x137F600))(this);
	}

};

