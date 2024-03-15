#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAliveEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAliveEntity"));
	}


	template <typename R = bool> R get_isAlive() {
		return ((R (*)(IAliveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isAlive(bool value) {
		return ((R (*)(IAliveEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

