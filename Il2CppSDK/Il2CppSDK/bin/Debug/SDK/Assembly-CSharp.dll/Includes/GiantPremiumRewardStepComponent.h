#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class GiantPremiumRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GiantPremiumRewardStepComponent"));
	}


	template <typename R = CurrencyType*> R get_CurrencyType() {
		return ((R (*)(GiantPremiumRewardStepComponent*))(Il2CppBase() + 0x17724DC))(this);
	}
	template <typename R = bool> R get_Premium() {
		return ((R (*)(GiantPremiumRewardStepComponent*))(Il2CppBase() + 0x17724E4))(this);
	}

};

