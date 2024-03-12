#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "IntValueComponent" 

class DeprecatedRewardStepComponent: IntValueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeprecatedRewardStepComponent"));
	}


	template <typename T = uintptr_t> T get_CurrencyType() {
		return ((T (*)(DeprecatedRewardStepComponent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_Premium() {
		return ((T (*)(DeprecatedRewardStepComponent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Convert(uintptr_t world, uintptr_t account) {
		return ((T (*)(DeprecatedRewardStepComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0xEB9FA8))(this, world, account);
	}

};

}
