#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICursedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICursedEntity"));
	}


	template <typename R = bool> R get_isCursed() {
		return ((R (*)(ICursedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isCursed(bool value) {
		return ((R (*)(ICursedEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

