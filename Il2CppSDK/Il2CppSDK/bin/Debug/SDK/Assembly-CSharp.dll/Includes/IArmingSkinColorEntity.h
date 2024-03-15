#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingSkinColorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingSkinColorEntity"));
	}


	template <typename R = ArmingSkinColorComponent*> R get_armingSkinColor() {
		return ((R (*)(IArmingSkinColorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingSkinColor() {
		return ((R (*)(IArmingSkinColorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingSkinColor(Il2CppString* newName) {
		return ((R (*)(IArmingSkinColorEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingSkinColor(Il2CppString* newName) {
		return ((R (*)(IArmingSkinColorEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingSkinColor() {
		return ((R (*)(IArmingSkinColorEntity*))(Il2CppBase() + 0x0))(this);
	}

};

