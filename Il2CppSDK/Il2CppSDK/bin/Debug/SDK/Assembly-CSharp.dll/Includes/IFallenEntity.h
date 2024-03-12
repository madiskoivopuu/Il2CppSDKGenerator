#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFallenEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFallenEntity"));
	}


	template <typename T = bool> T get_isFallen() {
		return ((T (*)(IFallenEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isFallen(bool value) {
		return ((T (*)(IFallenEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
