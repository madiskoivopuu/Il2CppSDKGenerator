#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class GiantPremiumRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GiantPremiumRewardStepComponent"));
	}


	template <typename T = CurrencyType*> T get_CurrencyType() {
		return ((T (*)(GiantPremiumRewardStepComponent*))(Il2CppBase() + 0x17724DC))(this);
	}
	template <typename T = bool> T get_Premium() {
		return ((T (*)(GiantPremiumRewardStepComponent*))(Il2CppBase() + 0x17724E4))(this);
	}

};

