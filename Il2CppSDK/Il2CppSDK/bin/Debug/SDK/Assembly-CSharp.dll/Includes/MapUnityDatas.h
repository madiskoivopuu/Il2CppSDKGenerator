#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapUnityDatas
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapUnityDatas"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, EntityBlueprint*>*> T& mapBlueprints() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, EntityBlueprint*>*> T& itemBlueprints() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, EntityBlueprint*>*> T get_mapBlueprints() {
		return ((T (*)(MapUnityDatas*))(Il2CppBase() + 0x12C678C))(this);
	}
	template <typename T = void> T set_mapBlueprints(Il2CppDictionary<Il2CppString*, EntityBlueprint*>* value) {
		return ((T (*)(MapUnityDatas*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*))(Il2CppBase() + 0x12C6794))(this, value);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, EntityBlueprint*>*> T get_itemBlueprints() {
		return ((T (*)(MapUnityDatas*))(Il2CppBase() + 0x12C679C))(this);
	}
	template <typename T = void> T set_itemBlueprints(Il2CppDictionary<Il2CppString*, EntityBlueprint*>* value) {
		return ((T (*)(MapUnityDatas*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*))(Il2CppBase() + 0x12C67A4))(this, value);
	}

};

