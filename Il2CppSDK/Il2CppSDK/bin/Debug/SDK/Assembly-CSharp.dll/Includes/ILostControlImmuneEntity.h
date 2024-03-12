#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILostControlImmuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILostControlImmuneEntity"));
	}


	template <typename T = bool> T get_isLostControlImmune() {
		return ((T (*)(ILostControlImmuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isLostControlImmune(bool value) {
		return ((T (*)(ILostControlImmuneEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
