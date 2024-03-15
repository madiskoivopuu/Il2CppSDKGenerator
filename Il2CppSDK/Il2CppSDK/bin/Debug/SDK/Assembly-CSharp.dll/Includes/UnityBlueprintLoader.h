#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnityBlueprintLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityBlueprintLoader"));
	}

	template <typename R = Il2CppString*> static R& BlueprintsName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = Il2CppString*> R LoadString(Il2CppString* name) {
		return ((R (*)(UnityBlueprintLoader*, Il2CppString*))(Il2CppBase() + 0x1537098))(this, name);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R LoadStrings(Il2CppArray<Il2CppString*>* names) {
		return ((R (*)(UnityBlueprintLoader*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x153730C))(this, names);
	}
	template <typename R = DataBlueprints*> R LoadBlueprints(Il2CppString* dataFilesName, bool ignoreCache) {
		return ((R (*)(UnityBlueprintLoader*, Il2CppString*, bool))(Il2CppBase() + 0x153742C))(this, dataFilesName, ignoreCache);
	}
	template <typename R = Il2CppString*> R LoadStreamingAsset(Il2CppString* name) {
		return ((R (*)(UnityBlueprintLoader*, Il2CppString*))(Il2CppBase() + 0x1537E50))(this, name);
	}
	template <typename R = int64_t> R LoadBlueprintsVersion(Il2CppString* dataFilesName, uintptr_t* isFromCache) {
		return ((R (*)(UnityBlueprintLoader*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x1537B20))(this, dataFilesName, isFromCache);
	}
	template <typename R = void> R SaveBlueprints(Il2CppString* dataFilesName, DataBlueprints* dataBlueprints) {
		return ((R (*)(UnityBlueprintLoader*, Il2CppString*, DataBlueprints*))(Il2CppBase() + 0x1537E58))(this, dataFilesName, dataBlueprints);
	}
	template <typename R = Il2CppString*> R LoadSavedString(Il2CppString* name, Il2CppString* pass) {
		return ((R (*)(UnityBlueprintLoader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1537D40))(this, name, pass);
	}
	template <typename R = Il2CppString*> R GetFilePath(Il2CppString* fileName) {
		return ((R (*)(UnityBlueprintLoader*, Il2CppString*))(Il2CppBase() + 0x153729C))(this, fileName);
	}

};

