#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingLegsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingLegsEntity"));
	}


	template <typename T = uintptr_t> T get_armingLegs() {
		return ((T (*)(IArmingLegsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingLegs() {
		return ((T (*)(IArmingLegsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingLegs(Il2CppString* newName) {
		return ((T (*)(IArmingLegsEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingLegs(Il2CppString* newName) {
		return ((T (*)(IArmingLegsEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingLegs() {
		return ((T (*)(IArmingLegsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
