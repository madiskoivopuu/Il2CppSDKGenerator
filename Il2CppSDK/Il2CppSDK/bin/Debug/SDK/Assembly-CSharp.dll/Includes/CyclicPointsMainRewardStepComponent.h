#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class CyclicPointsMainRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CyclicPointsMainRewardStepComponent"));
	}


	template <typename R = CurrencyType*> R get_CurrencyType() {
		return ((R (*)(CyclicPointsMainRewardStepComponent*))(Il2CppBase() + 0x1645B0C))(this);
	}
	template <typename R = bool> R get_Premium() {
		return ((R (*)(CyclicPointsMainRewardStepComponent*))(Il2CppBase() + 0x1645B14))(this);
	}

};

