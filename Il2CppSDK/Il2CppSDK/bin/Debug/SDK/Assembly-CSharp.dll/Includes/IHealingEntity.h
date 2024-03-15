#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHealingEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHealingEntity"));
	}


	template <typename R = bool> R get_isHealing() {
		return ((R (*)(IHealingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isHealing(bool value) {
		return ((R (*)(IHealingEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

