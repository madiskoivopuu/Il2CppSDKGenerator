#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent" 

class SeasonPremiumRewardStepComponent: DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonPremiumRewardStepComponent"));
	}


	template <typename T = uintptr_t> T get_CurrencyType() {
		return ((T (*)(SeasonPremiumRewardStepComponent*))(Il2CppBase() + 0x1361400))(this);
	}
	template <typename T = bool> T get_Premium() {
		return ((T (*)(SeasonPremiumRewardStepComponent*))(Il2CppBase() + 0x1361408))(this);
	}

};

}
