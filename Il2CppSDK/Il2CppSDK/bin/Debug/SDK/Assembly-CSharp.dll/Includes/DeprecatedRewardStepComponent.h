#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "IntValueComponent.h" 

class DeprecatedRewardStepComponent : public IntValueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeprecatedRewardStepComponent"));
	}


	template <typename R = CurrencyType*> R get_CurrencyType() {
		return ((R (*)(DeprecatedRewardStepComponent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_Premium() {
		return ((R (*)(DeprecatedRewardStepComponent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Convert(ICommonContexts* world, AccountEntity* account) {
		return ((R (*)(DeprecatedRewardStepComponent*, ICommonContexts*, AccountEntity*))(Il2CppBase() + 0xEB9FA8))(this, world, account);
	}

};

