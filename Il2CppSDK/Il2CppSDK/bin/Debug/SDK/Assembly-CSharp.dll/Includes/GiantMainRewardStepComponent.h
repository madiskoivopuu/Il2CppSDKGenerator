#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent" 

class GiantMainRewardStepComponent: DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GiantMainRewardStepComponent"));
	}


	template <typename T = uintptr_t> T get_CurrencyType() {
		return ((T (*)(GiantMainRewardStepComponent*))(Il2CppBase() + 0x17724C4))(this);
	}
	template <typename T = bool> T get_Premium() {
		return ((T (*)(GiantMainRewardStepComponent*))(Il2CppBase() + 0x17724CC))(this);
	}

};

}
