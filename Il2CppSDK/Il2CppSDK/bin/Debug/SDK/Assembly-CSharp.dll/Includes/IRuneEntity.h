#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRuneEntity"));
	}


	template <typename T = uintptr_t> T get_rune() {
		return ((T (*)(IRuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRune() {
		return ((T (*)(IRuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRune(uintptr_t newType) {
		return ((T (*)(IRuneEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T ReplaceRune(uintptr_t newType) {
		return ((T (*)(IRuneEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T RemoveRune() {
		return ((T (*)(IRuneEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
