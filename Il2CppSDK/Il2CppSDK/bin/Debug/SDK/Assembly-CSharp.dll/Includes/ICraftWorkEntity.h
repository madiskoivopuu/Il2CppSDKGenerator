#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICraftWorkEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICraftWorkEntity"));
	}


	template <typename R = CraftWorkComponent*> R get_craftWork() {
		return ((R (*)(ICraftWorkEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCraftWork() {
		return ((R (*)(ICraftWorkEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCraftWork(Il2CppString* newRecipe, int64_t newTime, Il2CppString* newFuel, int64_t newFuelTime, float newBoost, bool newIsBlocked, int64_t newBlockTime) {
		return ((R (*)(ICraftWorkEntity*, Il2CppString*, int64_t, Il2CppString*, int64_t, float, bool, int64_t))(Il2CppBase() + 0x0))(this, newRecipe, newTime, newFuel, newFuelTime, newBoost, newIsBlocked, newBlockTime);
	}
	template <typename R = void> R ReplaceCraftWork(Il2CppString* newRecipe, int64_t newTime, Il2CppString* newFuel, int64_t newFuelTime, float newBoost, bool newIsBlocked, int64_t newBlockTime) {
		return ((R (*)(ICraftWorkEntity*, Il2CppString*, int64_t, Il2CppString*, int64_t, float, bool, int64_t))(Il2CppBase() + 0x0))(this, newRecipe, newTime, newFuel, newFuelTime, newBoost, newIsBlocked, newBlockTime);
	}
	template <typename R = void> R RemoveCraftWork() {
		return ((R (*)(ICraftWorkEntity*))(Il2CppBase() + 0x0))(this);
	}

};

