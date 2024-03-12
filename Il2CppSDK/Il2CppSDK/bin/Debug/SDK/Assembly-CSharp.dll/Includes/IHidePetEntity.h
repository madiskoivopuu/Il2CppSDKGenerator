#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHidePetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHidePetEntity"));
	}


	template <typename T = bool> T get_isHidePet() {
		return ((T (*)(IHidePetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isHidePet(bool value) {
		return ((T (*)(IHidePetEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
