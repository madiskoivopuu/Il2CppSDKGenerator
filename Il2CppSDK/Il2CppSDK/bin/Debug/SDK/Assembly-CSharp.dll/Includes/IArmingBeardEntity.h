#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingBeardEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingBeardEntity"));
	}


	template <typename R = ArmingBeardComponent*> R get_armingBeard() {
		return ((R (*)(IArmingBeardEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingBeard() {
		return ((R (*)(IArmingBeardEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingBeard(Il2CppString* newName) {
		return ((R (*)(IArmingBeardEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingBeard(Il2CppString* newName) {
		return ((R (*)(IArmingBeardEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingBeard() {
		return ((R (*)(IArmingBeardEntity*))(Il2CppBase() + 0x0))(this);
	}

};

