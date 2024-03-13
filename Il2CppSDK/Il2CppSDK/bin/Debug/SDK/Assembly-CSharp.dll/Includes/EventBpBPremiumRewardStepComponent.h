#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class EventBpBPremiumRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventBpBPremiumRewardStepComponent"));
	}


	template <typename T = CurrencyType*> T get_CurrencyType() {
		return ((T (*)(EventBpBPremiumRewardStepComponent*))(Il2CppBase() + 0x137F5C8))(this);
	}
	template <typename T = bool> T get_Premium() {
		return ((T (*)(EventBpBPremiumRewardStepComponent*))(Il2CppBase() + 0x137F5D0))(this);
	}

};

