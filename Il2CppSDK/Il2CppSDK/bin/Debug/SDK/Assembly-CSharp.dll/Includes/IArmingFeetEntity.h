#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingFeetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingFeetEntity"));
	}


	template <typename R = ArmingFeetComponent*> R get_armingFeet() {
		return ((R (*)(IArmingFeetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingFeet() {
		return ((R (*)(IArmingFeetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingFeet(Il2CppString* newName) {
		return ((R (*)(IArmingFeetEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingFeet(Il2CppString* newName) {
		return ((R (*)(IArmingFeetEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingFeet() {
		return ((R (*)(IArmingFeetEntity*))(Il2CppBase() + 0x0))(this);
	}

};

