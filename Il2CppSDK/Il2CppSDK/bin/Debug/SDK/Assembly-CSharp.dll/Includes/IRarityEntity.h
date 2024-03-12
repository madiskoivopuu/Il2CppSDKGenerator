#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRarityEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRarityEntity"));
	}


	template <typename T = uintptr_t> T get_rarity() {
		return ((T (*)(IRarityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRarity() {
		return ((T (*)(IRarityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRarity(uintptr_t newValue) {
		return ((T (*)(IRarityEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceRarity(uintptr_t newValue) {
		return ((T (*)(IRarityEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveRarity() {
		return ((T (*)(IRarityEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
