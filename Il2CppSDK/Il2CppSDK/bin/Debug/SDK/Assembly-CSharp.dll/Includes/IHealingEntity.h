#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHealingEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHealingEntity"));
	}


	template <typename T = bool> T get_isHealing() {
		return ((T (*)(IHealingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isHealing(bool value) {
		return ((T (*)(IHealingEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

