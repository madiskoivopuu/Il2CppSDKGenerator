#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class EventBpCPremiumRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventBpCPremiumRewardStepComponent"));
	}


	template <typename T = CurrencyType*> T get_CurrencyType() {
		return ((T (*)(EventBpCPremiumRewardStepComponent*))(Il2CppBase() + 0x137F5F8))(this);
	}
	template <typename T = bool> T get_Premium() {
		return ((T (*)(EventBpCPremiumRewardStepComponent*))(Il2CppBase() + 0x137F600))(this);
	}

};

