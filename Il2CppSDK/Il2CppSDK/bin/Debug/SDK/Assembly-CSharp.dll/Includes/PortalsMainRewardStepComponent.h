#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class PortalsMainRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsMainRewardStepComponent"));
	}


	template <typename R = CurrencyType*> R get_CurrencyType() {
		return ((R (*)(PortalsMainRewardStepComponent*))(Il2CppBase() + 0x16D3E44))(this);
	}
	template <typename R = bool> R get_Premium() {
		return ((R (*)(PortalsMainRewardStepComponent*))(Il2CppBase() + 0x16D3E4C))(this);
	}

};

