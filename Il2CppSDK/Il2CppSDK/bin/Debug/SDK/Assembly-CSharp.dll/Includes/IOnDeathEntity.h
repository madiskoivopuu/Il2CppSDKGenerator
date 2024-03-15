#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOnDeathEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOnDeathEntity"));
	}


	template <typename R = bool> R get_isOnDeath() {
		return ((R (*)(IOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isOnDeath(bool value) {
		return ((R (*)(IOnDeathEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

