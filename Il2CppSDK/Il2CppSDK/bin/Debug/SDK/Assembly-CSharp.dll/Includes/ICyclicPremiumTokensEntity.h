#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICyclicPremiumTokensEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICyclicPremiumTokensEntity"));
	}


	template <typename R = CyclicPremiumTokensComponent*> R get_cyclicPremiumTokens() {
		return ((R (*)(ICyclicPremiumTokensEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCyclicPremiumTokens() {
		return ((R (*)(ICyclicPremiumTokensEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCyclicPremiumTokens(int32_t newCount) {
		return ((R (*)(ICyclicPremiumTokensEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicPremiumTokens(int32_t newCount) {
		return ((R (*)(ICyclicPremiumTokensEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicPremiumTokens() {
		return ((R (*)(ICyclicPremiumTokensEntity*))(Il2CppBase() + 0x0))(this);
	}

};

