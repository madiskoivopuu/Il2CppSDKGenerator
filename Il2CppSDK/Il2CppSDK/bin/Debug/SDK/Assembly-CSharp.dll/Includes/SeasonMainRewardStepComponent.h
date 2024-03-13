#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class SeasonMainRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonMainRewardStepComponent"));
	}


	template <typename T = CurrencyType*> T get_CurrencyType() {
		return ((T (*)(SeasonMainRewardStepComponent*))(Il2CppBase() + 0x136052C))(this);
	}
	template <typename T = bool> T get_Premium() {
		return ((T (*)(SeasonMainRewardStepComponent*))(Il2CppBase() + 0x1360534))(this);
	}

};

