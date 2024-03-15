#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISpawnAndDestroyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISpawnAndDestroyEntity"));
	}


	template <typename R = SpawnAndDestroyComponent*> R get_spawnAndDestroy() {
		return ((R (*)(ISpawnAndDestroyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSpawnAndDestroy() {
		return ((R (*)(ISpawnAndDestroyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSpawnAndDestroy(Il2CppString* newCreaturesRG, int32_t newMaxCount, Il2CppString* newOverMaxCreaturesRG) {
		return ((R (*)(ISpawnAndDestroyEntity*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newCreaturesRG, newMaxCount, newOverMaxCreaturesRG);
	}
	template <typename R = void> R ReplaceSpawnAndDestroy(Il2CppString* newCreaturesRG, int32_t newMaxCount, Il2CppString* newOverMaxCreaturesRG) {
		return ((R (*)(ISpawnAndDestroyEntity*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newCreaturesRG, newMaxCount, newOverMaxCreaturesRG);
	}
	template <typename R = void> R RemoveSpawnAndDestroy() {
		return ((R (*)(ISpawnAndDestroyEntity*))(Il2CppBase() + 0x0))(this);
	}

};

