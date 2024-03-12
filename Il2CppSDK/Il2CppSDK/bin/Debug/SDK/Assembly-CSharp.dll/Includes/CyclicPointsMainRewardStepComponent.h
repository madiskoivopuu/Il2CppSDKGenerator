#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent" 

class CyclicPointsMainRewardStepComponent: DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CyclicPointsMainRewardStepComponent"));
	}


	template <typename T = uintptr_t> T get_CurrencyType() {
		return ((T (*)(CyclicPointsMainRewardStepComponent*))(Il2CppBase() + 0x1645B0C))(this);
	}
	template <typename T = bool> T get_Premium() {
		return ((T (*)(CyclicPointsMainRewardStepComponent*))(Il2CppBase() + 0x1645B14))(this);
	}

};

}
