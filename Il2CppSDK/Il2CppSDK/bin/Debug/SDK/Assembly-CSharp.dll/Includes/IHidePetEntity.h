#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHidePetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHidePetEntity"));
	}


	template <typename R = bool> R get_isHidePet() {
		return ((R (*)(IHidePetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isHidePet(bool value) {
		return ((R (*)(IHidePetEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

