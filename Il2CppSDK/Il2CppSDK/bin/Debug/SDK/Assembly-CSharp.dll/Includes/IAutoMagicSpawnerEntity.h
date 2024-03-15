#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAutoMagicSpawnerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAutoMagicSpawnerEntity"));
	}


	template <typename R = AutoMagicSpawnerComponent*> R get_autoMagicSpawner() {
		return ((R (*)(IAutoMagicSpawnerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAutoMagicSpawner() {
		return ((R (*)(IAutoMagicSpawnerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAutoMagicSpawner(Il2CppString* newActivator, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IAutoMagicSpawnerEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newActivator, newName, newNames);
	}
	template <typename R = void> R ReplaceAutoMagicSpawner(Il2CppString* newActivator, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IAutoMagicSpawnerEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newActivator, newName, newNames);
	}
	template <typename R = void> R RemoveAutoMagicSpawner() {
		return ((R (*)(IAutoMagicSpawnerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

