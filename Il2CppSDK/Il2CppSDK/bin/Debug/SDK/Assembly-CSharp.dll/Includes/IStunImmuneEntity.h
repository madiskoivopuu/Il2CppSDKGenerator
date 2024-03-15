#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStunImmuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStunImmuneEntity"));
	}


	template <typename R = bool> R get_isStunImmune() {
		return ((R (*)(IStunImmuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isStunImmune(bool value) {
		return ((R (*)(IStunImmuneEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

