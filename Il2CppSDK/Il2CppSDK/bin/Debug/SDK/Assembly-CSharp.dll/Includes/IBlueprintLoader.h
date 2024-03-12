#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBlueprintLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBlueprintLoader"));
	}


	template <typename T = Il2CppString*> T LoadString(Il2CppString* name) {
		return ((T (*)(IBlueprintLoader*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T LoadStrings(Il2CppArray<uintptr_t>* names) {
		return ((T (*)(IBlueprintLoader*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, names);
	}
	template <typename T = uintptr_t> T LoadBlueprints(Il2CppString* dataFilesName, bool ignoreCache) {
		return ((T (*)(IBlueprintLoader*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, dataFilesName, ignoreCache);
	}
	template <typename T = int64_t> T LoadBlueprintsVersion(Il2CppString* dataFilesName, uintptr_t* isFromCache) {
		return ((T (*)(IBlueprintLoader*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x0))(this, dataFilesName, isFromCache);
	}
	template <typename T = void> T SaveBlueprints(Il2CppString* dataFilesName, uintptr_t dataBlueprints) {
		return ((T (*)(IBlueprintLoader*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, dataFilesName, dataBlueprints);
	}

};

}
