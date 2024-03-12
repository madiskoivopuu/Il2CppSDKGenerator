#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISpawnOnDeathEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISpawnOnDeathEntity"));
	}


	template <typename T = uintptr_t> T get_spawnOnDeath() {
		return ((T (*)(ISpawnOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSpawnOnDeath() {
		return ((T (*)(ISpawnOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSpawnOnDeath(uintptr_t newParams, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ISpawnOnDeathEntity*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, newParams, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceSpawnOnDeath(uintptr_t newParams, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ISpawnOnDeathEntity*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, newParams, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveSpawnOnDeath() {
		return ((T (*)(ISpawnOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
