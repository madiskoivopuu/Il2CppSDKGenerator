#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingClassEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingClassEntity"));
	}


	template <typename T = uintptr_t> T get_armingClass() {
		return ((T (*)(IArmingClassEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingClass() {
		return ((T (*)(IArmingClassEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingClass(Il2CppString* newName) {
		return ((T (*)(IArmingClassEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingClass(Il2CppString* newName) {
		return ((T (*)(IArmingClassEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingClass() {
		return ((T (*)(IArmingClassEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
