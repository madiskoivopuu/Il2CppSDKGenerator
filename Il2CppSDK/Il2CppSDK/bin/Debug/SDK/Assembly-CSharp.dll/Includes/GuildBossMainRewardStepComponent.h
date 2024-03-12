#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent" 

class GuildBossMainRewardStepComponent: DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildBossMainRewardStepComponent"));
	}


	template <typename T = uintptr_t> T get_CurrencyType() {
		return ((T (*)(GuildBossMainRewardStepComponent*))(Il2CppBase() + 0x12E72D8))(this);
	}
	template <typename T = bool> T get_Premium() {
		return ((T (*)(GuildBossMainRewardStepComponent*))(Il2CppBase() + 0x12E72E0))(this);
	}

};

}
