#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingHeadEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingHeadEntity"));
	}


	template <typename T = ArmingHeadComponent*> T get_armingHead() {
		return ((T (*)(IArmingHeadEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingHead() {
		return ((T (*)(IArmingHeadEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingHead(Il2CppString* newName) {
		return ((T (*)(IArmingHeadEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingHead(Il2CppString* newName) {
		return ((T (*)(IArmingHeadEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingHead() {
		return ((T (*)(IArmingHeadEntity*))(Il2CppBase() + 0x0))(this);
	}

};

