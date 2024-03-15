#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBlueprintLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBlueprintLoader"));
	}


	template <typename R = Il2CppString*> R LoadString(Il2CppString* name) {
		return ((R (*)(IBlueprintLoader*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R LoadStrings(Il2CppArray<Il2CppString*>* names) {
		return ((R (*)(IBlueprintLoader*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, names);
	}
	template <typename R = DataBlueprints*> R LoadBlueprints(Il2CppString* dataFilesName, bool ignoreCache) {
		return ((R (*)(IBlueprintLoader*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, dataFilesName, ignoreCache);
	}
	template <typename R = int64_t> R LoadBlueprintsVersion(Il2CppString* dataFilesName, uintptr_t* isFromCache) {
		return ((R (*)(IBlueprintLoader*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x0))(this, dataFilesName, isFromCache);
	}
	template <typename R = void> R SaveBlueprints(Il2CppString* dataFilesName, DataBlueprints* dataBlueprints) {
		return ((R (*)(IBlueprintLoader*, Il2CppString*, DataBlueprints*))(Il2CppBase() + 0x0))(this, dataFilesName, dataBlueprints);
	}

};

