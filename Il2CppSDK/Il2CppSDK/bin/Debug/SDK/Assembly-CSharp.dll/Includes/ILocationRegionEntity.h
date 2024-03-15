#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILocationRegionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILocationRegionEntity"));
	}


	template <typename R = LocationRegionComponent*> R get_locationRegion() {
		return ((R (*)(ILocationRegionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasLocationRegion() {
		return ((R (*)(ILocationRegionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddLocationRegion(Il2CppString* newName) {
		return ((R (*)(ILocationRegionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceLocationRegion(Il2CppString* newName) {
		return ((R (*)(ILocationRegionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveLocationRegion() {
		return ((R (*)(ILocationRegionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

