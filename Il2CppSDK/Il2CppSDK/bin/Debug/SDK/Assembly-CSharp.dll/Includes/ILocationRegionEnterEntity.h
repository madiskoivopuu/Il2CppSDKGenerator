#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILocationRegionEnterEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILocationRegionEnterEntity"));
	}


	template <typename T = uintptr_t> T get_locationRegionEnter() {
		return ((T (*)(ILocationRegionEnterEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasLocationRegionEnter() {
		return ((T (*)(ILocationRegionEnterEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddLocationRegionEnter(Il2CppString* newName) {
		return ((T (*)(ILocationRegionEnterEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceLocationRegionEnter(Il2CppString* newName) {
		return ((T (*)(ILocationRegionEnterEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveLocationRegionEnter() {
		return ((T (*)(ILocationRegionEnterEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
