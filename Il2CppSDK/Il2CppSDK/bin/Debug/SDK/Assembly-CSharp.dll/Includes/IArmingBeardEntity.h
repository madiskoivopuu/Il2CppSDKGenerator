#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingBeardEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingBeardEntity"));
	}


	template <typename T = ArmingBeardComponent*> T get_armingBeard() {
		return ((T (*)(IArmingBeardEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingBeard() {
		return ((T (*)(IArmingBeardEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingBeard(Il2CppString* newName) {
		return ((T (*)(IArmingBeardEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingBeard(Il2CppString* newName) {
		return ((T (*)(IArmingBeardEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingBeard() {
		return ((T (*)(IArmingBeardEntity*))(Il2CppBase() + 0x0))(this);
	}

};

