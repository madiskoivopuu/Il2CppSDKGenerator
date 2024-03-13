#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILandEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILandEntity"));
	}


	template <typename T = LandComponent*> T get_land() {
		return ((T (*)(ILandEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasLand() {
		return ((T (*)(ILandEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddLand(LandType* newType) {
		return ((T (*)(ILandEntity*, LandType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T ReplaceLand(LandType* newType) {
		return ((T (*)(ILandEntity*, LandType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T RemoveLand() {
		return ((T (*)(ILandEntity*))(Il2CppBase() + 0x0))(this);
	}

};

