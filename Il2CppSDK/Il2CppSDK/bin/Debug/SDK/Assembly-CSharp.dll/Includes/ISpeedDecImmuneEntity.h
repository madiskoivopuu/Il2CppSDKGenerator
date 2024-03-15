#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISpeedDecImmuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISpeedDecImmuneEntity"));
	}


	template <typename R = bool> R get_isSpeedDecImmune() {
		return ((R (*)(ISpeedDecImmuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isSpeedDecImmune(bool value) {
		return ((R (*)(ISpeedDecImmuneEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

