#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAliveEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAliveEntity"));
	}


	template <typename T = bool> T get_isAlive() {
		return ((T (*)(IAliveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isAlive(bool value) {
		return ((T (*)(IAliveEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
