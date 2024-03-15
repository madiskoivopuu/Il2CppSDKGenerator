#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IExplodeOnDeathEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IExplodeOnDeathEntity"));
	}


	template <typename R = bool> R get_isExplodeOnDeath() {
		return ((R (*)(IExplodeOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isExplodeOnDeath(bool value) {
		return ((R (*)(IExplodeOnDeathEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

