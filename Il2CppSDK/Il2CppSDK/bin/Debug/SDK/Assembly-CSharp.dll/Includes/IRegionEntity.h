#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRegionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRegionEntity"));
	}


	template <typename T = RegionComponent*> T get_region() {
		return ((T (*)(IRegionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRegion() {
		return ((T (*)(IRegionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRegion(Il2CppString* newName) {
		return ((T (*)(IRegionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceRegion(Il2CppString* newName) {
		return ((T (*)(IRegionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveRegion() {
		return ((T (*)(IRegionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

