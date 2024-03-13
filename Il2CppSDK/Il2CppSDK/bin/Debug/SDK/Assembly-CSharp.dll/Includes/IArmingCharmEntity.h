#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingCharmEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingCharmEntity"));
	}


	template <typename T = ArmingCharmComponent*> T get_armingCharm() {
		return ((T (*)(IArmingCharmEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingCharm() {
		return ((T (*)(IArmingCharmEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingCharm(Il2CppString* newName) {
		return ((T (*)(IArmingCharmEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingCharm(Il2CppString* newName) {
		return ((T (*)(IArmingCharmEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingCharm() {
		return ((T (*)(IArmingCharmEntity*))(Il2CppBase() + 0x0))(this);
	}

};

