#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInstabilityEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInstabilityEntity"));
	}


	template <typename R = bool> R get_isInstability() {
		return ((R (*)(IInstabilityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isInstability(bool value) {
		return ((R (*)(IInstabilityEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

