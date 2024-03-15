#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRuneEntity"));
	}


	template <typename R = RuneComponent*> R get_rune() {
		return ((R (*)(IRuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRune() {
		return ((R (*)(IRuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRune(RuneType newType) {
		return ((R (*)(IRuneEntity*, RuneType))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R ReplaceRune(RuneType newType) {
		return ((R (*)(IRuneEntity*, RuneType))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R RemoveRune() {
		return ((R (*)(IRuneEntity*))(Il2CppBase() + 0x0))(this);
	}

};

