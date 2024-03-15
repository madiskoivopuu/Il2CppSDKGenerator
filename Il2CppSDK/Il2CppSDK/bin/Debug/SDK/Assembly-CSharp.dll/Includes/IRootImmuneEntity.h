#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRootImmuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRootImmuneEntity"));
	}


	template <typename R = bool> R get_isRootImmune() {
		return ((R (*)(IRootImmuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isRootImmune(bool value) {
		return ((R (*)(IRootImmuneEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

