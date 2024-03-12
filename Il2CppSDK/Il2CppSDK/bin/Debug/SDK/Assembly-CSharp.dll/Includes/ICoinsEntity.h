#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICoinsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICoinsEntity"));
	}


	template <typename T = uintptr_t> T get_coins() {
		return ((T (*)(ICoinsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCoins() {
		return ((T (*)(ICoinsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCoins(int32_t newCount) {
		return ((T (*)(ICoinsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceCoins(int32_t newCount) {
		return ((T (*)(ICoinsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveCoins() {
		return ((T (*)(ICoinsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
