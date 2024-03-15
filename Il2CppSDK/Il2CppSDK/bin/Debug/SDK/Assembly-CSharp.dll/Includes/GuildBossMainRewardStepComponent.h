#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class GuildBossMainRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildBossMainRewardStepComponent"));
	}


	template <typename R = CurrencyType*> R get_CurrencyType() {
		return ((R (*)(GuildBossMainRewardStepComponent*))(Il2CppBase() + 0x12E72D8))(this);
	}
	template <typename R = bool> R get_Premium() {
		return ((R (*)(GuildBossMainRewardStepComponent*))(Il2CppBase() + 0x12E72E0))(this);
	}

};

