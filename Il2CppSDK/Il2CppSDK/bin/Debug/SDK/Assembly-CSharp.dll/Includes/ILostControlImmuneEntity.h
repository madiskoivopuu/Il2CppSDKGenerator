#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILostControlImmuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILostControlImmuneEntity"));
	}


	template <typename R = bool> R get_isLostControlImmune() {
		return ((R (*)(ILostControlImmuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isLostControlImmune(bool value) {
		return ((R (*)(ILostControlImmuneEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

