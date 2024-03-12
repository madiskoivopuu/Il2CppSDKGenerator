#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStunImmuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStunImmuneEntity"));
	}


	template <typename T = bool> T get_isStunImmune() {
		return ((T (*)(IStunImmuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isStunImmune(bool value) {
		return ((T (*)(IStunImmuneEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
