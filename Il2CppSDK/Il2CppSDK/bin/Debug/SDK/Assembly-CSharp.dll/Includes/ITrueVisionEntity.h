#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITrueVisionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITrueVisionEntity"));
	}


	template <typename T = bool> T get_isTrueVision() {
		return ((T (*)(ITrueVisionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isTrueVision(bool value) {
		return ((T (*)(ITrueVisionEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

