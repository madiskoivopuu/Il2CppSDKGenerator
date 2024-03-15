#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISpawnOnDeathEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISpawnOnDeathEntity"));
	}


	template <typename R = SpawnOnDeathComponent*> R get_spawnOnDeath() {
		return ((R (*)(ISpawnOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSpawnOnDeath() {
		return ((R (*)(ISpawnOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSpawnOnDeath(ApplyPlaceParams* newParams, Il2CppArray<ApplyPlaceItem*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ISpawnOnDeathEntity*, ApplyPlaceParams*, Il2CppArray<ApplyPlaceItem*>*, int32_t))(Il2CppBase() + 0x0))(this, newParams, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceSpawnOnDeath(ApplyPlaceParams* newParams, Il2CppArray<ApplyPlaceItem*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ISpawnOnDeathEntity*, ApplyPlaceParams*, Il2CppArray<ApplyPlaceItem*>*, int32_t))(Il2CppBase() + 0x0))(this, newParams, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveSpawnOnDeath() {
		return ((R (*)(ISpawnOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}

};

