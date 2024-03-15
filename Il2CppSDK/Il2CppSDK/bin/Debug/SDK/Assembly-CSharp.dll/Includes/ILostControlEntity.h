#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILostControlEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILostControlEntity"));
	}


	template <typename R = bool> R get_isLostControl() {
		return ((R (*)(ILostControlEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isLostControl(bool value) {
		return ((R (*)(ILostControlEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

