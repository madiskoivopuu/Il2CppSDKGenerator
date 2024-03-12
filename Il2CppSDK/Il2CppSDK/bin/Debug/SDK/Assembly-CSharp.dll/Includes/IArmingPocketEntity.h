#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingPocketEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingPocketEntity"));
	}


	template <typename T = uintptr_t> T get_armingPocket() {
		return ((T (*)(IArmingPocketEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingPocket() {
		return ((T (*)(IArmingPocketEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingPocket(Il2CppString* newName1, Il2CppString* newName2, Il2CppString* newName3) {
		return ((T (*)(IArmingPocketEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName1, newName2, newName3);
	}
	template <typename T = void> T ReplaceArmingPocket(Il2CppString* newName1, Il2CppString* newName2, Il2CppString* newName3) {
		return ((T (*)(IArmingPocketEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName1, newName2, newName3);
	}
	template <typename T = void> T RemoveArmingPocket() {
		return ((T (*)(IArmingPocketEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
