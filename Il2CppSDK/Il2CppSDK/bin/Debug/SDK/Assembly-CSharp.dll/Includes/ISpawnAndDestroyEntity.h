#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISpawnAndDestroyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISpawnAndDestroyEntity"));
	}


	template <typename T = uintptr_t> T get_spawnAndDestroy() {
		return ((T (*)(ISpawnAndDestroyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSpawnAndDestroy() {
		return ((T (*)(ISpawnAndDestroyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSpawnAndDestroy(Il2CppString* newCreaturesRG, int32_t newMaxCount, Il2CppString* newOverMaxCreaturesRG) {
		return ((T (*)(ISpawnAndDestroyEntity*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newCreaturesRG, newMaxCount, newOverMaxCreaturesRG);
	}
	template <typename T = void> T ReplaceSpawnAndDestroy(Il2CppString* newCreaturesRG, int32_t newMaxCount, Il2CppString* newOverMaxCreaturesRG) {
		return ((T (*)(ISpawnAndDestroyEntity*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newCreaturesRG, newMaxCount, newOverMaxCreaturesRG);
	}
	template <typename T = void> T RemoveSpawnAndDestroy() {
		return ((T (*)(ISpawnAndDestroyEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
