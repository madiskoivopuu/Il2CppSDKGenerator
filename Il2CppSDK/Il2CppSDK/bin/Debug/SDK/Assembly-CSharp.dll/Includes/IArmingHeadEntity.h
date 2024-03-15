#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingHeadEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingHeadEntity"));
	}


	template <typename R = ArmingHeadComponent*> R get_armingHead() {
		return ((R (*)(IArmingHeadEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingHead() {
		return ((R (*)(IArmingHeadEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingHead(Il2CppString* newName) {
		return ((R (*)(IArmingHeadEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingHead(Il2CppString* newName) {
		return ((R (*)(IArmingHeadEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingHead() {
		return ((R (*)(IArmingHeadEntity*))(Il2CppBase() + 0x0))(this);
	}

};

