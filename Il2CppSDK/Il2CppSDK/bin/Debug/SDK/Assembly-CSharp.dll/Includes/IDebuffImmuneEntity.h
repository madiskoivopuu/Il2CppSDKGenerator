#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDebuffImmuneEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDebuffImmuneEntity"));
	}


	template <typename T = bool> T get_isDebuffImmune() {
		return ((T (*)(IDebuffImmuneEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isDebuffImmune(bool value) {
		return ((T (*)(IDebuffImmuneEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

