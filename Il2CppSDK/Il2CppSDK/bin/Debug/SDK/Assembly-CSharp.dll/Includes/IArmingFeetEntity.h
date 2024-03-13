#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingFeetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingFeetEntity"));
	}


	template <typename T = ArmingFeetComponent*> T get_armingFeet() {
		return ((T (*)(IArmingFeetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingFeet() {
		return ((T (*)(IArmingFeetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingFeet(Il2CppString* newName) {
		return ((T (*)(IArmingFeetEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingFeet(Il2CppString* newName) {
		return ((T (*)(IArmingFeetEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingFeet() {
		return ((T (*)(IArmingFeetEntity*))(Il2CppBase() + 0x0))(this);
	}

};

