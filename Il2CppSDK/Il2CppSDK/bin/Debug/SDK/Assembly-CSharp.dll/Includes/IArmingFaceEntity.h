#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingFaceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingFaceEntity"));
	}


	template <typename T = ArmingFaceComponent*> T get_armingFace() {
		return ((T (*)(IArmingFaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingFace() {
		return ((T (*)(IArmingFaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingFace(Il2CppString* newName) {
		return ((T (*)(IArmingFaceEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingFace(Il2CppString* newName) {
		return ((T (*)(IArmingFaceEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingFace() {
		return ((T (*)(IArmingFaceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

