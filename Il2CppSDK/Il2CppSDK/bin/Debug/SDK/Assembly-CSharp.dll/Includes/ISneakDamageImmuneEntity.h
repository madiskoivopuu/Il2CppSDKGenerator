#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISneakDamageImmuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISneakDamageImmuneEntity"));
	}


	template <typename T = bool> T get_isSneakDamageImmune() {
		return ((T (*)(ISneakDamageImmuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isSneakDamageImmune(bool value) {
		return ((T (*)(ISneakDamageImmuneEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

