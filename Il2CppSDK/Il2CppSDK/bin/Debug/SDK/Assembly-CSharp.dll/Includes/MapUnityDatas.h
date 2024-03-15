#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapUnityDatas
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapUnityDatas"));
	}

	 Il2CppDictionary<Il2CppString*, EntityBlueprint*>*& mapBlueprints() {
		return *(Il2CppDictionary<Il2CppString*, EntityBlueprint*>**)((uintptr_t)this + 0x10);
	}
	 Il2CppDictionary<Il2CppString*, EntityBlueprint*>*& itemBlueprints() {
		return *(Il2CppDictionary<Il2CppString*, EntityBlueprint*>**)((uintptr_t)this + 0x18);
	}

	 Il2CppDictionary<Il2CppString*, EntityBlueprint*>* get_mapBlueprints() {
		return ((Il2CppDictionary<Il2CppString*, EntityBlueprint*>* (*)(MapUnityDatas*))(Il2CppBase() + 0x12C678C))(this);
	}
	template <typename R = void> R set_mapBlueprints(Il2CppDictionary<Il2CppString*, EntityBlueprint*>* value) {
		return ((R (*)(MapUnityDatas*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*))(Il2CppBase() + 0x12C6794))(this, value);
	}
	 Il2CppDictionary<Il2CppString*, EntityBlueprint*>* get_itemBlueprints() {
		return ((Il2CppDictionary<Il2CppString*, EntityBlueprint*>* (*)(MapUnityDatas*))(Il2CppBase() + 0x12C679C))(this);
	}
	template <typename R = void> R set_itemBlueprints(Il2CppDictionary<Il2CppString*, EntityBlueprint*>* value) {
		return ((R (*)(MapUnityDatas*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*))(Il2CppBase() + 0x12C67A4))(this, value);
	}

};

