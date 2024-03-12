#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICursedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICursedEntity"));
	}


	template <typename T = bool> T get_isCursed() {
		return ((T (*)(ICursedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isCursed(bool value) {
		return ((T (*)(ICursedEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
