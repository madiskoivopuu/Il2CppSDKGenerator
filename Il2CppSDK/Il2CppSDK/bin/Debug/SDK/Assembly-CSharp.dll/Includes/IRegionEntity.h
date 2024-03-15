#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRegionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRegionEntity"));
	}


	template <typename R = RegionComponent*> R get_region() {
		return ((R (*)(IRegionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRegion() {
		return ((R (*)(IRegionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRegion(Il2CppString* newName) {
		return ((R (*)(IRegionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceRegion(Il2CppString* newName) {
		return ((R (*)(IRegionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveRegion() {
		return ((R (*)(IRegionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

