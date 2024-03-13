#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "IntValueComponent.h" 

class DeprecatedRewardStepComponent : public IntValueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeprecatedRewardStepComponent"));
	}


	template <typename T = CurrencyType*> T get_CurrencyType() {
		return ((T (*)(DeprecatedRewardStepComponent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_Premium() {
		return ((T (*)(DeprecatedRewardStepComponent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Convert(ICommonContexts* world, AccountEntity* account) {
		return ((T (*)(DeprecatedRewardStepComponent*, ICommonContexts*, AccountEntity*))(Il2CppBase() + 0xEB9FA8))(this, world, account);
	}

};

