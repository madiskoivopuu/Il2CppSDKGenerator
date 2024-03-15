#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class GiantMainRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GiantMainRewardStepComponent"));
	}


	template <typename R = CurrencyType*> R get_CurrencyType() {
		return ((R (*)(GiantMainRewardStepComponent*))(Il2CppBase() + 0x17724C4))(this);
	}
	template <typename R = bool> R get_Premium() {
		return ((R (*)(GiantMainRewardStepComponent*))(Il2CppBase() + 0x17724CC))(this);
	}

};

