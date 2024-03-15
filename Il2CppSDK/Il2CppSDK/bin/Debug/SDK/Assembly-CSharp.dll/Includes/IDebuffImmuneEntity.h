#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDebuffImmuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDebuffImmuneEntity"));
	}


	template <typename R = bool> R get_isDebuffImmune() {
		return ((R (*)(IDebuffImmuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isDebuffImmune(bool value) {
		return ((R (*)(IDebuffImmuneEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

