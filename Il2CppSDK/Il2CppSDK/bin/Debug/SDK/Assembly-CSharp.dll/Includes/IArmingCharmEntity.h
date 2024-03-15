#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingCharmEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingCharmEntity"));
	}


	template <typename R = ArmingCharmComponent*> R get_armingCharm() {
		return ((R (*)(IArmingCharmEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingCharm() {
		return ((R (*)(IArmingCharmEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingCharm(Il2CppString* newName) {
		return ((R (*)(IArmingCharmEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingCharm(Il2CppString* newName) {
		return ((R (*)(IArmingCharmEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingCharm() {
		return ((R (*)(IArmingCharmEntity*))(Il2CppBase() + 0x0))(this);
	}

};

