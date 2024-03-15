#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRidingEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRidingEntity"));
	}


	template <typename R = bool> R get_isRiding() {
		return ((R (*)(IRidingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isRiding(bool value) {
		return ((R (*)(IRidingEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

