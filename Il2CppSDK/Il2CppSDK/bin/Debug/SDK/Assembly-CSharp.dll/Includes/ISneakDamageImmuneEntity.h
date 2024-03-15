#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISneakDamageImmuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISneakDamageImmuneEntity"));
	}


	template <typename R = bool> R get_isSneakDamageImmune() {
		return ((R (*)(ISneakDamageImmuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isSneakDamageImmune(bool value) {
		return ((R (*)(ISneakDamageImmuneEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

