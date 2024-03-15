#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IImpotentImmuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IImpotentImmuneEntity"));
	}


	template <typename R = bool> R get_isImpotentImmune() {
		return ((R (*)(IImpotentImmuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isImpotentImmune(bool value) {
		return ((R (*)(IImpotentImmuneEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

