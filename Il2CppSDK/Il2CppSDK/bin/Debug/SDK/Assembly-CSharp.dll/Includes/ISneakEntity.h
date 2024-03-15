#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISneakEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISneakEntity"));
	}


	template <typename R = bool> R get_isSneak() {
		return ((R (*)(ISneakEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isSneak(bool value) {
		return ((R (*)(ISneakEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

