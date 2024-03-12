#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingCorpseEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingCorpseEntity"));
	}


	template <typename T = uintptr_t> T get_armingCorpse() {
		return ((T (*)(IArmingCorpseEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingCorpse() {
		return ((T (*)(IArmingCorpseEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingCorpse(Il2CppString* newName) {
		return ((T (*)(IArmingCorpseEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingCorpse(Il2CppString* newName) {
		return ((T (*)(IArmingCorpseEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingCorpse() {
		return ((T (*)(IArmingCorpseEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
