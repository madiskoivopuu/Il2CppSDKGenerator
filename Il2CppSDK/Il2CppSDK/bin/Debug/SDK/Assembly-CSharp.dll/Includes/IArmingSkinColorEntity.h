#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingSkinColorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingSkinColorEntity"));
	}


	template <typename T = ArmingSkinColorComponent*> T get_armingSkinColor() {
		return ((T (*)(IArmingSkinColorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingSkinColor() {
		return ((T (*)(IArmingSkinColorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingSkinColor(Il2CppString* newName) {
		return ((T (*)(IArmingSkinColorEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingSkinColor(Il2CppString* newName) {
		return ((T (*)(IArmingSkinColorEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingSkinColor() {
		return ((T (*)(IArmingSkinColorEntity*))(Il2CppBase() + 0x0))(this);
	}

};

