#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingFaceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingFaceEntity"));
	}


	template <typename R = ArmingFaceComponent*> R get_armingFace() {
		return ((R (*)(IArmingFaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingFace() {
		return ((R (*)(IArmingFaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingFace(Il2CppString* newName) {
		return ((R (*)(IArmingFaceEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingFace(Il2CppString* newName) {
		return ((R (*)(IArmingFaceEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingFace() {
		return ((R (*)(IArmingFaceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

