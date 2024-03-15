#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingCorpseEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingCorpseEntity"));
	}


	template <typename R = ArmingCorpseComponent*> R get_armingCorpse() {
		return ((R (*)(IArmingCorpseEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingCorpse() {
		return ((R (*)(IArmingCorpseEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingCorpse(Il2CppString* newName) {
		return ((R (*)(IArmingCorpseEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingCorpse(Il2CppString* newName) {
		return ((R (*)(IArmingCorpseEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingCorpse() {
		return ((R (*)(IArmingCorpseEntity*))(Il2CppBase() + 0x0))(this);
	}

};

