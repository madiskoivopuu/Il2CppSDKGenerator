#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFallenEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFallenEntity"));
	}


	template <typename R = bool> R get_isFallen() {
		return ((R (*)(IFallenEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isFallen(bool value) {
		return ((R (*)(IFallenEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

