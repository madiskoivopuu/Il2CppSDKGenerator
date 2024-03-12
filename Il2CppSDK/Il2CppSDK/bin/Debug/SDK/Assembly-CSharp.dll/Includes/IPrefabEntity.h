#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPrefabEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPrefabEntity"));
	}


	template <typename T = uintptr_t> T get_prefab() {
		return ((T (*)(IPrefabEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPrefab() {
		return ((T (*)(IPrefabEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, uintptr_t newResourceType) {
		return ((T (*)(IPrefabEntity*, Il2CppString*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x0))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename T = void> T ReplacePrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, uintptr_t newResourceType) {
		return ((T (*)(IPrefabEntity*, Il2CppString*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x0))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename T = void> T RemovePrefab() {
		return ((T (*)(IPrefabEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
