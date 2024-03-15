#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPrefabEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPrefabEntity"));
	}


	template <typename R = PrefabComponent*> R get_prefab() {
		return ((R (*)(IPrefabEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPrefab() {
		return ((R (*)(IPrefabEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, ProtoModels::WorldResourcesType newResourceType) {
		return ((R (*)(IPrefabEntity*, Il2CppString*, Il2CppString*, bool, ProtoModels::WorldResourcesType))(Il2CppBase() + 0x0))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename R = void> R ReplacePrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, ProtoModels::WorldResourcesType newResourceType) {
		return ((R (*)(IPrefabEntity*, Il2CppString*, Il2CppString*, bool, ProtoModels::WorldResourcesType))(Il2CppBase() + 0x0))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename R = void> R RemovePrefab() {
		return ((R (*)(IPrefabEntity*))(Il2CppBase() + 0x0))(this);
	}

};

