#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IExplodeOnDeathEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IExplodeOnDeathEntity"));
	}


	template <typename T = bool> T get_isExplodeOnDeath() {
		return ((T (*)(IExplodeOnDeathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isExplodeOnDeath(bool value) {
		return ((T (*)(IExplodeOnDeathEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
