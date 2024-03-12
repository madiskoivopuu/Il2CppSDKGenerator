#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICashbackCoinsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICashbackCoinsEntity"));
	}


	template <typename T = uintptr_t> T get_cashbackCoins() {
		return ((T (*)(ICashbackCoinsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCashbackCoins() {
		return ((T (*)(ICashbackCoinsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCashbackCoins(int32_t newCount) {
		return ((T (*)(ICashbackCoinsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceCashbackCoins(int32_t newCount) {
		return ((T (*)(ICashbackCoinsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveCashbackCoins() {
		return ((T (*)(ICashbackCoinsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
