#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICyclicPremiumTokensEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICyclicPremiumTokensEntity"));
	}


	template <typename T = CyclicPremiumTokensComponent*> T get_cyclicPremiumTokens() {
		return ((T (*)(ICyclicPremiumTokensEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCyclicPremiumTokens() {
		return ((T (*)(ICyclicPremiumTokensEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCyclicPremiumTokens(int32_t newCount) {
		return ((T (*)(ICyclicPremiumTokensEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicPremiumTokens(int32_t newCount) {
		return ((T (*)(ICyclicPremiumTokensEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicPremiumTokens() {
		return ((T (*)(ICyclicPremiumTokensEntity*))(Il2CppBase() + 0x0))(this);
	}

};

