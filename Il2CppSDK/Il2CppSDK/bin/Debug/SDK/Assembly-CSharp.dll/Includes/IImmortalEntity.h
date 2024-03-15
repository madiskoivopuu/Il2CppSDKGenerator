#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IImmortalEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IImmortalEntity"));
	}


	template <typename R = bool> R get_isImmortal() {
		return ((R (*)(IImmortalEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isImmortal(bool value) {
		return ((R (*)(IImmortalEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

