#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EmptyBlueprintLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmptyBlueprintLoader"));
	}


	template <typename T = Il2CppString*> T LoadString(Il2CppString* name) {
		return ((T (*)(EmptyBlueprintLoader*, Il2CppString*))(Il2CppBase() + 0x136FA30))(this, name);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T LoadStrings(Il2CppArray<uintptr_t>* names) {
		return ((T (*)(EmptyBlueprintLoader*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x136FA7C))(this, names);
	}
	template <typename T = uintptr_t> T LoadBlueprints(Il2CppString* dataFilesName, bool ignoreCache) {
		return ((T (*)(EmptyBlueprintLoader*, Il2CppString*, bool))(Il2CppBase() + 0x136FA84))(this, dataFilesName, ignoreCache);
	}
	template <typename T = int64_t> T LoadBlueprintsVersion(Il2CppString* dataFilesName, uintptr_t* isFromCache) {
		return ((T (*)(EmptyBlueprintLoader*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x136FAB4))(this, dataFilesName, isFromCache);
	}
	template <typename T = void> T SaveBlueprints(Il2CppString* dataFilesName, uintptr_t dataBlueprints) {
		return ((T (*)(EmptyBlueprintLoader*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x136FAC0))(this, dataFilesName, dataBlueprints);
	}

};

}
