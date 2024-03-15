#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class GuildBossPremiumRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildBossPremiumRewardStepComponent"));
	}


	template <typename R = CurrencyType*> R get_CurrencyType() {
		return ((R (*)(GuildBossPremiumRewardStepComponent*))(Il2CppBase() + 0x12E8A38))(this);
	}
	template <typename R = bool> R get_Premium() {
		return ((R (*)(GuildBossPremiumRewardStepComponent*))(Il2CppBase() + 0x12E8A40))(this);
	}

};

