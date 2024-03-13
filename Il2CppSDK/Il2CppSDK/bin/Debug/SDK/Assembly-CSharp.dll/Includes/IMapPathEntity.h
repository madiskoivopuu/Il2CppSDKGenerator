#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMapPathEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMapPathEntity"));
	}


	template <typename T = MapPathComponent*> T get_mapPath() {
		return ((T (*)(IMapPathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMapPath() {
		return ((T (*)(IMapPathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMapPath(Il2CppString* newStartId, Il2CppString* newEndId) {
		return ((T (*)(IMapPathEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newStartId, newEndId);
	}
	template <typename T = void> T ReplaceMapPath(Il2CppString* newStartId, Il2CppString* newEndId) {
		return ((T (*)(IMapPathEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newStartId, newEndId);
	}
	template <typename T = void> T RemoveMapPath() {
		return ((T (*)(IMapPathEntity*))(Il2CppBase() + 0x0))(this);
	}

};

