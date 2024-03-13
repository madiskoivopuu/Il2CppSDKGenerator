#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISneakImmuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISneakImmuneEntity"));
	}


	template <typename T = bool> T get_isSneakImmune() {
		return ((T (*)(ISneakImmuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isSneakImmune(bool value) {
		return ((T (*)(ISneakImmuneEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

