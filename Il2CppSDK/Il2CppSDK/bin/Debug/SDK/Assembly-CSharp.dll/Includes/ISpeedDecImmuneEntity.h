#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISpeedDecImmuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISpeedDecImmuneEntity"));
	}


	template <typename T = bool> T get_isSpeedDecImmune() {
		return ((T (*)(ISpeedDecImmuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isSpeedDecImmune(bool value) {
		return ((T (*)(ISpeedDecImmuneEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
