#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOnDeathEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOnDeathEntity"));
	}


	template <typename T = bool> T get_isOnDeath() {
		return ((T (*)(IOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isOnDeath(bool value) {
		return ((T (*)(IOnDeathEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

