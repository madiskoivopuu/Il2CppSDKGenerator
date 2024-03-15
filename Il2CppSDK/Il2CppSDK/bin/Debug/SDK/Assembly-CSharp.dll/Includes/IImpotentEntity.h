#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IImpotentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IImpotentEntity"));
	}


	template <typename R = ImpotentComponent*> R get_impotent() {
		return ((R (*)(IImpotentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasImpotent() {
		return ((R (*)(IImpotentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddImpotent(bool newIgnoreImmune) {
		return ((R (*)(IImpotentEntity*, bool))(Il2CppBase() + 0x0))(this, newIgnoreImmune);
	}
	template <typename R = void> R ReplaceImpotent(bool newIgnoreImmune) {
		return ((R (*)(IImpotentEntity*, bool))(Il2CppBase() + 0x0))(this, newIgnoreImmune);
	}
	template <typename R = void> R RemoveImpotent() {
		return ((R (*)(IImpotentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

