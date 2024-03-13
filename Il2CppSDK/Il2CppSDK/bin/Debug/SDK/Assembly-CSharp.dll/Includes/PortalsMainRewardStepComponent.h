#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class PortalsMainRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsMainRewardStepComponent"));
	}


	template <typename T = CurrencyType*> T get_CurrencyType() {
		return ((T (*)(PortalsMainRewardStepComponent*))(Il2CppBase() + 0x16D3E44))(this);
	}
	template <typename T = bool> T get_Premium() {
		return ((T (*)(PortalsMainRewardStepComponent*))(Il2CppBase() + 0x16D3E4C))(this);
	}

};

