#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class SeasonMainRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonMainRewardStepComponent"));
	}


	template <typename R = CurrencyType> R get_CurrencyType() {
		return ((R (*)(SeasonMainRewardStepComponent*))(Il2CppBase() + 0x136052C))(this);
	}
	template <typename R = bool> R get_Premium() {
		return ((R (*)(SeasonMainRewardStepComponent*))(Il2CppBase() + 0x1360534))(this);
	}

};

