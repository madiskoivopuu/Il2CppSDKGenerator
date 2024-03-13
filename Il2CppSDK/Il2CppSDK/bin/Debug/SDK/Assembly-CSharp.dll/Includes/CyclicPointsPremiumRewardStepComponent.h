#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class CyclicPointsPremiumRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CyclicPointsPremiumRewardStepComponent"));
	}


	template <typename T = CurrencyType*> T get_CurrencyType() {
		return ((T (*)(CyclicPointsPremiumRewardStepComponent*))(Il2CppBase() + 0x1645B24))(this);
	}
	template <typename T = bool> T get_Premium() {
		return ((T (*)(CyclicPointsPremiumRewardStepComponent*))(Il2CppBase() + 0x1645B2C))(this);
	}

};

