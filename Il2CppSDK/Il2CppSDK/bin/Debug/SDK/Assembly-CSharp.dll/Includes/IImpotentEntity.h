#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IImpotentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IImpotentEntity"));
	}


	template <typename T = uintptr_t> T get_impotent() {
		return ((T (*)(IImpotentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasImpotent() {
		return ((T (*)(IImpotentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddImpotent(bool newIgnoreImmune) {
		return ((T (*)(IImpotentEntity*, bool))(Il2CppBase() + 0x0))(this, newIgnoreImmune);
	}
	template <typename T = void> T ReplaceImpotent(bool newIgnoreImmune) {
		return ((T (*)(IImpotentEntity*, bool))(Il2CppBase() + 0x0))(this, newIgnoreImmune);
	}
	template <typename T = void> T RemoveImpotent() {
		return ((T (*)(IImpotentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
