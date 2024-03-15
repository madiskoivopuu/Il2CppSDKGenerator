#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILandEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILandEntity"));
	}


	template <typename R = LandComponent*> R get_land() {
		return ((R (*)(ILandEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasLand() {
		return ((R (*)(ILandEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddLand(LandType* newType) {
		return ((R (*)(ILandEntity*, LandType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R ReplaceLand(LandType* newType) {
		return ((R (*)(ILandEntity*, LandType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R RemoveLand() {
		return ((R (*)(ILandEntity*))(Il2CppBase() + 0x0))(this);
	}

};

