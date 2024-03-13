#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILocationRegionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILocationRegionEntity"));
	}


	template <typename T = LocationRegionComponent*> T get_locationRegion() {
		return ((T (*)(ILocationRegionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasLocationRegion() {
		return ((T (*)(ILocationRegionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddLocationRegion(Il2CppString* newName) {
		return ((T (*)(ILocationRegionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceLocationRegion(Il2CppString* newName) {
		return ((T (*)(ILocationRegionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveLocationRegion() {
		return ((T (*)(ILocationRegionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

