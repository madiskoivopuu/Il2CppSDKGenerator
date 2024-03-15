#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITrueVisionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITrueVisionEntity"));
	}


	template <typename R = bool> R get_isTrueVision() {
		return ((R (*)(ITrueVisionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isTrueVision(bool value) {
		return ((R (*)(ITrueVisionEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

