#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISneakEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISneakEntity"));
	}


	template <typename T = bool> T get_isSneak() {
		return ((T (*)(ISneakEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isSneak(bool value) {
		return ((T (*)(ISneakEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
