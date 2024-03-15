#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICoinsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICoinsEntity"));
	}


	template <typename R = CoinsComponent*> R get_coins() {
		return ((R (*)(ICoinsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCoins() {
		return ((R (*)(ICoinsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCoins(int32_t newCount) {
		return ((R (*)(ICoinsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceCoins(int32_t newCount) {
		return ((R (*)(ICoinsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveCoins() {
		return ((R (*)(ICoinsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

