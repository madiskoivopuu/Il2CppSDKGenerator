#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMagicSpawnerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMagicSpawnerEntity"));
	}


	template <typename R = MagicSpawnerComponent*> R get_magicSpawner() {
		return ((R (*)(IMagicSpawnerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMagicSpawner() {
		return ((R (*)(IMagicSpawnerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMagicSpawner(Il2CppString* newCondition, bool newIgnoreActorParent, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newOnce) {
		return ((R (*)(IMagicSpawnerEntity*, Il2CppString*, bool, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x0))(this, newCondition, newIgnoreActorParent, newName, newNames, newRandomNames, newOnce);
	}
	template <typename R = void> R ReplaceMagicSpawner(Il2CppString* newCondition, bool newIgnoreActorParent, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newOnce) {
		return ((R (*)(IMagicSpawnerEntity*, Il2CppString*, bool, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x0))(this, newCondition, newIgnoreActorParent, newName, newNames, newRandomNames, newOnce);
	}
	template <typename R = void> R RemoveMagicSpawner() {
		return ((R (*)(IMagicSpawnerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

