#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRidingEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRidingEntity"));
	}


	template <typename T = bool> T get_isRiding() {
		return ((T (*)(IRidingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isRiding(bool value) {
		return ((T (*)(IRidingEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

