#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRootImmuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRootImmuneEntity"));
	}


	template <typename T = bool> T get_isRootImmune() {
		return ((T (*)(IRootImmuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isRootImmune(bool value) {
		return ((T (*)(IRootImmuneEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

