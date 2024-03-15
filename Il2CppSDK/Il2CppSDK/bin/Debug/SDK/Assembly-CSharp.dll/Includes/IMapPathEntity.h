#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMapPathEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMapPathEntity"));
	}


	template <typename R = MapPathComponent*> R get_mapPath() {
		return ((R (*)(IMapPathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMapPath() {
		return ((R (*)(IMapPathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMapPath(Il2CppString* newStartId, Il2CppString* newEndId) {
		return ((R (*)(IMapPathEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newStartId, newEndId);
	}
	template <typename R = void> R ReplaceMapPath(Il2CppString* newStartId, Il2CppString* newEndId) {
		return ((R (*)(IMapPathEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newStartId, newEndId);
	}
	template <typename R = void> R RemoveMapPath() {
		return ((R (*)(IMapPathEntity*))(Il2CppBase() + 0x0))(this);
	}

};

