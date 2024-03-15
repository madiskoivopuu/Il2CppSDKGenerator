#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageImmuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageImmuneEntity"));
	}


	template <typename R = bool> R get_isDamageImmune() {
		return ((R (*)(IDamageImmuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isDamageImmune(bool value) {
		return ((R (*)(IDamageImmuneEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

