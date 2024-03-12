#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAutoMagicSpawnerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAutoMagicSpawnerEntity"));
	}


	template <typename T = uintptr_t> T get_autoMagicSpawner() {
		return ((T (*)(IAutoMagicSpawnerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAutoMagicSpawner() {
		return ((T (*)(IAutoMagicSpawnerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAutoMagicSpawner(Il2CppString* newActivator, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IAutoMagicSpawnerEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newActivator, newName, newNames);
	}
	template <typename T = void> T ReplaceAutoMagicSpawner(Il2CppString* newActivator, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IAutoMagicSpawnerEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newActivator, newName, newNames);
	}
	template <typename T = void> T RemoveAutoMagicSpawner() {
		return ((T (*)(IAutoMagicSpawnerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
