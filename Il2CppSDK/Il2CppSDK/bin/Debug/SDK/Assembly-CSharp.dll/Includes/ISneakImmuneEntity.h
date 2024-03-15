#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISneakImmuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISneakImmuneEntity"));
	}


	template <typename R = bool> R get_isSneakImmune() {
		return ((R (*)(ISneakImmuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isSneakImmune(bool value) {
		return ((R (*)(ISneakImmuneEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

