#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class SeasonPremiumRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonPremiumRewardStepComponent"));
	}


	template <typename R = CurrencyType> R get_CurrencyType() {
		return ((R (*)(SeasonPremiumRewardStepComponent*))(Il2CppBase() + 0x1361400))(this);
	}
	template <typename R = bool> R get_Premium() {
		return ((R (*)(SeasonPremiumRewardStepComponent*))(Il2CppBase() + 0x1361408))(this);
	}

};

