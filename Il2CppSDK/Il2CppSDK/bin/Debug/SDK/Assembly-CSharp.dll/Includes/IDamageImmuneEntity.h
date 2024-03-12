#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageImmuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageImmuneEntity"));
	}


	template <typename T = bool> T get_isDamageImmune() {
		return ((T (*)(IDamageImmuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isDamageImmune(bool value) {
		return ((T (*)(IDamageImmuneEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
