#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICashbackCoinsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICashbackCoinsEntity"));
	}


	template <typename R = CashbackCoinsComponent*> R get_cashbackCoins() {
		return ((R (*)(ICashbackCoinsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCashbackCoins() {
		return ((R (*)(ICashbackCoinsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCashbackCoins(int32_t newCount) {
		return ((R (*)(ICashbackCoinsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceCashbackCoins(int32_t newCount) {
		return ((R (*)(ICashbackCoinsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveCashbackCoins() {
		return ((R (*)(ICashbackCoinsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

