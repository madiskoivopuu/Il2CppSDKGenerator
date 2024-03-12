#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMagicSpawnerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMagicSpawnerEntity"));
	}


	template <typename T = uintptr_t> T get_magicSpawner() {
		return ((T (*)(IMagicSpawnerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMagicSpawner() {
		return ((T (*)(IMagicSpawnerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMagicSpawner(Il2CppString* newCondition, bool newIgnoreActorParent, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newOnce) {
		return ((T (*)(IMagicSpawnerEntity*, Il2CppString*, bool, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x0))(this, newCondition, newIgnoreActorParent, newName, newNames, newRandomNames, newOnce);
	}
	template <typename T = void> T ReplaceMagicSpawner(Il2CppString* newCondition, bool newIgnoreActorParent, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newOnce) {
		return ((T (*)(IMagicSpawnerEntity*, Il2CppString*, bool, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x0))(this, newCondition, newIgnoreActorParent, newName, newNames, newRandomNames, newOnce);
	}
	template <typename T = void> T RemoveMagicSpawner() {
		return ((T (*)(IMagicSpawnerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
