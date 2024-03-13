#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILostControlEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILostControlEntity"));
	}


	template <typename T = bool> T get_isLostControl() {
		return ((T (*)(ILostControlEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isLostControl(bool value) {
		return ((T (*)(ILostControlEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

