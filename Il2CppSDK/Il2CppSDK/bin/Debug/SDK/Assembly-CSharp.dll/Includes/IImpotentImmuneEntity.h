#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IImpotentImmuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IImpotentImmuneEntity"));
	}


	template <typename T = bool> T get_isImpotentImmune() {
		return ((T (*)(IImpotentImmuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isImpotentImmune(bool value) {
		return ((T (*)(IImpotentImmuneEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

