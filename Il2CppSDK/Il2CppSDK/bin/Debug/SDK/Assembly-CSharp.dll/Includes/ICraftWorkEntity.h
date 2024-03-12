#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICraftWorkEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICraftWorkEntity"));
	}


	template <typename T = uintptr_t> T get_craftWork() {
		return ((T (*)(ICraftWorkEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCraftWork() {
		return ((T (*)(ICraftWorkEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCraftWork(Il2CppString* newRecipe, int64_t newTime, Il2CppString* newFuel, int64_t newFuelTime, float newBoost, bool newIsBlocked, int64_t newBlockTime) {
		return ((T (*)(ICraftWorkEntity*, Il2CppString*, int64_t, Il2CppString*, int64_t, float, bool, int64_t))(Il2CppBase() + 0x0))(this, newRecipe, newTime, newFuel, newFuelTime, newBoost, newIsBlocked, newBlockTime);
	}
	template <typename T = void> T ReplaceCraftWork(Il2CppString* newRecipe, int64_t newTime, Il2CppString* newFuel, int64_t newFuelTime, float newBoost, bool newIsBlocked, int64_t newBlockTime) {
		return ((T (*)(ICraftWorkEntity*, Il2CppString*, int64_t, Il2CppString*, int64_t, float, bool, int64_t))(Il2CppBase() + 0x0))(this, newRecipe, newTime, newFuel, newFuelTime, newBoost, newIsBlocked, newBlockTime);
	}
	template <typename T = void> T RemoveCraftWork() {
		return ((T (*)(ICraftWorkEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
