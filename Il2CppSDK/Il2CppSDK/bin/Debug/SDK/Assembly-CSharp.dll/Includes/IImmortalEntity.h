#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IImmortalEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IImmortalEntity"));
	}


	template <typename T = bool> T get_isImmortal() {
		return ((T (*)(IImmortalEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isImmortal(bool value) {
		return ((T (*)(IImmortalEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

