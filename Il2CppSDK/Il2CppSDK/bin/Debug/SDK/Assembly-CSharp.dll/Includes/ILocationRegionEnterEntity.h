#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILocationRegionEnterEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILocationRegionEnterEntity"));
	}


	template <typename R = LocationRegionEnterComponent*> R get_locationRegionEnter() {
		return ((R (*)(ILocationRegionEnterEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasLocationRegionEnter() {
		return ((R (*)(ILocationRegionEnterEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddLocationRegionEnter(Il2CppString* newName) {
		return ((R (*)(ILocationRegionEnterEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceLocationRegionEnter(Il2CppString* newName) {
		return ((R (*)(ILocationRegionEnterEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveLocationRegionEnter() {
		return ((R (*)(ILocationRegionEnterEntity*))(Il2CppBase() + 0x0))(this);
	}

};

