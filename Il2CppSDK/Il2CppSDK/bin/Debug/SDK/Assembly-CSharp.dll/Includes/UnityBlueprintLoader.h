#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnityBlueprintLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityBlueprintLoader"));
	}

	template <typename T = Il2CppString*> static T& BlueprintsName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T LoadString(Il2CppString* name) {
		return ((T (*)(UnityBlueprintLoader*, Il2CppString*))(Il2CppBase() + 0x1537098))(this, name);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T LoadStrings(Il2CppArray<uintptr_t>* names) {
		return ((T (*)(UnityBlueprintLoader*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x153730C))(this, names);
	}
	template <typename T = uintptr_t> T LoadBlueprints(Il2CppString* dataFilesName, bool ignoreCache) {
		return ((T (*)(UnityBlueprintLoader*, Il2CppString*, bool))(Il2CppBase() + 0x153742C))(this, dataFilesName, ignoreCache);
	}
	template <typename T = Il2CppString*> T LoadStreamingAsset(Il2CppString* name) {
		return ((T (*)(UnityBlueprintLoader*, Il2CppString*))(Il2CppBase() + 0x1537E50))(this, name);
	}
	template <typename T = int64_t> T LoadBlueprintsVersion(Il2CppString* dataFilesName, uintptr_t* isFromCache) {
		return ((T (*)(UnityBlueprintLoader*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x1537B20))(this, dataFilesName, isFromCache);
	}
	template <typename T = void> T SaveBlueprints(Il2CppString* dataFilesName, uintptr_t dataBlueprints) {
		return ((T (*)(UnityBlueprintLoader*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1537E58))(this, dataFilesName, dataBlueprints);
	}
	template <typename T = Il2CppString*> T LoadSavedString(Il2CppString* name, Il2CppString* pass) {
		return ((T (*)(UnityBlueprintLoader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1537D40))(this, name, pass);
	}
	template <typename T = Il2CppString*> T GetFilePath(Il2CppString* fileName) {
		return ((T (*)(UnityBlueprintLoader*, Il2CppString*))(Il2CppBase() + 0x153729C))(this, fileName);
	}

};

}
