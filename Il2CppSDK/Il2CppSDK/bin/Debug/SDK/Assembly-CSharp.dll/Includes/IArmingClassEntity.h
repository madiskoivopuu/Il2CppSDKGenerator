#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingClassEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingClassEntity"));
	}


	template <typename R = ArmingClassComponent*> R get_armingClass() {
		return ((R (*)(IArmingClassEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingClass() {
		return ((R (*)(IArmingClassEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingClass(Il2CppString* newName) {
		return ((R (*)(IArmingClassEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingClass(Il2CppString* newName) {
		return ((R (*)(IArmingClassEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingClass() {
		return ((R (*)(IArmingClassEntity*))(Il2CppBase() + 0x0))(this);
	}

};

